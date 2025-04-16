#include <iostream>
using namespace std;

int main()
{
    int nos;
    int marks;
    cout << "Enter The Number OF Student";
    cin >> nos;
    cout << "Enter The Number OF Subject";
    cin >> marks;

    int arr[nos][marks];

    for (int i = 0; i < nos; i++)
    {
        for (int j = 0; j < marks; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < nos; i++)
    {
        for (int j = 0; j < marks; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}