OBJ = main.o lista.o tipo.o
CXXFLAGS=-Wall

main: $(OBJ)
	g++ -o main $(OBJ)

-include dependencies

.PHONY: clean cleanall
depend:
	g++ -MM *.cc > dependencies
clean:
	rm -f *.o
cleanall:
	rm -f main *.o