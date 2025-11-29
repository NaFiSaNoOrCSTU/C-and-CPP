#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool inside_word=false;
    int count=0;
    for(char c:s)
    {
        if(isalpha(c)) // can use stringstram..isalpha returns true value mean >0 for character..
        {
            if(inside_word==false)
            {
                count++;
                //cout << c << endl;
            }
            inside_word=true;
        }
        else
        {
            inside_word=false;
        }
    }
    cout << count << endl;
    return 0;
}