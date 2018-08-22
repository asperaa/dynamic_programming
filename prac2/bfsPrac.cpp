#include <bits/stdc++.h>

using namespace std;

vector<int>G[100];
vector<int>visited(100,false);

void bfs(int s)
{
	queue<int>q;
	q.push(s);

	while(!q.empty())
	{
		int vertex=q.front();

		q.pop();
        
        visited[s]=true;

		cout<<vertex<<endl;

		for(int i=0;i<G[vertex].size();i++)
		{
			if(visited[G[vertex][i]]==false)
			{
				q.push(G[vertex][i]);
				visited[G[vertex][i]]=true;

			}
		}
	}

}

int main()
{
   int u,v,edges;
   cin>>edges;

   for(int i=0;i<edges;i++)
   {
   	  cin>>u>>v;

   	 

   	  G[u].push_back(v);
   	  G[v].push_back(u);
   }
   
   cout<<"Nodes explored\n";
   
   bfs(0);

}