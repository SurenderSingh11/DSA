#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i-1; j++)
        {
            cout<<" "<<" ";
        }
        
        for(int j = n; j >= i; j--)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
    return 0;
}