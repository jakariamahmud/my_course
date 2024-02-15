#include<bits/stdc++.h>
using namespace std;
void convert(int n, vector<pair<int,int>> adj[])
{
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j]=-1;
            if(i==j) mat[i][j]=0;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for(auto child:adj[i])
        {
            mat[i][child.first] = child.second;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v[n];
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }
    convert(n,v);

    return 0;
}
