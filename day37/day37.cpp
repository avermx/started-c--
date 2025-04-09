#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {10,5,4,6,2};
    // int min = arr[0];
    // for (int i = 0; i <=4; i++)
    // {
    //     if (min>arr[i])
    //     {
    //         min = arr[i];
    //     }

    // }
    // cout<<min;

    // int arr[5] = {1,2,3,4,5};

    // for(int i = 0; i<=4; i++){
    //     if(arr[i]%2==0){
    //         arr[i] = arr[i]*2;
    //     }
    //     else{
    //         arr[i] = arr[i]+10;
    //     }
    //     cout<<endl;
    //     cout<<arr[i];
    // }

    // int arr[5] = {1,2,3,4,5};
    // int n = 2;
    // for (int i = 0; i <=4; i++)
    // {
    //     if(arr[i]>n){
    //         cout<<arr[i];
    //         cout<<endl;
    //     }
    // }

    //     int arr[7] = {1,2,3,4,5,6,7};
    //     int sumEven = 0;
    //     int sumOdd = 0;

    //     for(int i = 0; i<=6; i++){
    //         if(arr[i]%2==0){
    //             sumOdd+=arr[i];
    //         }
    //         else{
    //             sumEven+=arr[i];
    //         }

    //     }
    //   int Total =  sumEven - sumOdd;
    //   cout<<Total;

    int arr[5] = {1, 2, 3, 4, 5};
    int count = 0;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 5; j >= 2; j--)
        {
            if (i + j == 6)
            {
                count++;
            }
        }
        
    }
    cout<<count;
}
