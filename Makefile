bin/Luchador1 : src/Luchador1.cpp include/*
	c++	src/Luchador1.cpp -o	bin/Luchador1 -lcurses	-I include

run : bin/Luchador1
	./bin/Luchador1