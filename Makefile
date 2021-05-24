output: main.o encoder.o decoder.o
	g++ main.o encoder.o decoder.o -o output

main.o: src/main.cpp
	g++ -c src/main.cpp

encoder.o: src/encoder.cpp src/include/encoder.h
	g++ -c src/encoder.cpp

decoder.o: src/decoder.cpp src/include/decoder.h
	g++ -c src/decoder.cpp

clean:
	del *.o output.exe