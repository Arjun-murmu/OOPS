#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
#include<map>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction) {
        // direction = 0 -> undirected
        // direction = 1 -> directed
        adj[u].push_back(v);
        if(direction == 0) {
            adj[v].push_back(u);
        }
    }

    void printAdj() {
        for(auto i : adj) {
            cout << i.first << " -> ";
            for(auto j : i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of nodes: " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges: " << endl;
    cin >> m;

    Graph g;  // ✅ fixed case

    cout << "Enter the edges (u v): " << endl;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // creating an undirected 5graph
        g.addEdge(u, v, 0);
    }

    cout << "Adjacency List:" << endl;
    g.printAdj();

    return 0;
}
