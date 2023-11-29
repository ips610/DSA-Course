#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int vertex;
    Node* next;

    Node(int vertex) {
        this->vertex = vertex;
        next = NULL;
    }
};

class Graph {
public:
    int numVertices;
    vector<Node*> adjList;

    Graph(int numVertices) {
        this->numVertices = numVertices;
        adjList.resize(numVertices);
    }

    void addEdgeList(int source, int destination) {
        Node* newNode = new Node(destination);
        newNode->next = adjList[source];
        adjList[source] = newNode;
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            Node* temp = adjList[i];
            cout << "Vertex " << i << " : ";
            while (temp) {
                cout << temp->vertex << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(4);
    graph.addEdgeList(0, 1);
    graph.addEdgeList(0, 2);
    graph.addEdgeList(1, 2);
    graph.addEdgeList(2, 0);
    graph.addEdgeList(2, 3);
    graph.printGraph();

    return 0;
}