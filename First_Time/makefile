.PHONY: all run clean
GPP = g++
FLAGS= 
HEADERS = 
all: Main

Main: Main.o ComplexNumber.o 
	$(GPP) Main.o ComplexNumber.o -o Main

ComplexNumber: ComplexNumber.o
	$(GPP) $< -o ComplexNumber

%.o: %.cpp
	$(GPP) -c $< -o $@

clean:
	rm -f *.o Main ComplexNumber