#include <iostream>
using namespace std;


int stare(int n){
    if(n==1 || n==2) return n;
    else if (n==3) return 4;
  
    
   return stare(n-1) + stare(n-2) + stare(n-3);
}
int main(){
    int n = 4;
   cout<<stare(n);
}