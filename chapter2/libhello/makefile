CXX = g++
CPPFLAGS = -Wall `pkg-config --cflags cpputest`
LDFLAGS = `pkg-config --libs cpputest`

LIB_OBJS = libhello.o
TEST_OBJS = test_libhello.o 
PROG_OBJS = main.o 
OBJS = $(LIB_OBJS) $(PROG_OBJS) $(TEST_OBJS)

TEST_TARGET = test.out
FINAL_TARGET = hello.out

all: clean test
	
final: $(PROG_OBJS) $(LIB_OBJS)
	$(CXX) $(PROG_OBJS) $(LIB_OBJS) -o $(FINAL_TARGET)

$(OBJS):libhello.h

test: test.out
	./$(TEST_TARGET)

test.out: $(TEST_OBJS) $(LIB_OBJS)
	$(CXX) $(LDFLAGS) $(TEST_OBJS) $(LIB_OBJS) -o $(TEST_TARGET)

clean:
	-rm $(OBJS) $(FINAL_TARGET) $(TEST_TARGET)