CC = gcc
CLFAGS = -std=c99 -Wall

UNITY_ROOT = ../../Unity-master

SRC = $(UNITY_ROOT)/src/unity.c
SRC += sprintfTest.c

INC_DIRS = -I$(UNITY_ROOT)/src
SYMBOLS = -DTEST

TARGET = sprintfTest.out


all: clean default

default:
	$(CC) $(CLFAGS) $(INC_DIRS) $(SRC) $(SYMBOLS) -o $(TARGET)

clean:
	-rm -f $(TARGET)