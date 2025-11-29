/*#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s,x;
        cin >> s >> x;
        s.replace(#,x);
        cout << s << endl;
    }

    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test,pos;
    cin >> test;
    while(test--)
    {
        string s,x;
        cin >> s >> x;
        int index=s.find("x");
        int len=x.length();
        s.replace(index,len,"#");
        cout << s << endl;
    }

    return 0;
}

