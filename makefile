result: main.o student.o
	g++ main.o student.o -o result

student_main.o: main.cpp
	g++ -c main.cpp

student.o: student.cpp
	g++ -c student.cpp
