#include <iostream>
using namespace std;

int main()
{

    int arr[5] ;
    for (int i = 0; i <= 4; i++)
    {
        cin>>arr[i];
        cout<<"Enter The No \n"<<arr[i];
    }
   for(int j = 5; j>=0; j--){
    cout<<arr[j];
   }
    return 0;
}