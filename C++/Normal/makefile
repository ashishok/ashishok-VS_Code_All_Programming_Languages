multifile: multifile_1.o multifile_2.o
	     g++ multifile_1.o multifile_2.o -o multifile

multifile_1.o: multifile_1.cpp
	     g++ -c multifile_1.cpp

multifile_2.o: multifile_2.cpp
	     g++ -c multifile_2.cpp

clean:
	rm +.o multifile		