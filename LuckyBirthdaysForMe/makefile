CC = gcc
TARGET = Lucky
OBJECTS =  Lucky.o makeReadable.o randomize.o finder.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

clean :
	rm *.o Lucky
