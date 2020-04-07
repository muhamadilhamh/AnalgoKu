/*
Nama = Muhamad Ilham Habib
NPM = 140810180018
Kelas B
Tanggal = 7 April 2020
Desk Program menampilkan adjacency matriks
*/

#include <iostream>

using namespace std;

struct Graph {
    int vertex;
    bool** edge;
};
Graph V;

void makeGraph(Graph& V, int vertex)
{
    V.vertex = vertex;
    V.edge = new bool*[vertex];
    for (int i=0; i<vertex; i++) {
        V.edge[i] = new bool[vertex];
        for (int j=0; j<vertex; j++)
            V.edge[i][j] = false;
    }
}

void addEdge(Graph& V, int i, int j)
{
    V.edge[i][j] = true;
    V.edge[j][i] = true;
}

void traversal(Graph V)
{
    cout<<"* : ";
    for (int i=0; i<V.vertex; i++) {
        cout<<i<<" ";
    }
    cout<<endl<<"---";
    for (int i=0; i<V.vertex; i++) {
        cout<<"--";
    }
    cout<<endl;
    for (int i=0; i<V.vertex; i++) {
        cout<<i<<" : ";
        for (int j=0; j<V.vertex; j++)
            cout<<V.edge[i][j]<< " ";
        cout<<endl;
    }
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

    traversal(V);
}
