# -*- coding: utf-8 -*-
from graph import Graph

def load_from(fileName):
    f = open(fileName, 'r')
    n = int(f.readline())
    
    g = Graph(n)
    
    
    l = 0
    for line in f:
        line.strip()
        numeros = line.split("\t")
        c = 0
        for i in numeros:
            if(c == n):
                break
            g.M[l][c] = int(i)
            if int(i) != 0:
                g.L[l].append(c)
            
            c += 1
        l += 1
    
    return g

g = load_from("pcv4.txt")
#g.print()
n = g.num_comp()
g.print_caminho_bfs(0, 3)
g.print_caminho_dfs(0, 3)
print("Número de Componentes: " + str(n))

print("=========================================================")

h = load_from("pcv10.txt")
#h.print()
n = h.num_comp()
h.print_caminho_bfs(4, 7)
h.print_caminho_dfs(4, 7)
print("Número de Componentes: " + str(n))

print("=========================================================")

i = load_from("pcv50.txt")
#i.print()
n = i.num_comp()
i.print_caminho_bfs(0, 40)
i.print_caminho_dfs(0, 40)
print("Número de Componentes: " + str(n))

print("=========================================================")

j = load_from("pcv177.txt")
#j.print()
n = j.num_comp()
j.print_caminho_bfs(15, 120)
j.print_caminho_dfs(15, 120)
print("Número de Componentes: " + str(n))