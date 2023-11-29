#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph
{
public:
    int numVertices;
    int **adjMatrix;

    Graph(int numVertices)
    {
        this->numVertices = numVertices;
        // vector <vector <int>> v(numVertices, vector<int> (numVertices, 0));
        adjMatrix = new int *[numVertices];
        for (int i = 0; i < numVertices; i++)
        {
            adjMatrix[i] = new int[numVertices];
            for (int j = 0; j < numVertices; j++)
            {
                adjMatrix[i][j] = 0;
            }
        }
    }

    void addEdgeMatrix(int source, int destination, bool directed)
    {
        adjMatrix[source][destination] = 1;

        if (directed == 0){
            adjMatrix[destination][source] = 1;
        }
    }

    void printGraph()
    {
        for (int i = 0; i < numVertices; i++)
        {
            for (int j = 0; j < numVertices; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void BFS(int source) {
        vector<bool> visited(numVertices, false);
        queue<int> q;

        q.push(source);
        visited[source] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            cout << current << " ";

            for (int neighbor = 0; neighbor < numVertices; neighbor++) {
                if (adjMatrix[current][neighbor] && !visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};

int main()
{
    Graph graph(4);
    graph.addEdgeMatrix(0, 1, 0);
    graph.addEdgeMatrix(0, 2, 0);
    graph.addEdgeMatrix(1, 2, 0);
    graph.addEdgeMatrix(2, 0, 0);
    graph.addEdgeMatrix(2, 3, 0);
    graph.printGraph();

    cout << endl;
    graph.BFS(0);
    cout << endl;
    
    return 0;
}
