#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > n-i; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    for(int i = 0; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}