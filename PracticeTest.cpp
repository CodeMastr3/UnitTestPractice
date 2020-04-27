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
    bool actual = true;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		actual = true;
	} else {
		actual = false;
		cout << "Assertion 1 failed\n";
	}
	ASSERT_TRUE(actual);
	one = 1;
	two = 3;
	three = 2;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		actual = true;
	} else {
		actual = false;
		cout << "Assertion 2 failed\n";
	}
	ASSERT_TRUE(actual);
	one = 2;
	two = 1;
	three = 3;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		actual = true;
	} else {
		actual = false;
		cout << "Assertion 3 failed\n";
	}
	ASSERT_TRUE(actual);
	one = 2;
	two = 3;
	three = 1;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		actual = true;
	} else {
		actual = false;
		cout << "Assertion 4 failed\n";
	}
	ASSERT_TRUE(actual);
	one = 3;
	two = 1;
	three = 2;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		actual = true;
	} else {
		actual = false;
		cout << "Assertion 5 failed\n";
	}
	ASSERT_TRUE(actual);
	one = 3;
	two = 2;
	three = 1;

	obj.sortDescending(one, two, three);
	if(one < two && two < three) {
		actual = true;
	} else {
		actual = false;
		cout << "Assertion 6 failed\n";
	}
	ASSERT_TRUE(actual);
}
