#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <=n; i++)
    {
        char a = 97;
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k = 1; k<=i; k++){
            cout<<a;
            a++;
        }
        for(int u = 1; u<=i-1; u++){
            cout<<a;
            
        }
        
        cout<<endl;
    }
}