#include <iostream>
using namespace std;
int Fib(int x)
{
    if(x==0||x==1)
    {
        return 1;
    }
    else
    {
        return Fib(x-1)+Fib(x-2);
    }
}
int main()
{
    int a = Fib(5);
    cout<<a;
    return 0;
}
