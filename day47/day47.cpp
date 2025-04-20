#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // for (int i = 0; i < 3; i++)
    // {

    //    if(i==0){
    //     int temp = arr[i][i];
    //     arr[i][i] = arr[2][i];
    //     arr[2][i] = temp;
    //    }
    //    else if(i==2) {
    //     int temp = arr[i][i];
    //     arr[i][i] = arr[0][i];
    //     arr[0][i] = temp;
    //    }

    // }
    // cout<<endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;

    // }

    int brr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            brr[i][j] = arr[j][i];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j];
        }
        cout << endl;
        
    }
}

// 7 2 9   1 4 7  1 2 3
// 4 5 6   2 5 8  4 5 6
// 1 8 3   3 6 9  7 8 9