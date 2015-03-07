/*
Demo: Running a simple test case in unity framework
*/

#include "unity_fixture.h"

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



