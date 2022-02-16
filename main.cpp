#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Liczba[16];
    cout << "Podaj bity liczby liczac od MSB. Po jednej cyfrze, zatwierdzajac Enter." << endl;
    for(int i=0; i<16; i++)
    {
        int bit;
        cin >> bit;
        Liczba[i]=bit;
    }

    cout << endl;

    int wartosc=0;
    for(int i=0; i<16; i++)
    {
        wartosc = wartosc + Liczba[i]*pow(2,(15-i));
    }

    cout << "Podana liczba to: ";
    for(int i=0; i<16; i++)
    {
        cout << Liczba[i];
    }
    cout << " ";
    cout << wartosc << endl;

    int Przeniesienie[2];
    Przeniesienie[0]=0;
    Przeniesienie[1]=0;

    for(int i=0; i<16; i=i+2)
    {
        if(Liczba[i]==0 && Liczba[i+1]==0)
        {
            if(Przeniesienie[0]==0 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=0;
            }
            else if(Przeniesienie[0]==0 && Przeniesienie[1]==1)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=1;
            }
            else if(Przeniesienie[0]==1 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=1;
                Przeniesienie[1]=0;
            }
        }

        else if(Liczba[i]==0 && Liczba[i+1]==1)
        {
            if(Przeniesienie[0]==0 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=1;
            }
            else if(Przeniesienie[0]==0 && Przeniesienie[1]==1)
            {
                Przeniesienie[0]=1;
                Przeniesienie[1]=0;
            }
            else if(Przeniesienie[0]==1 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=0;
            }
        }

        else if(Liczba[i]==1 && Liczba[i+1]==0)
        {
            if(Przeniesienie[0]==0 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=1;
                Przeniesienie[1]=0;
            }
            else if(Przeniesienie[0]==0 && Przeniesienie[1]==1)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=0;
            }
            else if(Przeniesienie[0]==1 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=1;
            }
        }

        else if(Liczba[i]==1 && Liczba[i+1]==1)
        {
            if(Przeniesienie[0]==0 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=0;
            }
            else if(Przeniesienie[0]==0 && Przeniesienie[1]==1)
            {
                Przeniesienie[0]=0;
                Przeniesienie[1]=1;
            }
            else if(Przeniesienie[0]==1 && Przeniesienie[1]==0)
            {
                Przeniesienie[0]=1;
                Przeniesienie[1]=0;
            }
        }
    }

    cout << Przeniesienie[0] << Przeniesienie[1] << endl;

    if(Przeniesienie[0]==0 && Przeniesienie[1]==0)
    {
        cout << "Liczba:" << wartosc << " podzielna przez 3";
    }
    else
    {
        cout << "Liczba:" << wartosc << " niepodzielna przez 3";
    }

}
