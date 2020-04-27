/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
	actual = obj.isPalindrome("a");
	ASSERT_TRUE(actual);
	actual = obj.isPalindrome(" ");
	ASSERT_TRUE(actual);
	actual = obj.isPalindrome("aaa");
	ASSERT_TRUE(actual);
	actual = obj.isPalindrome("aaaa");
	ASSERT_TRUE(actual);
	actual = obj.isPalindrome("aa aa");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, simple_sortDescending)
{
    Practice obj;
	int one(1);
	int two(2);
	int three(3);
    bool first;
	bool second;
	bool third;
	bool fourth;
	bool fifth;
	bool sixth;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		first = true;
	} else {
		first = false;
	}
	ASSERT_TRUE(first);
	one = 1;
	two = 3;
	three = 2;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		second = true;
	} else {
		second = false;
	}
	ASSERT_TRUE(second);
	one = 2;
	two = 1;
	three = 3;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		third = true;
	} else {
		third = false;
	}
	ASSERT_TRUE(third);
	one = 2;
	two = 3;
	three = 1;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		fourth = true;
	} else {
		fourth = false;
	}
	ASSERT_TRUE(fourth);
	one = 3;
	two = 1;
	three = 2;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		fifth = true;
	} else {
		fifth = false;
	}
	ASSERT_TRUE(fifth);
	one = 3;
	two = 2;
	three = 1;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		sixth = true;
	} else {
		sixth = false;
	}
	ASSERT_TRUE(sixth);
}
