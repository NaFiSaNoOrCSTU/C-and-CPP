#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;++i)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;++i)
        {
            cin >> b[i];
        }
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            if(a[i]!=b[i])
            {
                cnt++;
                break;
            }
        }
        int flag=0;
        for(int i=0,j=n-1;i<n;++i,--j)
        {
            if(a[i] != b[j])
            {
                flag++;
                break;
            }
        }
        if(cnt==0 || flag==0)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string s;
    Node* next;
    Node* prev;

    Node(string s)
    {
        this->s=s;
        this->next=NULL;
        this->prev=NULL;
    }
};

void Visit(Node* head,Node* &cur,const string &s) 
{
    Node* temp = head;
    while (temp)
    {
        if (temp->s == s)
        {
            cur = temp;
            cout << cur->s << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}
void Prev(Node* &cur)
{
    if (cur && cur->prev)
    {
        cur = cur->prev;
        cout << cur->s << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void Next(Node* &cur)
{
    if (cur && cur->next)
    {
        cur = cur->next;
        cout << cur->s << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* cur = NULL;
    string s;

    while(1)
    {
        cin >> s;
        if (s == "end") break;
        Node* newNode = new Node(s);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    cur = head;
    int query;
    cin >> query;
    cin.ignore();

    while (query--) {
        string ch;
        getline(cin, ch);

        if (ch.substr(0, 6) == "visit ")
        {
            string ss = ch.substr(6);
            visit(cur, head, ss);
        }
        else if (ch == "next")
        {
            Next(cur);
        }
        else if (ch == "prev")
        {
            Prev(cur);
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string s;
    Node* next;
    Node* prev;
    Node(string s)
    {
        this->s=s;
        this->next=NULL;
        this->prev=NULL;
    }
};
void Browse(Node* head,Node* &cur,const &s)
{
    Node* tmp=head;
    while(tmp)
    {
        if(tmp->s==s)
        {
            cur=tmp;
            cout << cur->s << endl;
            return;
        }
        tmp=tmp->next;
    }
    cout << "Not Available" << endl;
}
void Previous(Node* &cur)
{
    if(cur && cur->prev)
    {
        cur=cur->prev;
        cout << cur->s << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void Next(Node* &cur)
{
    if(cur && cur->next)
    {
        cur=cur->next;
        cout << cur->s << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* cur=NULL;
    string s;
    while(1)
    {
        cin >> s;
        if(s=="end")
        {
            break;
        }
        Node* newNode=new Node(s);
        if(!head)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }
    cur=head;
    int query;
    cin >> query;
    cin.ignore();
    while(query--)
    {
        string ch;
        getline(cin,ch);
        if(ch.substr(0,6)=="visit ")
        {
            string ss=ch.substr(6);
            Browse(cur,head,ss);
        }
        else if(ch=="next")
        {
            Next(cur);
        }
        else if(ch=="prev")
        {
            Previous(cur);
        }
    }
    return 0;
}
