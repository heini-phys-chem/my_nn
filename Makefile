CC=g++
CFLAGS=-Wall
LDFLAGS=
OBJFILES=utiles.o main.o
TARGET=run

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -rf $(OBJFILES) $(TARGET) 
