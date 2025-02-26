#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    for(int i = 1; i<=n%2==1; i++)
        cout<<i;
    {
        for(int j = 1; j<=n; j++){
            cout<<"*";
           
        }

        cout<<endl;
    }

}