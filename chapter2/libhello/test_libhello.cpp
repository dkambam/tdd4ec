#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"
#include "libhello.h"

TEST_GROUP(TestHello){

};

TEST(TestHello, FirstTest){
	STRCMP_EQUAL("hello", hello());
}

int main(int argc, char *argv[]){
	return CommandLineTestRunner::RunAllTests(argc,argv);
}