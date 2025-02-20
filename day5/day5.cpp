#include <iostream>
 using namespace std;



 int main()
 {
    int num = 10;

    for (int i = 2; i<=num-1 ; i++)
    {
        if(num%i == 0){
            cout<<"not prime";
            return 0;
        }
        
    }
    
    cout<<"prime";


    return 0;
 }