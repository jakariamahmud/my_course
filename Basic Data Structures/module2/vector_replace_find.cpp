#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v={1,2,3,2,3,4,3,5,3,4,2,3,2};
    replace(v.begin(),v.end(),2,100);


    //vector<int>:: iterator it = find(v.begin(),v.end(),3); // aivabei iterator diclare kora jay
    // cout<<*it<<endl;
    // vector<int>:: iterator it;
    auto it = find(v.begin(),v.end(),1);
    if(it==v.end()) cout<<"not found"<< endl;
    else cout<< "found jakaria"<< endl;

    for(int x:v)
    {
        cout<< x << " ";
    }

    return 0;
}