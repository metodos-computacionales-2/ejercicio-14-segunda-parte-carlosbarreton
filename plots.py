import matplotlib.pyplot as plt
import numpy as np

data_euler = np.loadtxt("euler.dat")
t = data_euler[:,0]
x = data_euler[:,1]
plt.figure()
plt.plot(t,x)
plt.xlabel("t")
plt.ylabel("x")
plt.savefig("euler.png")