/*
                                               Print the 1's Complement of an Integer
 */
 
#include<iostream>
using namespace std;
 
void onescomp(int n)
{
    int r;
 
    if (n <= 1)
    {
        cout << !n;
        return;
    }
    r = n % 2;
    onescomp(n / 2);
    cout << !r;
}
 
int main()
{
    int dec, bin;
    cout << "Enter the number : ";
    cin >> dec;
 
    if (dec < 0)
        cout << dec << " is not a positive integer." << endl;
    else
    {
        cout << "The ones complement form of " << dec << " is ";
        onescomp(dec);
        cout << endl;
    }
    return 0;
}
