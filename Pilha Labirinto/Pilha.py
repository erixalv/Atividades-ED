from No import No


class Pilha:
    def __init__(self):
        self.topo = None
        self.size = 0
    
    def isEmpty(self):
        if self.size == 0:
            return True
        return False
    
    def getSize(self):
        return self.size
    
    def top(self):
        if self.isEmpty():
            return -1
        return self.topo.getDado()
    
    def push(self, value):
        aux = No()
        aux.setDado(value)
        aux.setProx(self.topo)
        self.topo = aux
        self.size += 1

    def pop(self):
        if self.isEmpty():
            return -1
        aux = No()
        aux = self.topo
        value = aux.getDado()

        self.topo = aux.getProx()
        self.size -= 1

        aux = None