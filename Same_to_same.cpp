#include <bits/stdc++.h>

using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
int size(Node* head)
{
    int count=0;
    Node* tmp=head;
    while(tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    Node* head1=NULL;
    Node* tail1=NULL;
    while(true)
    {
        cin >> val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head1,tail1,val);
    }
    int len=size(head);
    int len1=size(head1);
    if(len != len1)
    {
        cout << "NO" << endl;
    }
    bool flag=true;
    Node* tmp=head;
    Node* tmp1=head1;
    while(tmp != NULL)
    {
        if(tmp->val != tmp1->val)
        {
            flag=false;
            break;
        }
        tmp=tmp->next;
        tmp1=tmp1->next;
    }
    if(flag==true)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    int max=INT_MIN;
    int min=INT_MAX;
    Node* tmp=head;
    while(tmp != NULL)
    {
        if(tmp->val>max)
        {
            max=tmp->val;
        }
        tmp=tmp->next;
    }
    tmp=head;
    while(tmp != NULL)
    {
        if(tmp->val<min)
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    int dif=max-min;
    cout << dif << endl;
    return 0;
}
