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
        for(int i = 1; i < MAX_LAST_FLIGHTS; i++)
        {
            this->lastFlightCodes[i] = this->lastFlightCodes[i-1];
        }

        this->lastFlightCodes[0] = code;

        return this->lastFlightCodes;
    }

    char* setAirportCode(char *code)
    {
        regex airCode(R"([a-z]{3,3})");
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

    Airport()
    {
        Airport(0, 0.0, 'A', true, "MSK");
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

    double СвангаватьКоличествоПолётов()
    {

    }
};

int main()
{
    return 0;
}