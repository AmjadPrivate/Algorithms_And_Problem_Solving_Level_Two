#include <iostream>


using namespace std;


int ReadPositiveNumber(string Message)
{

    int Number = 0;


    do
    {
        cout << Message << endl;
        cin >> Number;
    }
    while (Number <= 0);
    
    
    return Number;
}


void PrintDigits(int Number)
{

    short int Remainder = 0;

    cout << endl;

    while(Number != 0)
    {
        Remainder = Number % 10;

        Number = Number / 10;

        cout << Remainder << endl;
    }



}

int main()
{

    PrintDigits(ReadPositiveNumber("Enter A Positive Number? "));

    return 0;
}
