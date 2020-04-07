/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas B
Tanggal = 7 April 2020
Desk Program menampilkan adjacency list
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
    for (int i=1; i<V.vertex; ++i)
    {
        cout<<"\n vertex "<<i<<"\n head";
        for (auto x : V.edge[i])
            cout<<" -> "<<x;
        cout<<endl;
    }
}

int main()
{
    makeGraph(V, 9);

    addEdge(V, 1, 2);
    addEdge(V, 1, 3);

    addEdge(V, 2, 1);
    addEdge(V, 2, 3);
    addEdge(V, 2, 4);
    addEdge(V, 2, 5);

    addEdge(V, 3, 1);
    addEdge(V, 3, 2);
    addEdge(V, 3, 5);
    addEdge(V, 3, 7);
    addEdge(V, 3, 8);

    addEdge(V, 4, 2);
    addEdge(V, 4, 5);

    addEdge(V, 5, 2);
    addEdge(V, 5, 3);
    addEdge(V, 5, 4);
    addEdge(V, 5, 6);

    addEdge(V, 6, 5);

    addEdge(V, 7, 3);
    addEdge(V, 7, 8);

    addEdge(V, 8, 3);
    addEdge(V, 8, 7);

    traversal(V);
}
