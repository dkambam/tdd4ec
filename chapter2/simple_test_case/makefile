CLEANUP = rm -f
TARGET_EXTENSION=.out


UNITY_ROOT = ../../Unity-master
C_COMPILER = gcc

CFLAGS=-std=c99
CFLAGS += -Wall


TARGET_BASE1=sprintfTest

TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)

SRC_FILES1=$(UNITY_ROOT)/src/unity.c  tests/sprintfTest.c

INC_DIRS=-Isrc -I$(UNITY_ROOT)/src
SYMBOLS=-DTEST

all: clean default

default:
#	ruby auto/generate_test_runner.rb test/TestProductionCode.c  test/test_runners/TestProductionCode_Runner.c
#	ruby auto/generate_test_runner.rb test/TestProductionCode2.c test/test_runners/TestProductionCode2_Runner.c
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)
	./$(TARGET1)

clean:
	$(CLEANUP) ./$(TARGET1)

