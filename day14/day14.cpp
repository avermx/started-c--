#include <iostream>
using namespace std;



int main(){

    // for (int i = 1; i <=5; i++)
    // {
    //     if(i%2!=0) num = 1;
    //     else num = 0;
    //     for (int j = 1;  j<i; j++)
    //     {
    //          cout<<num;
    //         if(num==0) num=1;
    //         else num = 0;
    //     }

for(int row = 1; row<=5; row++)
{
    for (int col = 1; col<=5; col++)
    {
       if(row==1 || col==1 || row==5 || col==5){
        cout<<"*";
       }
       else{
        cout<<" ";
       }
    }

        cout<<endl;
    
}
}
