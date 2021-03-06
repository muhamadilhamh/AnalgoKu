/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas B
Tanggal = 7 April 2020
Desk Program menampilkan tree DFS
*/

#include <iostream>
#include <list>

using namespace std;

struct Graph {
    int vertex;
    list<int>* edge;
};
Graph V;

void makeGraph(Graph& V, int vertex)
{
    V.vertex = vertex;
    V.edge = new list<int>[vertex];
}

void addEdge(Graph& V, int i, int j)
{
    V.edge[i].push_back(j);
}

void traversal(Graph V)
{
    for (int i=0; i<V.vertex; ++i)
    {
        cout<<"\n vertex "<<i<<"\n head";
        for (auto x : V.edge[i])
            cout<<" -> "<<x;
        cout<<endl;
    }
}

void DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout<<v<<" ";

    for (list<int>::iterator i = V.edge[v].begin(); i != V.edge[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}

void DFS(Graph V, int s)
{
    bool *visited = new bool[V.vertex];
    for (int i=0; i<V.vertex; i++)
        visited[i] = false;

    for (int i=0; i<V.vertex; i++)
        if (visited[i] == false)
            DFSUtil(i, visited);
}

int main()
{
    makeGraph(V, 8);

    addEdge(V, 0, 1);
    addEdge(V, 0, 2);

    addEdge(V, 1, 0);
    addEdge(V, 1, 2);
    addEdge(V, 1, 3);
    addEdge(V, 1, 4);

    addEdge(V, 2, 0);
    addEdge(V, 2, 1);
    addEdge(V, 2, 4);
    addEdge(V, 2, 6);
    addEdge(V, 2, 7);

    addEdge(V, 3, 1);
    addEdge(V, 3, 4);

    addEdge(V, 4, 1);
    addEdge(V, 4, 2);
    addEdge(V, 4, 3);
    addEdge(V, 4, 5);

    addEdge(V, 5, 4);

    addEdge(V, 6, 2);
    addEdge(V, 6, 7);

    addEdge(V, 7, 2);
    addEdge(V, 7, 6);

    cout<<"DFS mulai dari x adalah 0, yang membuat angka yang keluar mundur 1\n";
    DFS(V,0);
}
