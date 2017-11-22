all:	CA4

CA4:	CA4.o
	g++ Dish.o CA4.o -o Dish -g

CA4.o: Dish.cpp CA4.cpp
	g++ -c Dish.cpp -g
	g++ -c CA4.cpp -g

clean:
	rm -f *.o Dish


