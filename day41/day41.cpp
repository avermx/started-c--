#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i <=4; i++)
    {
        if(arr[i]==n){
            cout<<i;
            cout<<endl;
        }
        else cout<<"NOtFound";
       

    }
    
}
