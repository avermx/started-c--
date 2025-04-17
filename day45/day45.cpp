
#include <iostream>
using namespace std;

int main()
{
    // int arr[5][5] = {{10,10,10,10,10,},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10}};
    // int arr[5][5];

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         arr[i][j] = 10;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout <<endl;
    // }

    // int arr[2][2];
    // int brr[2][2];
    // int jrr[2][2];

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++){

    //         arr[i][j] = arr[i][j]+brr[i][j];
    //         cout<<arr[i][j];

    //     }
    //     cout<<endl;

    // }

    // int arr[2][2];
    // int brr[2][2];
    // int jrr[2][2];

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<"Enter The Element",i,j;
    //         cin>>arr[i][j];
    //     }
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<"Enter The Element",i,j;
    //         cin>>brr[i][j];
    //     }

    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<arr[i][j];

    //     }
    //     cout<<endl;
    //     cout<<endl;
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<brr[i][j];
    //     }
    //     cout<<endl;

    // }
    // int r;
    // int c;
    // cout << "Enter Row";
    // cin >> r;
    // cout << "Enter Column";
    // cin >> c;
    // int arr[r][c];

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // int sum = 0;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         sum += arr[i][j];
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    //     cout << endl;
    // }
    // cout<<sum;

    // For Max Element;
    // int arr[2][2] = {{1, 2}, {5, 4}};
    // int max = arr[0][0];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         if(max<arr[i][j]){
    //             max = arr[i][j];

    //         }
    //     }
    // }
    // cout<<max;

    // for Min Element

    // int arr[2][2] = {{2, 1}, {5, 4}};
    // int min = arr[0][0];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         if (min > arr[i][j])
    //         {
    //             min = arr[i][j];
    //         }
    //     }
    // }
    // cout << min;

    // int arr[3] = {1,2,3};
    // int max = arr[0];
    // for (int i = 0; i <=2; i++)
    // {
    //     if (max<arr[i])
    //     {
    //         max = arr[i];
    //     }

    // }
    // cout<<max;

    // int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // int sum = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 1; j < 4; j++)
    //     {
    //         cout << arr[i][j];
    //         sum += arr[i][j];
    //     }
    //     cout << endl;
    // }
    // cout<<sum;

    // int arr[3][4] = {{1, 2, 3, 1}, {4, 5, 6, 4}, {7, 8, 9, 7}};
    // int row1 = 0;
    // int row2 = 0;
    // int row3 = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (i == 0)
    //         {
    //             cout << arr[0][j];
    //             row1 += arr[0][j];
    //         }
    //         if (i == 1)
    //         {
    //             row2 += arr[1][j];
    //         }
    //         if (i == 2)
    //         {
    //             row3 += arr[2][j];
    //         }
    //     }
    //     cout << endl;
    // }

    // cout << row1;
    // cout << endl;
    // cout << row2;
    // cout << endl;
    // cout << row3;
    // cout << endl;
    // if (row1 > row2 || row1 > row3)
    // {
    //     cout << row1;
    //     cout<<"row1";
    // }
    // else if (row2 > row3)
    // {
    //     cout << row2;
    //     cout<<"row2";
    // }
    // else
    // {
    //     cout << row3;
    //     cout<<endl;
    //     cout<<"row 3";

    // }

    // optimize Sol

    // int arr[3][4] = {{1, 2, 3, 1}, {4, 5, 6, 4}, {7, 8, 9, 7}};

    // int max = 0;
    // int row = 0;

    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 4; j++)
    //     {

    //         if (i == 0)
    //         {
    //             sum += arr[0][j];
    //             if (max < sum)
    //             {
    //                 max = sum;
    //                 row = i;
    //             }
    //         }
    //         if (i == 1)
    //         {
    //             sum += arr[1][j];
    //             if (max < sum)
    //             {
    //                 max = sum;
    //                 row = i;
    //             }
    //         }
    //         if (i == 2)
    //         {
    //             sum += arr[2][j];
    //             if (max < sum)
    //             {
    //                 max = sum;
    //                 row = i;
    //             }
    //         }
    //     }
    // }
    // cout << max;
    // cout << endl;
    // cout << "Row Number " << row;
}