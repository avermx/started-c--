#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nsp = 1;
    int nst = n;
    for (int q = 1; q<=2*n+1; q++)
    {
       cout<<"*";
    }
    cout<<endl;
    for(int i =1; i<=n; i++){
      
        for(int j = 1; j<=nst; j++){
            cout<<"*";
        }
        for(int k = 1;k<=nsp; k++){
            cout<<" ";
        }
        for(int j = 1; j<=nst; j++){
            cout<<"*";
        }
        nsp+=2;
        nst--;
        cout<<endl;
    }
    
    return 0;
}