#include<iostream>
using namespace std;
int main ()
{
    int num, temp, rev=0;
    cout << "Enter a number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        rev = temp % 10;
        rev = rev * 10 + rev;
        temp /= 10;
    }
    cout << "\nThe reverse of " << num << " is : " << rev;
    return 0;
}
