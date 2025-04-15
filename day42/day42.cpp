#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1,2,3,5};
    // int sum = 0;
    // for (int i = 0; i <=4; i++)
    // {
    //     sum = sum + arr[i];
    // }
    // int sum2 = 5*(5+1)/2;
    // int ans = sum2 - sum ;
    // cout<<ans;
    int arr[5] = {1, 1, 3, 4, 4};
    // for (int i = 0; i <= 4; i++)
    // {
    //     for (int j = i+1; j<=4; j++)
    //     {
    //         if(arr[i] == arr[j]){
    //             cout<<i;
    //             cout<<j;
    //             break;
    //         }
    //     }
        
    // }
    for(int i = 0; i<=4; i++){
        for(int j = i+1; j<=4; j++){
            if(arr[j]==arr[i]){
                
            }
            else if(arr[i]!=arr[j]){
                cout<<"GGMf";
                break;
            }
           
        }
    }

}