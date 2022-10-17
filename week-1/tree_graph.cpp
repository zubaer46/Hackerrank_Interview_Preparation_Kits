#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int graph[N][N];
vector<int> graph1[N];
int main()
{
    int n, m, i;
    cin >> n >> m;
    for (i = 1; i < n + 1; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        graph[v2][v1] = w;
        graph[v1][v2] = w;
        graph1[v1].push_back(v2);
        graph1[v2].push_back({v1});
    }
    // int a, b;
    // if (graph[a][b] > 0)
    // {
    //     cout << "connected"<<" "<<graph[a][b] << endl;
    // }
 for(int x=0; i<; x++)
    for(auto i:graph1[2])
    {
       
    }

    
}