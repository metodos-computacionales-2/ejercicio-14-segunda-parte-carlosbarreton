plot.png: euler.dat plots.py
	python plots.py

%.dat : a.out
	./a.out

a.out: euler.cpp
	g++ euler.cpp