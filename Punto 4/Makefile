CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Cargo.o Salario.o Consolidado.o Empleado.o Empleado_Ejecutivo.o Empleado_Operativo.o
	g++ -o exe *.o
