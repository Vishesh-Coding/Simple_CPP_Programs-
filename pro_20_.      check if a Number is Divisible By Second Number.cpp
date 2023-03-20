/*
                                Check if a Number is Divisible By Second Number
 */
 
#include<iostream>
using namespace std;
 
int main()
{
    int a,b;
 
    cout << "Enter the first numbers : ";
    cin >> a;
  cout << "Enter the second numbers : ";
    cin >> b;
    
    if (a % b == 0)
        cout << " \n\nFirst number " << a
             << " is divisible by second number  "
             << b;
    else
        cout << "First number " << a 
             << " is not divisible by second number "
             << b;
}
