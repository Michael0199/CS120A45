
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min, max, med;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

 min=num3,min=num3,max=num3;
   if (min>num2)
    min=num2;
    else max=num2;
        if (min>num1){
        med=min;
        min=num1;}
        else if (num1>max){
        med=max;
        max=num1;}
        else med=num1;

    cout << min<<" "<< med <<" "<< max << endl;
}
