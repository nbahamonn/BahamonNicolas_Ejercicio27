primergrado.png : ejercicio27.py Implicito3.dat  
	python ejercicio27.py
    
Implicito3.dat : ejercicio27.x
	./ejercicio27.x

ejercicio27.x : ejercicio27.cpp
	c++ ejercicio27.cpp -o ejercicio27.x

