CC = g++

CFLAGS = -std=c++11 -g -Wall

TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).o Vector.o vectormath.o
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).o Vector.o vectormath.o

vectormath.o: vectormath.cpp
	$(CC) $(CFLAGS) -c vectormath.cpp

Vector.o: Vector.cpp
	$(CC) $(CFLAGS) -c Vector.cpp

$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

clean:
	$(RM) *.o $(TARGET)
