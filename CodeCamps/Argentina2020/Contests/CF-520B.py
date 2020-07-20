class Node:
     def __init__(self, value):
        self.value = value
        self.izq = None
        self.der = None

def main():
    n = int(input())
    m = int(input())

    pila = [Node(n)]

    root = Node(3)
    root.izq = Node(-1)
    root.der = Node(1)

    counter = 0

    mFound = False

    while not mFound:
        pilaTemp = []
        for nodo in pila:
            nodoIzq = 2 * nodo.value
            nodoDer = nodo.value - 1
            if (nodoIzq == m or nodoDer == m):
                mFound = True
                break;
            else:
                nodo.izq = Node(nodoIzq)
                nodo.der = Node(nodoDer)
                pilaTemp.append(nodo.izq)
                pilaTemp.append(nodo.der)
        pila = pilaTemp
        counter += 1

    print(counter)



main()