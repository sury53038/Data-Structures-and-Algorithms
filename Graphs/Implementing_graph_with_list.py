class Graph:
    def __init__(self):
        self.adj = {}

    def addEdge(self, u, v):
        if u not in self.adj:
            self.adj[u] = []
        if v not in self.adj:
            self.adj[v] = []

        self.adj[u].append(v)
        self.adj[v].append(u)

    def printGraph(self):
        for node in self.adj:
            print(node, " -> ", *self.adj[node])
            


g = Graph()

g.addEdge(12,15)
g.addEdge(15,40)
g.addEdge(40,60)
g.addEdge(60,12)

g.printGraph()