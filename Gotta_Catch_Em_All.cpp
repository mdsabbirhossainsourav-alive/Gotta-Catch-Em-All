#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,x,y;
        cin >> n >> x >> y;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int total = 0;
        for(int i=0; i<n; i++)
        {
            int op1 = a[i] * x;
            int op2 = y;
            total += min(op1,op2);
        }
        cout << total << endl;
    }
    return 0;
}