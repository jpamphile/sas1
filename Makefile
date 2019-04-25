sas:	main.o Student.o Course.o Storage.o
	g++ -o sas main.o Student.o Course.o Storage.o

main.o:	main.cc Student.h defs.h Course.h Storage.h
	g++ -c main.cc

Student.o:	Student.cc Student.h Course.h defs.h
	g++ -c Student.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

Storage.o:	Storage.cc Storage.h Course.h Student.h defs.h
	g++ -c Storage.cc

clean:
	rm -f *.o sas
