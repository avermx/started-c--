#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int res[3][3];
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
}