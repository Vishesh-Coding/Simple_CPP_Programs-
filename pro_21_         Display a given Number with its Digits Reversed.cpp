/*
                                       Display a given Number with its Digits Reversed
 */
 
#include<iostream>
using namespace std;
 
int main()
{
    int num, temp, n = 0;
 
    cout << "Enter the number "
         << "(avoid entering numbers with leading zeroes) : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        n = n * 10 + temp % 10;
        temp = temp / 10;
    }
    cout << "The given number " << num
         << " with its digits reversed is "
         << n << endl;
}
