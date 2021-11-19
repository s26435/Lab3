//Jan Wolski 18.11.2021
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;

void zadanie3_1()
{
    float x, y;
    cout << "Podaj X: ";
    cin >> x;
    cout << "Podaj Y: ";
    cin >> y;
    cout << setprecision(2);
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
}

void zadanie3_2()
{
    char znak;
    do
    {
        znak = _getch();
        cout << znak;
    }
    while(znak != 't');
    cout << endl;
}

void zadanie3_3()
{
    float a,b,c;
    float delta;
    char znak = '+';
    char znak2 = '+';
    //pobieraie danych
    cout << setprecision(10);
    cout << "Rownanie kwadratowe ma postac: ax^2 + bx + c" << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    //okreœlanie znaku
    if(b<0) znak2 = '-';
    if(c<0) znak = '-';
    b = abs(b);
    c = abs(c);
    //wypisywanie równania
    if(a==0)
    {
        cout << "To nie jest rownanie kwadratowe!" << endl;
        exit(0);
    }
    else if(b == 0) cout << "Równanie to: " << a << "x^2 " << znak << " " << c << endl;
    else if(c == 0) cout << "Równanie to: " << a << "x^2 " << znak2 << " " << b << "x" << endl;
    else cout << "Równanie to: " << a << "x^2 " << znak2 << " " << b << "x "<< znak << " " << c << endl;
    //obliczanie i wypisywanie pierwiastków
    delta = b*b - 4*a*c;
    cout << "Delta = " << delta << endl;
    cout << "Pierwiastek pierwszy = " <<(double)(0-b-sqrt(delta)/2*a) << endl;
    cout << "Pierwiastek drugi = " << (double)(0-b+sqrt(delta)/2*a) << endl;
}

void zadanie3_4()
{
    int n;
    cin >> n;
    long **trojkat;
    trojkat= new long *[n];
    for (int j=0; j<n; j++)
    {
        trojkat[j]=new long [j+1];
        trojkat[j][0]=1;
        trojkat[j][j]=1;

        for (int i=0; i<j-1; i++) trojkat[j][i+1]=trojkat[j-1][i]+trojkat[j-1][i+1];
    }

    for (int j=0; j<n; j++)
    {
        for (int i=0; i<j-1; i++) cout << trojkat[j][i+1] << " ";
        cout << endl;
    }
}


int main()
{
    cout << "-------- Zadanie 3_1 ------------" << endl;
    zadanie3_1();
    cout << "-------- Zadanie 3_2 ------------" << endl;
    zadanie3_2();
    cout << "-------- Zadanie 3_3 ------------" << endl;
    zadanie3_3();
    cout << "-------- Zadanie 3_4 ------------" << endl;
    zadanie3_4();
}
