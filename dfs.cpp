// this is the cpp program for the dfs (depth first search)
#include<bits/stdc++.h>
using namespace std;
template <typename t>
class graph{
    public:
    unordered_map<t,list<t>>adj;
    //direction = 0 (Then the graph in not directed graph)
    //direction = 1 (Then the graph is the directed graph)
    void createEdge(t u , t v , bool direction)
    {
        adj[u].push_back(v);
        if ( direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printList()
    {
        for(auto i : adj)
        {
            cout<<i.first<<"->";
            for(auto j : i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
    void dfs(int node , unordered_map<int,bool>&visited, vector<int> &component)
    {
        component.push_back(node);
        visited[node] = true;

        for(auto i: adj[node]){
            if(!visited[i])
            {
                dfs(i,visited,component);
            }
        }
    }
};
int main()
{
    int node;
    int edge;
    cout<<"Enter the number of the node"<<endl;
    cin>>node;
    cout<<"Enter the number of the edge "<<endl;
    cin>>edge;

    graph<int> g;

    for(int i =0;i<edge;i++)
    {
        int u ,v;
        cin>>u>>v;
        g.createEdge(u,v,0);
    }
    cout<<"The adjacency list is given below"<<endl;
    g.printList();
    // code for the dfs in graph
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    for(int i =0;i<node;i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            g.dfs(i,visited,component);
            ans.push_back(component);

        }
    }
    cout<<"The values for dfs are given below"<<endl;
    for(auto i:ans)
    {
        for(auto j : i)
        {
            cout<<j<<endl;
        }
    }
    return 0;
}