#include <bits/stdc++.h>
using namespace std;
class Edge_Weight
{
public:
    int a, b, c;
    Edge_Weight(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int n, e;
int path[100]; //shortest path from source tracking array. 
vector<Edge_Weight> graph;

void bellman_ford(int src)
{
    //initialize path array by setting to infinite (max integer)
    for (int i = 0; i < n; i++)
    {
        path[i] = INT_MAX;
    }
    path[src] = 0; //initialize src to src distacnce as zero.

    for (int i = 0; i < n - 1; i++) // continuing whole process till (node number -1)
    {
        //bellman-ford algorithm apply

        for (auto ed : graph) //gettng values from edge list
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if (path[a] != INT_MAX && path[a] + c < path[b])
            {
                path[b] = path[a] + c;
            }
        }
    }
}

int main()
{

    cin >> n >> e; //node & edge input

    //graph input (Edge list format):-
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph.push_back(Edge_Weight(a, b, c));
        //graph.push_back(Edge_Weight(b, a, c)); // for undirected graph
    }



    int src = 0; //source value (can be taken as user input)
    bellman_ford(src);

    //distance print from source to every node:-
    for(int i= 0; i<n;i++)
    {
        cout<<i<<" -> "<<path[i]<<endl;
    }

    return 0;
}