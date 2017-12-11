MKDIR := mkdir -p

CC := g++
SRCDIR := src
INCLUDEDIR := include
TARGET := bin
INC := -I include

all:
	$(MKDIR) ./$(TARGET)
	$(CC) $(SRCDIR)/cpu_timer.cpp $(INC) -o $(TARGET)/cpu_timer
	$(CC) $(SRCDIR)/wall_timer.cpp $(INC) -o $(TARGET)/wall_timer

clean:
	rm $(TARGET)/*
