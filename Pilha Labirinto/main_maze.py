# -*- coding: utf-8 -*-
import time
from maze import Maze
from collections import deque
from No import No
from Pilha import Pilha
import numpy as np


s = deque()


maze_csv_path = "labirinto1.txt"  # Substitua pelo caminho correto
maze = Maze() 

maze.load_from_csv(maze_csv_path)

# Exibir o lab
maze.run()
maze.init_player()

pos_stacks = Pilha()
pos = maze.get_init_pos_player()

pos_stacks.push(pos)


while pos_stacks.isEmpty() == False:
    pos = pos_stacks.top()
    print(pos)
    pos_stacks.pop()
    if maze.find_prize(pos):
        break
    else:
        maze.mov_player(pos)
        for move in [(1, 0), (0, 1), (-1, 0), (0, -1)]:
            new_pos = np.add(pos, move)
            if maze.is_free(tuple(new_pos)):
                pos_stacks.push(tuple(new_pos))

print("Prêmio achado!")