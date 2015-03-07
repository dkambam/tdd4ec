CC = gcc
CLFAGS = -std=c99 -Wall

UNITY_ROOT = ../../Unity-master

SRC = $(UNITY_ROOT)/src/unity.c
SRC += $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c
SRC += sprintfTest.c
# SRC += sprintfTestRunner.c
# SRC += allTests.c

INC_DIRS = -I$(UNITY_ROOT)/src 
INC_DIRS += -I$(UNITY_ROOT)/extras/fixture/src

TARGET = sprintfTest.out


all: clean default

default:
	$(CC) $(CLFAGS) $(INC_DIRS) $(SRC) $(SYMBOLS) -o $(TARGET)

clean:
	-rm -f $(TARGET)