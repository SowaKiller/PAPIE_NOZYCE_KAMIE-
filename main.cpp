#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string>


using namespace std;

std::string symbol_1;

int symbol, symbol_AI, LB=0, LB_AI=0, wybor_BD;

int main()
{
    cout << "Witam" << endl;
    cout << "1 -> PAPIER" << endl;
    cout << "2 -> NOZYCE" << endl;
    cout << "3 -> KAMIEN" << endl;

    Sleep(500);


    system( "cls" );


    for(;;)
       {

    Sleep(500);
    cout << "" << endl;
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
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }

        if(symbol==2)
        {
            cout << "NIESTETY PRZEGRALES" << endl;
            LB_AI++;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }

        if(symbol==1)
        {
            cout << "!!!WYGRAELES!!!" << endl;LB_AI++;
            LB++;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }
       }

       if(symbol_AI==2)
       {
        cout << "Ty wybrales "<<symbol<<" a twoj przeciwnik NOZYCE"<<endl;

        if(symbol==3)
        {
            cout << "!!!WYGRAELES!!!"<<endl;
            LB++;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }

        if(symbol==2)
        {
            cout << "REMIS"<<endl;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }

        if(symbol==1)
        {
            cout << "NIESTETY PRZEGRALES"<<endl;
            LB_AI++;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }
       }



       if(symbol_AI==3)
       {
        cout << "Ty wybrales "<<symbol<<" a twoj przeciwnik PAPIER"<<endl;

        if(symbol==3)
        {
            cout << "NIESTETY PRZEGRALES"<<endl;
            LB_AI++;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }

        if(symbol==2)
        {
            cout << "!!!WYGRAELES!!!"<<endl;
            LB++;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }

        if(symbol==1)
        {
            cout << "REMIS"<<endl;
            cout << "Wyniki to "<<LB<<":"<<LB_AI<< endl;
        }
       }

       cout << "Czy chesz zakonczyc?" << endl;
       cout << "1.TAK" << endl;
       cout << "2.NIE" << endl;
       cin >> wybor_BD;

       if(wybor_BD==1)
       {
           return 0;
       }

       system( "cls" );




       }




















    return 0;
}
