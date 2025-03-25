#include <iostream>
using namespace std;

void greet(int n){
    if(n==0) return;
    cout<<n<<"\n";
    greet(n-1);
    cout<<n<<"\n";
}

int main(){
    int n; 
    cin>>n;
    greet(n);

}