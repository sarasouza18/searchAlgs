output: ABSI.o ABSR.o ABBI.o ABBR.o
	g++ ABSI.o ABSR.o ABBR.o ABBI.o  -o output

ABSI.o: ABSI.cpp 
	g++ -Wall ABSI.cpp -o seqint

ABSR.o: ABSR.cpp
	g++ -Wall ABSR.cpp -o seqrec

ABBI.o: ABBI.cpp
	g++ -Wall ABBI.cpp -o binint

ABBR.o: ABBR.cpp
	g++ -Wall ABBR.cpp -o binrec
