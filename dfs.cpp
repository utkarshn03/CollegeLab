#include <iostream>
#include <vector>
using namespace std;

class Graph{
    public:
    int vertices;
    vector<int> *adjLists;
    bool *visit;
    
    Graph(int vertices){
        this->vertices = vertices;
        this->adjLists = new vector<int>[vertices];
        this->visit = new bool[vertices];
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
    }

    void DFS(int vertex){
        visit[vertex] = true;
        vector<int> adjList = adjLists[vertex];

        cout<<vertex<<"\n";

        for(int i=0; i<adjList.size(); i++){
            if (visit[adjList[i]] == false){
                DFS(adjList[i]);
            }
        }
    }
};


int main() {
 Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);

  g.DFS(2);

  return 0;
}