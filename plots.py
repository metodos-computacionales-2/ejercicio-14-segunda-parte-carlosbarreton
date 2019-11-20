import matplotlib.pyplot as plt
import numpy as np

data_euler = np.loadtxt("euler.dat")
t = data_euler[:,0]
x = data_euler[:,1]
plt.figure()
plt.plot(t,x)
plt.title("Euler")
plt.xlabel("t")
plt.ylabel("x")
plt.savefig("euler.png")

data = np.loadtxt("rk4.dat")
t = data[:,0]
x = data[:,1]
plt.figure()
plt.plot(t,x)
plt.title("Runge-Kutta")
plt.xlabel("t")
plt.ylabel("x")
plt.savefig("rk4.png")