#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    if( n == 1 || n == 0)
    {
        return 0;
    }
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int nextprime(int n)
{
    int prime = n+1;
    while(!isPrime(prime))
    {
        prime++;
    }
    return prime;
}
int main() 
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int result  = nextprime(n);
    cout<<result;

    return 0;
}