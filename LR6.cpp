// LR6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>-
#include<iomanip>
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, Y, h;
    x = 1;
    h = 0.1;
    do
    {

        Y = sin(pow(x, 1 / 2)) + exp(x) - 3;
        cout << setw(12) << "x=" << x << setw(12) << "y=" << Y << endl;
        x += h;
    } while (x <= 2);
    
    system("pause");
}
/*#include <iostream>-
#include<iomanip>
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, Y, h, x1;
    h = 0.1;
    x = 1;
    while (x <= 2)
    {
        Y = sin(pow(x, 1 / 2)) + exp(x) - 3;

        cout << setw(12) << "x=" << x << setw(12) << "y=" << Y << endl;
        x += h;
    }
    system("pause");
}
*/
/*h=0.5;
   x = 0.5;
   while (x <= 3.5)
   {
       Y = sin(x) + abs(x) + pow(2, x);

       cout << setw(12) << "x=" << x << setw(12) << "y=" << Y << endl;
       x += h;
   }*/
   /*x = 0.5;
      h = 0.5;
      do
      {

          Y = sin(x) + abs(x) + pow(2, x);
          cout << setw(12) << "x=" << x << setw(12) << "y=" << Y << endl;
          x += h;
      } while (x <= 3.5);
      */
/*#include <iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, Y, h, x1;

    x = 0.5;
    h = 0.5;
    do
    {

        Y = sin(x) + abs(x) + pow(2, x);
        cout << setw(12) << "x=" << x << setw(12) << "y=" << Y << endl;
        x += h;
    } while (x <= 3.5);



    system("pause");
}*/
