#include <iostream>

using namespace std;

const int MAX_NODES = 6;

struct Node {
    int data;
    Node* next;
    
    Node(int d) : data(d), next(nullptr) {}
};

class Graph {
private:
    Node* adj[MAX_NODES];

public:
    Graph() {
        for (int i = 0; i < MAX_NODES; i++)
            adj[i] = nullptr;
    }

    void addEdge(int u, int v) {
        Node* newNode = new Node(v);
        newNode->next = adj[u];
        adj[u] = newNode;

        newNode = new Node(u);
        newNode->next = adj[v];
        adj[v] = newNode;
    }

    void bfs(int start) {
        bool visited[MAX_NODES] = {false};
        int distance[MAX_NODES];
        for (int i = 0; i < MAX_NODES; i++)
            distance[i] = -1;

        int queue[MAX_NODES], front = 0, back = 0;

        visited[start] = true;
        distance[start] = 0;
        queue[back++] = start;

        while (front < back) {
            int node = queue[front++];
            Node* temp = adj[node];

            while (temp) {
                if (!visited[temp->data]) {
                    visited[temp->data] = true;
                    distance[temp->data] = distance[node] + 1;
                    queue[back++] = temp->data;
                }
                temp = temp->next;
            }
        }

        for (int i = 0; i < MAX_NODES; i++) {
            cout << "Jarak dari " << start << " ke " << i << ": " << distance[i] << endl;
        }
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.bfs(0);

    return 0;
}
