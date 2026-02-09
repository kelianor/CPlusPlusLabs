#include <iostream>
#include <cstring>
#include "RegexMatch.h"
using namespace std;

int main()
{
    char str[] = "aAXa aeffa aGha aza";
    if(matchRegExpr(str))
    {
        cout << "Строка правильная\n";
    }
    else
    {
        cout << "Строка не правильная\n";
    }
    return 0;
}