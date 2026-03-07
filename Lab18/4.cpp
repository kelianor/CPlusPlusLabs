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
        if(airClass >= 'A' & airClass <= 'F')
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

    int getVisitsPerDay()
    {
        return this->visitsPerDay;
    }

    double getAvgNumOfFlightsPerDay()
    {
        return this->avgNumOfFlightsPerDay;
    }

    char getAirClass()
    {
        return this->airClass;
    }

    bool getInUseFlag()
    {
        return this->inUse;
    }

    int* getLastFlightArr()
    {
        return this->lastFlightCodes;
    }

    char* getAirportCode()
    {
        return this->airportCode;
    }

    Airport(int visitsPerDay, double avgNumOfFlightsPerDay, char airClass, bool inUse, char *airportCode)
    {
        setVisitsPerDay(visitsPerDay);
        setAvgNumOfFlightsPerDay(avgNumOfFlightsPerDay);
        setAirClass(airClass);
        setInUseFlag(inUse);
        setAirportCode(airportCode);

        for(int i = 0; i < MAX_LAST_FLIGHTS; i++)
        {
            this->lastFlightCodes[i] = -1;
        }
        cout << "Проработал конструтор с параметрами\n";
    }

    Airport() : Airport(0, 0.0, 'A', true, "NON")
    {
        cout << "С помощью конструктора без параметров\n";
    }

    ~Airport()
    {
        cout << "Аэропорт уничтожен\n";
    }

    void Print()
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

    double СвангаватьКоличествоПолётов(int времяВылета, int  времяПрилета, int текущееКоличествоСамолетов, int промежутокВремени)
    {
        if(времяПрилета <= 0 | времяВылета <= 0)
        {
            return -1;
        }
        double СамолетовБудет = текущееКоличествоСамолетов + промежутокВремени / времяПрилета - промежутокВремени / времяВылета;
        return (СамолетовБудет < 0 ? 0 : СамолетовБудет);
    }
};

int main()
{
    Airport MSK;
    MSK.Print();
    cout << "Заполнение\n";
    MSK.setVisitsPerDay(1563);
    MSK.setAvgNumOfFlightsPerDay(250);
    MSK.setAirClass('B');
    MSK.setInUseFlag(true);
    MSK.setAirportCode("MSK");
    for(int i = 0; i < MAX_LAST_FLIGHTS; i++)
    {
        int airCode;
        cout << "Код полёта (под индексом " << i << "): ";
        cin >> airCode;
        MSK.appendLastFlight(airCode);
    }
    MSK.Print();
    
    Airport SVO(5, 7.5, 'F', false, "SVO");
    SVO.appendLastFlight(1200);
    SVO.appendLastFlight(1213);
    SVO.appendLastFlight(5469);
    SVO.appendLastFlight(5695);
    SVO.Print();
    
    
    double avgNumOfFlightsPerDay;
    char airClass; 
    bool inUse; 
    char airportCode[SIZE];
    
    Airport *DME = new Airport;
    
    int v;
        cout << "Посещений в день: ";
        cin >> v;
        DME->setVisitsPerDay(v);
    
        double avg;
        cout << "Ср-ее кол-во полётов в день: ";
        cin >> avg;
        DME->setAvgNumOfFlightsPerDay(avg);
    
        char air;
        cout << "Класс аэропорта: ";
        cin >> air;
        DME->setAirClass(air);
    
        bool use;
        cout << "Состояние: ";
        cin >> use;
        DME->setInUseFlag(use);
    
    
    char airCode[SIZE];
    do
    {
        cout << "Код аэропорта: ";
        cin.ignore();
        cin.getline(airCode, 3);
        DME->setAirportCode(airCode);
    } 
    while (strcmp(DME->getAirportCode(), airCode) != 0);
    
    cout << "Последние полёты: ";
    
    for(int i = 0; i < MAX_LAST_FLIGHTS; i++)
    {
        int airCode;
        cout << "Код полёта (под индексом " << i << "): ";
        cin >> airCode;
        DME->appendLastFlight(airCode);
    }
    
    Airport *pMSK = &MSK;
    Airport **ppDME = &DME;
    
    Airport &refMSK = MSK;
    
    cout << pMSK->СвангаватьКоличествоПолётов(06, 59, 12, 199) << endl;
    cout << (**ppDME).СвангаватьКоличествоПолётов(06, 59, 12, 199) << endl;
    cout << refMSK.СвангаватьКоличествоПолётов(06, 59, 12, 199) << endl;
    
    delete DME;
    return 0;
}
