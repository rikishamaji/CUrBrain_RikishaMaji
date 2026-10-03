#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum=0;
    int pro=1;
    while(n>0)
    {
        int digit=n%10;
        sum=sum+digit;
        pro=pro*digit;
        n=n/10;

    }
    cout << pro-sum;
    return 0;
}