#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>


using namespace std;

int symbol, symbol_AI;

int main()
{
    cout << "Witam" << endl;
    cout << "1 -> PAPIER" << endl;
    cout << "2 -> NOZYCE" << endl;
    cout << "3 -> KAMIEN" << endl;

    Sleep(2000);

    system( "cls" );

    cout << "!!!ZACZYNAMY!!!" << endl;
    cout << "1 -> PAPIER" << endl;
    cout << "2 -> NOZYCE" << endl;
    cout << "3 -> KAMIEN" << endl;

    cin >> symbol;

    Sleep(500);


    srand(time(NULL));
       symbol_AI = rand()%3+1;

       if(symbol_AI==1)
       {
        cout << "Ty wybrales "<<symbol<<" a twoj przeciwnik KAMIENIEN"<<endl;

        if(symbol==3)
        {
            cout << "REMIS" << endl;
        }

        if(symbol==2)
        {
            cout << "NIESTETY PRZEGRALES" << endl;
        }

        if(symbol==1)
        {
            cout << "!!!WYGRAELES!!!" << endl;
        }
       }

       if(symbol_AI==2)
       {
        cout << "Ty wybrales "<<symbol<<" a twoj przeciwnik NOZYCE"<<endl;

        if(symbol==3)
        {
            cout << "!!!WYGRAELES!!!"<<endl;
        }

        if(symbol==2)
        {
            cout << "REMIS"<<endl;
        }

        if(symbol==1)
        {
            cout << "NIESTETY PRZEGRALES"<<endl;
        }
       }

       if(symbol_AI==3)
       {
        cout << "Ty wybrales "<<symbol<<" a twoj przeciwnik PAPIER"<<endl;

        if(symbol==3)
        {
            cout << "NIESTETY PRZEGRALES"<<endl;
        }

        if(symbol==2)
        {
            cout << "!!!WYGRAELES!!!"<<endl;
        }

        if(symbol==1)
        {
            cout << "REMIS"<<endl;
        }
       }












    return 0;
}
