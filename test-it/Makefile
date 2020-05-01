program: compile
	g++ -o bin/program obj/main.o obj/test.o obj/quadratic-equation.o &&\
	chmod +x bin/program

compile:
	cd obj && g++ -c ../main.cpp ../test.cpp ../../quadratic-equation.cpp

clean:
	cd obj && rm -rvf *

run:
	cd bin && ./program