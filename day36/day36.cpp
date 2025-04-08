#include <iostream>
using namespace std;

int main()
{
        int arr[2] = {2,5};
        int sum = 0;
        for (int i = 0; i <2; i++)
        {
           sum = sum + arr[i] ;
        }
        cout<<sum;

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
        cout<<endl;
    }
    for (int i = 0; i<=n-1; i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    cout<<endl;
    int arr[5] = {1,2,3,4,5};
    int sum = 1;

    for(int i = 0; i<4; i++){
        sum = sum * arr[i];
    }
    cout<<sum;

    int arr[8] = {1, 2, 3, 4, 5,10 ,51,1};
    int max = -1;
    for (int i = 0; i <= 8; i++)
    {
        

        if(max<arr[i]){
            max = arr[i];
        }
    

  

        
    }
    cout<<max;
}
