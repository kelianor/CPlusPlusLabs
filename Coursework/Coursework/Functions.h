#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace System::Drawing;
using namespace System::Globalization;
using namespace System::Collections::Generic;

namespace Coursework {
    public value struct Settings {
        System::Drawing::Color backColor;
        System::Globalization::CultureInfo^ culture;
        String^ login;
        String^ password;
    };

    public ref class SettingsManager {
    private:
        String^ filePath;
        Settings settings;

    public:
        SettingsManager(String^ path)
        {
            filePath = path;
            if (!File::Exists(filePath)) {
                settings.backColor = SystemColors::Control;
                settings.culture = CultureInfo::InvariantCulture;
                settings.login = "";
                settings.password = "";
                save();
            }
            else {
                readSettings();
            }
        }

        void readSettings()
        {
            FileStream^ fs = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
            BinaryReader^ br = gcnew BinaryReader(fs);

            try {
                int argb = br->ReadInt32();
                settings.backColor = Color::FromArgb(argb);

                String^ cultureName = br->ReadString();
                settings.login = br->ReadString();
                settings.password = br->ReadString();
                if (!String::IsNullOrEmpty(cultureName)) {
                    settings.culture = gcnew CultureInfo(cultureName);
                }
                else {
                    settings.culture = CultureInfo::InvariantCulture;
                }
            }
            finally {
                br->Close();
                fs->Close();
            }
        }

        System::Drawing::Color getColor()
        {
            return settings.backColor;
        }

        System::Globalization::CultureInfo^ getCulture()
        {
            return settings.culture;
        }

        String^ getLogin()
        {
            return settings.login;
        }

        String^ getPassword()
        {
            return settings.password;
        }

        void setCulture(System::Globalization::CultureInfo^ culture)
        {
            settings.culture = culture;
            save();
        }

        void setColor(System::Drawing::Color backColor)
        {
            settings.backColor = backColor;
            save();
        }

        void setLogin(String^ login)
        {
            settings.login = login;
            save();
        }

        void setPassword(String^ password)
        {
            settings.password = password;
            save();
        }

        void save()
        {
            FileStream^ fs = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
            BinaryWriter^ bw = gcnew BinaryWriter(fs);
            try {
                bw->Write(settings.backColor.ToArgb());
                bw->Write((settings.culture == nullptr) ? String::Empty : settings.culture->Name);
                bw->Write((settings.login == nullptr) ? String::Empty : settings.login);
                bw->Write((settings.password == nullptr) ? String::Empty : settings.password);
            }
            finally {
                bw->Close();
                fs->Close();
            }
        }

        void logout()
        {
            settings.login = "";
            settings.password = "";
            save();
        }
    };

    public value struct UserRecord {
        String^ login;
        String^ password;
    };

    public ref class AccountManager {
    private:
        UserRecord signedInUser;
        bool isAuthenticated;
        String^ filePath;

    public:
        AccountManager()
        {
            isAuthenticated = false;
            filePath = "credentials.bin";

            if (!File::Exists(filePath)) {
                File::Create(filePath)->Close();
            }
        }
        bool signIn(UserRecord user) {
            isAuthenticated = false;

            FileStream^ fs = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
            BinaryReader^ br = gcnew BinaryReader(fs);

            try {
                while (fs->Position < fs->Length) {
                    UserRecord record;
                    record.login = br->ReadString();
                    record.password = br->ReadString();

                    if (user.login == record.login && user.password == record.password) {
                        isAuthenticated = true;
                        signedInUser = user;
                        break;
                    }
                }
            }
            finally {
                br->Close();
                fs->Close();
            }

            return isAuthenticated;
        }

        bool signUp(UserRecord user) {
            FileStream^ fs = gcnew FileStream(filePath, FileMode::Open, FileAccess::Read);
            BinaryReader^ br = gcnew BinaryReader(fs);
            bool loginExists = false;
            try {
                while (fs->Position < fs->Length) {
                    String^ existingLogin = br->ReadString();
                    br->ReadString();
                    if (user.login == existingLogin) {
                        loginExists = true;
                        break;
                    }
                }
            }
            finally {
                br->Close();
                fs->Close();
            }

            if (loginExists) {
                return false;
            }

            FileStream^ fsWrite = gcnew FileStream(filePath, FileMode::Append, FileAccess::Write);
            BinaryWriter^ bw = gcnew BinaryWriter(fsWrite);
            try {
                bw->Write(user.login);
                bw->Write(user.password);
            }
            finally {
                bw->Close();
                fsWrite->Close();
            }

            signedInUser = user;
            isAuthenticated = true;
            return true;
        }
        bool getIsAuthenticated()
        {
            return isAuthenticated;
        }
        void logout()
        {
            isAuthenticated = false;
        }

        String^ getName()
        {
            return signedInUser.login;
        }
    };

