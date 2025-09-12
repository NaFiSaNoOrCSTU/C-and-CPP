#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        char a[4],b[4];
        cin >> a >> b;
        char temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        cout << a << " " << b << endl;
    }
    return 0;
}