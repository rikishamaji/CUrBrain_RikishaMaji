#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int count = 0;
    if(n<2)
    {
        return 0;
    }
    vector <int> isprime(n,1);
    isprime[0] = 0;
    isprime[1] = 0;
    for(int i = 2;i*i<=n;i++)
    {
        if(isprime[i])
        {
            for(int j = i*i;j<n;j+=i)
            {
                if(isprime[j])
                {
                    isprime[j] = 0;
                }
            }
        }
        
       
    }
    for(int i = 0;i<n;i++)
    {
        if(isprime[i])
        {
            count++;
        }
    }
    return count;
    
    

}
int main() 
{
    int n ;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<isprime(n);
    return 0;
}