    public ref class Map {
    private:
        int rows;
        int cols;
        String^ author;
        array<bool, 2>^ map;
        System::Drawing::Point start;
        System::Drawing::Point end;
        bool changed;
    public:
        Map(int rows, int cols)
        {
            this->rows = rows;
            this->cols = cols;
            map = gcnew array<bool, 2>(rows, cols);
            this->start = System::Drawing::Point(-1, -1);
            this->end = System::Drawing::Point(-1, -1);
            this->author = "";
            this->changed = false;
        }
        bool getChanged()
        {
            return changed;
        }
        void setChanged(bool c)
        {
            changed = c;
        }

        void setCell(Point point, bool value)
        {
            if (point.X >= 0 && point.X < rows && point.Y >= 0 && point.Y < cols) {
                map[point.X, point.Y] = value;
            }
            setChanged(true);
        }

        void setRows(int newRows)
        {
            array<bool, 2>^ newMap = gcnew array<bool, 2>(newRows, cols);
            copy(newMap, System::Math::Min(newRows, rows), cols);
            for (int i = rows; i < newRows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    newMap[i, j] = false;
                }
            }
            map = newMap;
            rows = newRows;
            setChanged(true);
        }

        void setCols(int newCols)
        {
            array<bool, 2>^ newMap = gcnew array<bool, 2>(rows, newCols);
            copy(newMap, rows, System::Math::Min(newCols, cols));
            for (int i = 0; i < rows; i++)
            {
                for (int j = cols; j < newCols; j++)
                {
                    newMap[i, j] = false;
                }
            }
            map = newMap;
            cols = newCols;
            setChanged(true);
        }

        void setAuthor(String^ author)
        {
            this->author = author;
        }

        void setStart(Point start)
        {
            if (start.X == -1 && start.Y == -1)
            {
                this->start.X = -1;
                this->start.Y = -1;
                return;
            }
            if (getCell(start) == false)
            {
                this->start.X = start.X;
                this->start.Y = start.Y;
            }
            setChanged(true);
        }

        void setEnd(Point end)
        {
            if (end.X == -1 && end.Y == -1)
            {
                this->end.X = -1;
                this->end.Y = -1;
                return;
            }
            if (getCell(end) == false)
            {
                this->end.X = end.X;
                this->end.Y = end.Y;
            }
            setChanged(true);
        }

        bool getCell(System::Drawing::Point point)
        {
            if (point.X >= 0 && point.X < rows && point.Y >= 0 && point.Y < cols) {
                return map[point.X, point.Y];
            }
            return true;
        }

        int getRows()
        {
            return rows;
        }

        int getCols()
        {
            return cols;
        }

        String^ getAuthor()
        {
            return author;
        }

        System::Drawing::Point getStart()
        {
            return start;
        }

        System::Drawing::Point getEnd()
        {
            return end;
        }

