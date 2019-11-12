import numpy as np
import matplotlib.pylab as plt

lista = ["Explicito1.dat", "Explicito2.dat", "Explicito3.dat"]
lista2 = ["Implicito1.dat", "Implicito2.dat", "Implicito3.dat"]
lista3 = ["0.1", "0.01", "1"]

plt.figure(figsize=(12,4))
plt.subplot(1,2,1)
plt.title("Explicito")
plt.xlabel("x")
plt.ylabel("y")
for i in range(3):
    m = np.loadtxt(lista[i])
    x = m[:,0]
    y = m[:,1]
    plt.plot(x,y,label = "omega = "+lista3[i])
plt.legend()

plt.subplot(1,2,2) 
plt.title("Implicito")
plt.xlabel("x")
plt.ylabel("y")
for i in range(3):
    m = np.loadtxt(lista2[i])
    x = m[:,0]
    y = m[:,1]
    plt.plot(x,y, label = "omega = "+ lista3[i])
plt.legend()
    
plt.savefig("primergrado.png")