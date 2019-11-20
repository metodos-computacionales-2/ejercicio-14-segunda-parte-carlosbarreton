euler.png: euler.dat plots.py rk4.dat
	python plots.py

%.dat : a.out rk4.x
	./a.out 
	./rk4.x

a.out: euler.cpp 
	g++ euler.cpp

rk4.x: rk4.cpp
	g++ rk4.cpp -o rk4.x

clean:
	rm euler.dat a.out euler.png rk4.x 