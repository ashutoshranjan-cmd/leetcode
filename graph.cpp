// this is the cpp program to make graph
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 ->undirected graph
        // direction = 1 => directed graph

        // create an edge from u to v

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {

        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
    void bfs(unordered_map<int,bool> &visited,vector<int>&ans,int node )
    {
        queue<int>q;
        q.push(node);
        visited[node] =1;

        while(!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            
            // store frontNode into ans
            ans.push_back(frontNode);

            // traverse all neighbour of frontNode

            for(auto i:adj[frontNode])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }
};
int main()
{
    int n;
    cout << "Enter the total number of nodes in the graph" << endl;
    cin >> n;

    int m;
    cout << "Enter the total number of edges in the graph" << endl;
    cin >> m;

    graph<int> g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printAdjList();
    vector<int> ans;
    unordered_map<int, bool> visited;
    // for (int i = 0; i < n; i++)
    // {
        int i =0;
     if(!visited[i])
     {
        g.bfs(visited,ans,i);
     }
    // }
    cout<<"The bfs of the given graph is given below"<<endl;
    sort(ans.begin(),ans.end());
    for(auto i: ans)
    {
        cout<<i<<endl;

    }
    return 0;
}