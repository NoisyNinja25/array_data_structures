build:
	g++ Array.h Stack.h driver.cpp -o Composition

run: Array
	./Array

clean:
	rm *.gch *.out Composition