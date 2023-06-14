void DFS (int vertex) {
    visited[vertex] = true;
    list<int> adjList = adjList[vertex];
  
    cout << vertex;
    
    list<int>::iterator i;
    for (i = adjList.begin(); i != adjList.end; i++) {
        if (!visited[*i]) {
            DFS(*i);
        }
    }
}
