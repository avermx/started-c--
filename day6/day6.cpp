#include <iostream>
using namespace std;



int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char c = 'a' + i-1;
        for (int j = 1; j <=5; j++)
        {
           
            cout<<c<<" ";


        };
    
        cout<<endl;
    }
    return 0;
}