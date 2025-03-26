#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 1 || n==2)
        return 1;

    int num1 = fibo(n - 1);
    int num2 = fibo(n - 2);
    int total = num1 + num2;
    return total;
}
int main()
{
    int n = 9;
   cout<<fibo(n);
}