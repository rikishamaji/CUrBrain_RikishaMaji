#include <bits/stdc++.h>
using namespace std;
int factor(int n, int k)
{
    vector<int> fact;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.push_back(i);

            if (n / i != i)
            {
                fact.push_back(n / i);
            }
        }
    }
    sort(fact.begin(), fact.end());
    int count = fact.size();
    if (k>0 && k <= count)
    {
       return fact[k-1];
    }
    return -1;
}

int main()
{
    int n,k;
    cout << "Enter number n :";
    cin >> n;
    cout<<"Enter kth factor :";
    cin>>k;
    int result = factor(n,k);
    cout << result;

    return 0;
}