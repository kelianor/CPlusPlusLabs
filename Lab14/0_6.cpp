#include <iostream>
using namespace std;

int main()
{
    union codeUnion
    {
        char simb;
        struct z
        {
            int x: 5;
            int y: 3;
        } hh;
    } cod;

    cod.hh.x = 4;// x = 001002
    cod.hh.y = 2;// y = 0102

    cout << cod.simb;// ‘D’ (код = 010001002 == 6810 == 4416)

    system("pause");
    return 0;
}