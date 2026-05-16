#include <iostream>
#include <cstring>
#include <regex>
using namespace std;

const int MAX_LAST_FLIGHTS = 10;
const int SIZE = 4;

class Airport
{
private:
    int visitsPerDay;
    double avgNumOfFlightsPerDay;
    char airClass;
    bool inUse;
    char airportCode[SIZE];
    int lastFlightCodes[MAX_LAST_FLIGHTS];

public:
    int setVisitsPerDay(int visits)
    {
        this->visitsPerDay = visits;
        return this->visitsPerDay;
    }

    double setAvgNumOfFlightsPerDay(double avg)
    {
        this->avgNumOfFlightsPerDay = avg;
        return this->avgNumOfFlightsPerDay;
    }

    char setAirClass(char airClass)
    {
        if(airClass >= 'A' && airClass <= 'F')
        {
            this->airClass = airClass;
        }
        return this->airClass;
    }

    bool setInUseFlag(int inUse)
    {
        this->inUse = inUse;
        return this->inUse;
    }

    int* appendLastFlight(int code)
    {
        for(int i = MAX_LAST_FLIGHTS-1; i > 0; i--)
        {
            this->lastFlightCodes[i] = this->lastFlightCodes[i-1];
        }
        this->lastFlightCodes[0] = code;
        return this->lastFlightCodes;
    }

    char* setAirportCode(char *code)
    {
        regex airCode(R"([a-zA-Z]{3,3})");
        if(regex_match(code, airCode))
        {
            strcpy(this->airportCode, code);
        }
        return this->airportCode;
    }

    int getVisitsPerDay() const { return this->visitsPerDay; }
    double getAvgNumOfFlightsPerDay() const { return this->avgNumOfFlightsPerDay; }
    char getAirClass() const { return this->airClass; }
    bool getInUseFlag() const { return this->inUse; }
    const int* getLastFlightArr() const { return this->lastFlightCodes; }
    const char* getAirportCode() const { return this->airportCode; }

    Airport(int visitsPerDay, double avgNumOfFlightsPerDay, char airClass, bool inUse, const char *airportCode)
    {
        setVisitsPerDay(visitsPerDay);
        setAvgNumOfFlightsPerDay(avgNumOfFlightsPerDay);
        setAirClass(airClass);
        setInUseFlag(inUse);
        setAirportCode((char*)airportCode);

        for(int i = 0; i < MAX_LAST_FLIGHTS; i++)
        {
            this->lastFlightCodes[i] = -1;
        }
        cout << "Проработал конструктор с параметрами\n";
    }

    Airport() : Airport(0, 0.0, 'A', true, "NON")
    {
        cout << "С помощью конструктора без параметров\n";
    }

    ~Airport()
    {
        cout << "Аэропорт уничтожен\n";
    }

    void Print() const
    {
        cout << "Посещений в день: " << visitsPerDay << endl;
        cout << "Ср-ее кол-во полётов в день: " << avgNumOfFlightsPerDay << endl;
        cout << "Класс аэропорта: " << airClass << endl;
        cout << "Состояние: " << (inUse ? "используется" : "списан") << endl;
        cout << "Код аэропорта: " << airportCode << endl;
        cout << "Последние полёты: ";

        for(int i = 0; i < MAX_LAST_FLIGHTS; i++)
        {
            if(lastFlightCodes[i] >= 0) 
            {
                cout << lastFlightCodes[i] << ", ";
            }
        }
        cout << endl;
    }

    double СвангаватьКоличествоПолетов(int времяВылета, int времяПрилета, int текущееКоличествоСамолетов, int промежутокВремени)
    {
        if(времяПрилета <= 0 || времяВылета <= 0)
        {
            return -1;
        }
        double СамолетовБудет = текущееКоличествоСамолетов + промежутокВремени / времяПрилета - промежутокВремени / времяВылета;
        return (СамолетовБудет < 0 ? 0 : СамолетовБудет);
    }


    Airport operator*(double val) 
    {
        Airport temp(*this); // Создаем копию текущего объекта
        temp.visitsPerDay = this->visitsPerDay * val;
        temp.avgNumOfFlightsPerDay = this->avgNumOfFlightsPerDay * val;
        return temp;
    }
// 2. Постфиксный декремент
    Airport operator--(int) 
    {
        Airport temp(*this); // Сохраняем состояние до изменения
        this->visitsPerDay--;
        this->avgNumOfFlightsPerDay--;
        return temp; // Возвращаем старое состояние
    }

    bool operator>=(const Airport& other) const 
    {
        return this->avgNumOfFlightsPerDay >= other.avgNumOfFlightsPerDay;
    }
};

int main()
{
    Airport airport1(100, 50.5, 'B', true, "MSK");
    Airport airport2(80, 40.0, 'C', true, "SVO");
    
    cout << "\nИсходный Аэропорт 1:\n";
    airport1.Print();

    cout << "\n1. Умножение Аэропорта 1 на 1.5:\n";
    Airport airport3 = airport1 * 1.5;
    airport3.Print();

    cout << "\n2. Постфиксный декремент Аэропорта 1 (airport1--):\n";
    airport1--; 
    cout << "Состояние Аэропорта 1 после декремента:\n";
    airport1.Print();
    
    cout << "\n3. Сравнение объектов (airport1 >= airport2):\n";
    if (airport1 >= airport2) {
        cout << "airport1 больше или равен airport2 по числу полетов.\n";
    } else {
        cout << "airport1 меньше airport2 по числу полетов.\n";
    }

    return 0;
}