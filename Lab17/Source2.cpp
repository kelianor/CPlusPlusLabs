#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<double> setA, setB;
    int countA, countB;

    do
    {
        cout << "Введите количество элементов в множестве A: ";
        cin >> countA;
    } 
    while (countA <= 0);
    
    for(int i = 0; i < countA; i++)
    {
        double input;
        cout << "Введите " << i << "-й элемент множества A: ";
        cin >> input;
        setA.insert(input);
    }

    do
    {
        cout << "Введите количество элементов в множестве B: ";
        cin >> countB;
    } 
    while (countB <= 0);

    for(int i = 0; i < countB; i++)
    {
        double input;
        cout << "Введите " << i << "-й элемент множества B: ";
        cin >> input;
        setB.insert(input);
    }

    cout << "Пересечение множеств A и B:\n";

    set<double>::iterator i = setA.begin(), j = setB.begin();

    while (i != setA.end() & j != setB.end()) 
    {
        if (*i < *j) 
        {
            ++i;
        } 
        else if (*j < *i) 
        {
            ++j;
        } 
        else 
        {  
            cout << *i << '\t';
            ++i;
            ++j;
        }
    }
    cout << endl;
    return 0;
}