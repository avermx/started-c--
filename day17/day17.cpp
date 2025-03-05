#include <iostream>
using namespace std;


int main(){

    
     int a = 1;
    for(int i = 1; i<=5; i++){
        for (int j = 1; j<=a; j++)
        {
            cout<<"#";
            
        }
        a = a + 2;
        cout<<endl;
        
    }
}