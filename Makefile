OBJECTS= ./build/compiler.o ./build/compiler_process.o ./build/helpers/buffer.o
INCLUDES= -I./

all: ${OBJECTS}
		g++ main.cpp ${INCLUDES} -g -o ./main

./build/compiler.o: ./compiler.cpp
		g++ ./compiler.cpp ${INCLUDES} -o ./build/compiler.o -g -c

./build/compiler_process.o: ./compiler_process.cpp
		g++ ./compiler_process.cpp ${INCLUDES} -o ./build/compiler_process.o -g -c 

./build/helpers/buffer.o: ./helpers/buffer.c
		gcc ./helpers/buffer.c ${INCLUDES} -o ./build/helpers/buffer.o -g -c 

clean:
		rm main
		rm -rf ${OBJECTS}

