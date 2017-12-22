#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> grid[100005];
int main()
{
    int n, x1, y1, x2, y2;
    cin >> n;
    vector<string> vs(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vs[i];
    }
        cin >> x1 >> y1 >> x2 >> y2;
        ///Now we have to make an adjacency list using given non prohibited elements.
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int cur = i*n + j;
                for(int k = i+1; k < n; k++) ///traversing top to bottom
                {
                    if(vs[k][j] == '.')
                    {
                        int p = k*n + j;
                        grid[cur].push_back(p);
                    }
                    else ///there is no straight line
                        break;
                }
                for(int k = i-1; k >= 0; k--) ///traversing bottom to top
                {
                    if(vs[k][j] == '.')
                    {
                        int p = k*n + j;
                        grid[cur].push_back(p);
                    }
                    else ///there is no straight line
                        break;
                }
                for(int k = j+1; k < n; k++) ///traversing left to right
                {
                    if(vs[i][k] == '.')
                    {
                        int p = i*n + k;
                        grid[cur].push_back(p);
                    }
                    else ///there is no straight line
                        break;
                }
                for(int k = j-1; k >= 0; k--) ///traversing right to left
                {
                    if(vs[i][k] == '.')
                    {
                        int p = i*n + k;
                        grid[cur].push_back(p);
                    }
                    else ///there is no straight line
                        break;
                }
            }
        }
        ///Now we can find shortest distance using BFS
        int start = x1*n + y1;
        int visited[10005] = {0};
        int dis[10005] = {0};
        queue<int> Q;
        Q.push(start);
        visited[start] = 1;
        while(!Q.empty())
        {
            int u = Q.front();
            for(int i = 0; i < grid[u].size(); i++)
            {
                int v = grid[u][i];
                if(!visited[v])
                {
                    dis[v] = dis[u] + 1;
                    Q.push(v);
                    visited[v] = 1;
                }
            }
            Q.pop();
        }
        cout << dis[x2*n + y2] << endl;
        return 0;
}
