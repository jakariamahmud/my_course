#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void input(Node * &head, Node * & tail, int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next= newNode;
    tail = newNode;

}
int max(Node * head)
{
    Node * tmp = head;
    int maximum= INT_MIN;
    while(tmp!=NULL)
    {
        if(tmp->val>maximum)
        {
            maximum= tmp->val;
        }

        tmp= tmp->next;
    }
    return maximum;
}
int min(Node * head)
{
    Node * tmp=head;
    int minimum=INT_MAX;
    while(tmp->next!=NULL)
    {
        if(tmp->val<minimum)
        {
            minimum=tmp->val;
        }

        tmp=tmp->next;
    }
    return minimum;

}


int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    while(true)
    {
        int val;
        cin>> val;
        if(val==-1) break;
        input(head,tail, val);
    }  

    if(head->next==NULL)
    {
        cout<< "0"<<endl;
    }
    else
    {
        cout<<max(head)-min(head)<< endl;
    }

    

    return 0;
}