        void clear()
        {
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    map[i, j] = 0;
                }
            }
            setStart(Point(-1, -1));
            setEnd(Point(-1, -1));
        }

        void copy(array<bool, 2>^ to, int rows, int cols)
        {
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    to[i, j] = map[i, j];
                }
            }
        }
    };

    public ref class MapManager : public Map
    {
    private:
        String^ path = nullptr;
    public:
        MapManager(int rows, int cols, String^ path) : Map(rows, cols)
        {
            this->path = path;
        }

        String^ getPath()
        {
            return path;
        }

        void setPath(String^ newPath)
        {
            this->path = newPath;
        }

        void save()
        {
            saveAs(path);
        }

        void saveAs(String^ path)
        {
            if (path == nullptr) return;
            this->path = path;
            FileStream^ fs = gcnew FileStream(path, FileMode::Create, FileAccess::Write);
            BinaryWriter^ bw = gcnew BinaryWriter(fs);
            try {
                bw->Write(getAuthor() != nullptr ? getAuthor() : "Unknown");
                bw->Write(getRows());
                bw->Write(getCols());
                Point s = getStart(), e = getEnd();

                bw->Write(s.X);
                bw->Write(s.Y);

                bw->Write(e.X);
                bw->Write(e.Y);

                Point cellIndex(0, 0);
                for (cellIndex.X = 0; cellIndex.X < getRows(); cellIndex.X++)
                {
                    for (cellIndex.Y = 0; cellIndex.Y < getCols(); cellIndex.Y++)
                    {
                        bw->Write(getCell(cellIndex));
                    }
                }
            }
            finally {
                bw->Close();
                fs->Close();
            }
        }

        void open(String^ path)
        {
            if (path == nullptr) return;
            this->path = path;
            FileStream^ fs = gcnew FileStream(path, FileMode::Open, FileAccess::Read);
            BinaryReader^ br = gcnew BinaryReader(fs);

            try {
                setAuthor(br->ReadString());

                int fileRows = br->ReadInt32();
                int fileCols = br->ReadInt32();

                int startX = br->ReadInt32();
                int startY = br->ReadInt32();

                int endX = br->ReadInt32();
                int endY = br->ReadInt32();

                setRows(fileRows);
                setCols(fileCols);

                setStart(Point(startX, startY));
                setEnd(Point(endX, endY));

                Point cellIndex(0, 0);
                for (cellIndex.X = 0; cellIndex.X < getRows(); cellIndex.X++)
                {
                    for (cellIndex.Y = 0; cellIndex.Y < getCols(); cellIndex.Y++)
                    {
                        setCell(cellIndex, br->ReadBoolean());
                    }
                }
                setChanged(false);
            }
            finally {
                br->Close();
                fs->Close();
            }
        }
    };

    public value struct Marshroute {
        List<System::Drawing::Point>^ pathList;
    };

    public ref class PathFinder {
    private:
        array<int, 2>^ leeMap;
    public:
        Marshroute result;
        bool pathFound = false;
        Map^ map;
        PathFinder(Map^ map)
        {
            this->map = map;
            map->setStart(Point(-1, -1));
            map->setEnd(Point(-1, -1));
        }

        void findPath()
        {
            pathFound = false;

            int rows = map->getRows();
            int cols = map->getCols();

            Point start = map->getStart();
            Point end = map->getEnd();

            leeMap = gcnew array<int, 2>(rows, cols);
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    leeMap[i, j] = -1; // -1 клетка еще не посещена
                }
            }

            if (map->getCell(start) || map->getCell(end)) return;

            System::Collections::Generic::Queue<System::Drawing::Point>^ queue = gcnew System::Collections::Generic::Queue<System::Drawing::Point>();

            leeMap[start.X, start.Y] = 0;
            queue->Enqueue(start);

            array<int>^ dx = { -1, 1, 0, 0 };
            array<int>^ dy = { 0, 0, -1, 1 };

            while (queue->Count > 0)
            {
                System::Drawing::Point curr = queue->Dequeue();

                if (curr == end)
                {
                    pathFound = true;
                    break;
                }

                int currentDist = leeMap[curr.X, curr.Y];

                for (int i = 0; i < 4; i++)
                {
                    Point n;
                    n.X = curr.X + dx[i];
                    n.Y = curr.Y + dy[i];

                    if (n.X >= 0 && n.X < rows && n.Y >= 0 && n.Y < cols)
                    {
                        if (map->getCell(n) == false && leeMap[n.X, n.Y] == -1)
                        {
                            leeMap[n.X, n.Y] = currentDist + 1;
                            queue->Enqueue(n);
                        }
                    }
                }
            }

            if (pathFound)
            {
                result.pathList = gcnew List<System::Drawing::Point>();
                System::Drawing::Point curr = end;
                result.pathList->Add(curr);

                while (curr != start) {
                    int currentVal = leeMap[curr.X, curr.Y];
                    bool stepMade = false;

                    for (int i = 0; i < 4; i++) {
                        int nx = curr.X + dx[i];
                        int ny = curr.Y + dy[i];

                        if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {
                            if (leeMap[nx, ny] == currentVal - 1) {
                                curr = System::Drawing::Point(nx, ny);
                                result.pathList->Add(curr);
                                stepMade = true;
                                break;
                            }
                        }
                    }

                    if (!stepMade) break; // Защита от бесконечного цикла
                }
            }
            else {
                result.pathList = nullptr;
            }
        }

        int getCell(Point p)
        {
            if (leeMap == nullptr) return -1;

            if (p.X >= 0 && p.X < map->getRows() && p.Y >= 0 && p.Y < map->getCols()) {
                return leeMap[p.X, p.Y];
            }
            return -1;
        }

        void clear()
        {
            map->clear();
            leeMap = nullptr;
            result.pathList = nullptr;
            pathFound = false;
        }
    };

    public ref class MapDrawer
    {
    private:
        System::Drawing::Graphics^ graphics;
        PathFinder^ walkedMap;
        Map^ map;
    public:
        MapDrawer() : MapDrawer(nullptr, nullptr) {}
        MapDrawer(System::Drawing::Graphics^ graphics, PathFinder^ walkedMap)
        {
            this->graphics = graphics;
            this->walkedMap = walkedMap;
            map = walkedMap->map;
        }

        void drawMap(int width, int height, bool viewer)
        {
            if (walkedMap == nullptr || graphics == nullptr) return;

            System::Drawing::Brush^ brush = System::Drawing::Brushes::White;

            int marginLeft = calcLeftMargin(width, height);
            int marginTop = calcTopMargin(width, height);

            int cellSize = calcCellSize(width, height);

            Point cellIndex(0, 0);

            for (cellIndex.X = 0; cellIndex.X < map->getRows(); cellIndex.X++)
            {
                for (cellIndex.Y = 0; cellIndex.Y < map->getCols(); cellIndex.Y++)
                {
                    bool cell = map->getCell(cellIndex);
                    if (cell == false) // false - пустая клетка, true - наоборот
                    {
                        if (cellIndex == map->getStart() && viewer)
                        {
                            brush = System::Drawing::Brushes::Red;
                        }
                        else if (cellIndex == map->getEnd() && viewer)
                        {
                            brush = System::Drawing::Brushes::Green;
                        }
                        else
                        {
                            brush = System::Drawing::Brushes::White;
                        }
                    }
                    else
                    {
                        brush = System::Drawing::Brushes::Black;
                    }

                    // X столбцы, Y строки
                    graphics->FillRectangle(brush, marginLeft + cellIndex.Y * cellSize, marginTop + cellIndex.X * cellSize, cellSize, cellSize);
                    graphics->DrawRectangle(System::Drawing::Pens::Black, marginLeft + cellIndex.Y * cellSize, marginTop + cellIndex.X * cellSize, cellSize, cellSize);

                    // Отрисовка чисел волны
                    if (walkedMap->getCell(cellIndex) >= 1 & viewer)
                    {
                        System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", cellSize / 2.0f);
                        graphics->DrawString(walkedMap->getCell(cellIndex).ToString(), font, System::Drawing::Brushes::Black, marginLeft + cellIndex.Y * cellSize, marginTop + cellIndex.X * cellSize);
                    }
                }
            }

            // Наложение жёлтого пути Ли поверх сетки
            List<Point>^ walked = walkedMap->result.pathList;
            if(walked != nullptr & walkedMap->pathFound)
            {
                if (viewer & walked->Count > 0)
                {
                    brush = System::Drawing::Brushes::Yellow;
                    for each (Point p in walked)
                    {
                        if (p == map->getStart() || p == map->getEnd()) continue;

                        if (p.X >= 0 && p.X < walkedMap->map->getRows() && p.Y >= 0 && p.Y < walkedMap->map->getCols())
                        {
                            graphics->FillRectangle(brush, marginLeft + p.Y * cellSize, marginTop + p.X * cellSize, cellSize, cellSize);
                            graphics->DrawRectangle(System::Drawing::Pens::Black, marginLeft + p.Y * cellSize, marginTop + p.X * cellSize, cellSize, cellSize);

                            if (walkedMap->getCell(p) >= 1 & viewer)
                            {
                                System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", cellSize / 2.0f);
                                graphics->DrawString(walkedMap->getCell(p).ToString(), font, System::Drawing::Brushes::Black, marginLeft + p.Y * cellSize, marginTop + p.X * cellSize);
                            }
                        }
                    }
                }
            }
        }
        // Расчёт отступов для центрирования карты
        int calcLeftMargin(int width, int height)
        {
            int cellSize = calcCellSize(width, height);
            int mapWidth = cellSize * walkedMap->map->getCols();
            return (width - mapWidth) / 2;
        }

        int calcTopMargin(int width, int height)
        {
            int cellSize = calcCellSize(width, height);
            int mapHeight = cellSize * walkedMap->map->getRows();
            return (height - mapHeight) / 2;
        }

        int calcCellSize(int width, int height)
        {
            if (walkedMap == nullptr || walkedMap->map == nullptr) return 1;

            int cellWidth = width / walkedMap->map->getCols();
            int cellHeight = height / walkedMap->map->getRows();

            return System::Math::Max(1, System::Math::Min(cellWidth, cellHeight));
        }

        // Получить координаты ячейки по клику на карте
        System::Drawing::Point getCellPos(int mouseX, int mouseY, int width, int height)
        {
            System::Drawing::Point cell(-1, -1);
            if (walkedMap == nullptr || walkedMap->map == nullptr) return cell;

            int cellSize = calcCellSize(width, height);
            if (cellSize <= 0) return cell;

            int marginLeft = calcLeftMargin(width, height);
            int marginTop = calcTopMargin(width, height);

            cell.X = (mouseY - marginTop) / cellSize;
            cell.Y = (mouseX - marginLeft) / cellSize;

            if (cell.X >= 0 && cell.X < walkedMap->map->getRows() && cell.Y >= 0 && cell.Y < walkedMap->map->getCols())
            {
                return cell;
            }
            return System::Drawing::Point(-1, -1);
        }

        void setWalkedMap(PathFinder^ walkedMap)
        {
            this->walkedMap = walkedMap;
            map = walkedMap->map;
        }

        void setGraphics(System::Drawing::Graphics^ graphics)
        {
            this->graphics = graphics;
            this->walkedMap = walkedMap;
        }
    };

    enum class EditMode {
        EditObstacles,
        SetStart,
        SetFinish
    };
}