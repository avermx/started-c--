#include <iostream>
using namespace std;



int main()
{
int n;
cin>>n;

    for(int i = 1; i<=n; i++)
    {
        int a = i-1;
        for(int k = 1; k<=n-i; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for(int b = 1; b<=i-1; b++){
            cout<<a;
            a--;
        }
        cout<<endl;
    }
}