
//we are using adjacency list
#include<iostream>
#include<list>
#include<queue>
using namespace std;


class graph
{
    int V;
    int E;
    list<int>*adjList;

    public:
        graph(int element)
        {
            V=element;
            adjList=new list<int>[V];
            E=0;
        }

        void addEdge(int u,int v,bool bidirectional=false)
        {
                if(bidirectional==true)
                {
                    adjList[u].push_back(v);
                    adjList[v].push_back(u);
                }
                else
                    adjList[u].push_back(v);
        }

        void BSFPrint()
        {
            bool*visited=new bool[V];
            for(int i=0;i<V;i++)
                visited[i]=false;
            queue<int> q;
            q.push(0);
            visited[0]=true;
            cout<<0;

            while(!q.empty())
            {
                int f=q.front();
                q.pop();
                for( list<int>::iterator it=adjList[f].begin();it!=adjList[f].end();it++)
                {
                    if(visited[*it]==false)
                    {
                        q.push(*it);
                        cout<<*it;
                        visited[*it]=true;
                    }
                }
            }
        }
        void distance()
        {
            int *distance=new int[V];
            for(int i=0;i<V;i++)
                distance[i]=-1;
            queue<int> q;
            q.push(0);
            distance[0]=0;
            while(!q.empty())
            {
                int f=q.front();
                q.pop();
                for(list<int>::iterator i=adjList[f].begin();i!=adjList[f].end();i++)
                {
                    if(distance[*i]==-1)
                    {
                    q.push(*i);
                    distance[*i]=distance[f]+1;
                    }
                }
            }
            for(int i=0;i<V;i++)
                cout<<distance[i];
        }

        void sddistance(int source,int destination)
        {
            int *distance=new int[V];
            for(int i=0;i<V;i++)
                distance[i]=-1;
            queue<int> q;
            q.push(source);
            distance[source]=0;
            while(!q.empty())
            {
                int f=q.front();
                q.pop();
                for(list<int>::iterator i=adjList[f].begin();i!=adjList[f].end();i++)
                {
                    if(distance[*i]==-1)
                    {
                    q.push(*i);
                    distance[*i]=distance[f]+1;
                    }

                }
            }
            for(int i=0;i<V;i++)
                if(i==destination)
                cout<<distance[i];
        }

        void DFSPrint()
        {
            bool*visited=new bool[V];
        }
};

int main()
{
    int v,e;
    cout<<"Enter the no. of vertices and edges: ";
    cin>>v>>e;
    graph g(v);
    int a,b;
    for(int i=0;i<e;i++)
    {
        cout<<"Enter u and v : ";
        cin>>a>>b;
        g.addEdge(a,b);
    }
    g.BSFPrint();
    g.sddistance(1,5);

}
