class Graph:
    def __init__(self, V):
        self.V = V
        self.adj = [[] for _ in range(V)]

    def addEdge(self, u, v):
        self.adj[u].append(v)
        self.adj[v].append(u)

    def printGraph(self):
        for i in range(self.V):
            print(i, " -> ", *self.adj[i])


graph = Graph(4)

graph.addEdge(0,1)
graph.addEdge(1,2)
graph.addEdge(2,3)
graph.addEdge(0,3)

graph.printGraph()