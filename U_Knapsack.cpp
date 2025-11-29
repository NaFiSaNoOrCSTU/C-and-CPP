#include<bits/stdc++.h>
using namespace std;
const int maxN=1005;
const int maxW=1005;
int dp[maxN][maxW];
int knapsack(int n,int weight[],int value[],int W)
{
    if(n==0 || W==0) return 0;
    if(dp[n][W] != -1) return dp[n][W];
    if(weight[n-1] <= W)
    {
        int op1=knapsack(n-1,weight,value,W-weight[n-1]) + value[n-1];
        int op2=knapsack(n-1,weight,value,W);
        return dp[n][W]=max(op1,op2);
    }
    else
    {
        int op2=knapsack(n-1,weight,value,W);
        return dp [n][W]=op2;
    }
}
int main()
{
    int n,W;
    cin >> n >> W;
    int weight[n],value[n];
    for(int i=0;i<n;++i)
    {
        cin >> weight[i] >> value[i];
    }
    cout << knapsack(n-1,weight,value,W) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n],s=0;
        for(int i=0;i<n;++i)
        {
            cin >> a[i];
            s+=a[i];
        }
        bool dp[n+1][s+1];
        dp[0][0]=true;
        for(int i=1;i<=s;++i)
        {
            dp[0][i]=false;
        }
        for(int i=1;i<=n;++i)
        {
            for(int j=0;j<=s;++j)
            {
                if(a[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        vector<int> v;
        int first;
        for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=s;++j)
            {
                if(dp[i][j] == 1)
                {
                    v.push_back(j);
                }
            }
        }
        int div=s/2;
        for(int i=0;i<v.size();++i)
        {
            if(v[i]==div) first=i;
        }
        cout << first << " " << first+2 << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        int mx=INT_MIN;
        for(int i=1;i<=n;++i)
        {
            if(v[i]>mx)
            {
                mx=v[i];
            }
        }
        int first,second;
        for(int i=0;i<n;++i)
        {
            if(v[i]==mx)
            {
                first=i;
                v.erase(v.begin()+i);
            }
        }
        mx=INT_MIN;
        for(int i=0;i<n-1;++i)
        {
            if(v[i]>mx)
            {
                mx=v[i];
            }
        }
        for(int i=0;i<n-1;++i)
        {
            if(v[i]==mx)
            {
                second=i;
                if(second > first)
                {
                    second=i+1;
                }
            }
        }
        if(first < second)
        {
            cout << first << " " << second << endl;
        }
        else
        {
            cout << second << " " << first << endl;
        }
    }
    return 0;
}
