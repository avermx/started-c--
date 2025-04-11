#include <iostream>
using namespace std;

// void check(int arr[])
// {
//     int i = 0;
//     int j = 4;

//     while(i<=j){
//         if(arr[i] == arr[j]){

//             cout<<"";
//             i++;
//             j--;
//         }
//         else{
//             cout<<"bo";
//             break;
//         }

//     }
//     return;
// }

void bhenchod(int arr[])
{
    int i = 0;
    int j = 4;
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    int a = 2;
    int b = 4;
    while(a<b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
    return;
}

int main()
{
  
    int arr[5] = {1, 2, 3, 4, 5};
    bhenchod(arr);
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i];
    }
}