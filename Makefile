MKDIR := mkdir -p

CC := g++
TESTDIR := test
INCLUDEDIR := include
TARGET := bin
INC := -I include

all:
	$(MKDIR) ./$(TARGET)
	$(CC) $(TESTDIR)/cpu_timer.cpp $(INC) -o $(TARGET)/cpu_timer
	$(CC) $(TESTDIR)/wall_timer.cpp $(INC) -o $(TARGET)/wall_timer

clean:
	rm $(TARGET)/*
