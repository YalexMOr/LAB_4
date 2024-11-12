#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
setlocale(0,".1251");
double y, x;
cout<<"Введіть значення х= ";
cin>>x;
y = (x - log(x)) / (2 * x - 1) + (2 * x - 1) / (x*x+ 3 * x);
cout<<"Результат y= "<< y <<endl;
return 0;
}
