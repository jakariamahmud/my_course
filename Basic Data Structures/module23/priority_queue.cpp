#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    // priority_queue<int> pq; // for max heap 
    priority_queue<int, vector<int>, greater<int>> pq;// for min heap
    while(true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq.push(x); // O(logN)
        }
        else if(c==1)
        {
            pq.pop(); //O(logN)
        }
        else if(c==2)
        {
            cout<<pq.top()<<endl; //O(1)
        }
        else
        {
            break;
        }
    }

    return 0;
}
