# -*- coding: utf-8 -*-
import queue
from collections import deque

class Graph:
    def __init__(self, n):
        self.num_vertices = n
        self.M = [[0 for _ in range(n)] for _ in range(n)]
        self.L = [ [] for _ in range(n)]

    def print(self):
        print("Número de Vértices: " + str(self.num_vertices))
        print("Matriz de adjacência:")
        print(self.M)
        print("Lista de Adjacência:")
        print(self.L)
    
    def num_comp(self):
        pred = self.dfs()
        num = 0
        for v in range(self.num_vertices):
            if(pred[v] == -1):
                num += 1
        return num
    
    def dfs(self):
        pred = [-1 for _ in range(self.num_vertices)]
        visitados = [False for _ in range(self.num_vertices)]

        for v in range(self.num_vertices):
            if not visitados[v]:
                self.dfs_pilha(v, visitados, pred)

        return pred

    def dfs_pilha(self, inicio, visitados, pred):
        stack = [inicio]

        while stack:
            v = stack.pop()

            if not visitados[v]:
                visitados[v] = True

                # Adiciona vizinhos em ordem reversa para manter comportamento semelhante ao recursivo
                for u in reversed(self.L[v]):
                    if not visitados[u]:
                        pred[u] = v
                        stack.append(u)

    
    def bfs(self, source):
        visitados = [False for _ in range(self.num_vertices)]
        pred = [-1 for _ in range(self.num_vertices)]
        D = [-1 for _ in range(self.num_vertices)]
        Q = queue.Queue()
        Q.put(source)
        visitados[source] = True
        D[source] = 0
        
        while(Q.empty() == False):
            v = Q.get()
            for u in self.L[v]:
                if(visitados[u] == False):
                    Q.put(u)
                    visitados[u] = True
                    D[u] = D[v] + 1
                    pred[u] = v
        
        return D, pred
    
    def print_caminho_bfs(self, origem, destino):
        dist, pred = self.bfs(origem)

        if dist[destino] == -1:
            print(f"Não há caminho entre {origem} e {destino}.")
            return

        # Reconstrói o caminho de trás pra frente
        caminho = []
        atual = destino
        while atual != -1:
            caminho.append(atual)
            atual = pred[atual]
        
        caminho.reverse()
        print(f"Caminho de {origem} até {destino}: {' -> '.join(map(str, caminho))}")


    def print_caminho_dfs(g, origem, destino):
        pred = [-1] * g.num_vertices
        visitados = [False] * g.num_vertices
        g.dfs_pilha(origem, visitados, pred)

        if not visitados[destino]:
            print(f"Não há caminho entre {origem} e {destino}.")
            return

        caminho = []
        atual = destino
        while atual != -1:
            caminho.append(atual)
            atual = pred[atual]

        caminho.reverse()
        print(f"Caminho DFS de {origem} até {destino}: {' -> '.join(map(str, caminho))}")


