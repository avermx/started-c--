#include <iostream>
using namespace std;


int main(){
    int arr[5] = {50,40,51,34,64};

    for(int i = 0; i<=5; i++){
        if(arr[i]<35){
            cout<<i;
            cout<<endl;
        }
        
    }
    return 0;
}