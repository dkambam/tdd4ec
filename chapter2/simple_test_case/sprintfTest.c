/*
Demo: Running a simple test case in unity framework
*/

#include "unity_fixture.h"

static void runAllTests(void);

int main(int argc, const char *argv[]){
	return UnityMain(argc, argv, runAllTests);
}

static void runAllTests(void){
	RUN_TEST_GROUP(sprintf);
}

TEST_GROUP(sprintf);

TEST_SETUP(sprintf){
	;
}

TEST_TEAR_DOWN(sprintf){
	;
}

TEST(sprintf, NoFormatOperation){
	char output[5] = "";
	
	TEST_ASSERT_EQUAL(3, sprintf(output, "hey"));
	TEST_ASSERT_EQUAL_STRING("hey", output);
}



TEST_GROUP_RUNNER(sprintf){
	RUN_TEST_CASE(sprintf, NoFormatOperation);
}