#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        {
            char ch = 97;

            for (int j = 1; j <= i; j++)
            {
                if(i%2==1){
                    cout<<j;
                }
                else{
                    cout <<ch;
                    ch++;
                }

            }
        }
        cout << endl;
    }
}