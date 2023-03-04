    #include<iostream>
    using namespace std;
    int main ()
    {
        int num;
        cout << "Enter the number  : ";
        cin >> num;
        if (num >= 0)
            cout << num << " This a positive number.";
        else 
            cout << num << " This a negative number.";
        return 0;
    }
