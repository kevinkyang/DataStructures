#include "ArrayList.h"
#include "LinkedList.h"
#include "gtest/gtest.h"
#include <vector>
#include <cstdlib>

class ListTest : public ::testing::Test 
{
protected:
	LinkedList<int> list;

	ListTest()
	{

	}

	~ListTest()
	{

	}

};

TEST_F(ListTest, SimpleAddTest) 
{
	int a = 1, b = 2, c = 3, d = 4;
	list.add(a);
	list.add(b);
	list.add(c);
	list.add(d);

	ASSERT_FALSE(list.empty());
	ASSERT_EQ(list.size(), 4);

	std::vector<int> vec = list.toVector();
	for (int i = 0; i < 4; i++) {
		EXPECT_EQ(vec.at(i), i+1);
	}
}

// TEST_F(ListTest, SimpleRemoveTest)
// {
// 	int num = 15;
// 	for (int i = 0; i < num; ++i)
// 	{
// 		list.add(i);
// 	}

// 	for (int i = 0; i < num; ++i)
// 	{
// 		list.remove(i);
// 		ASSERT_EQ(list.size(), num - i - 1);
// 	}

// 	ASSERT_TRUE(list.empty());
// }

// TEST_F(ListTest, SimpleContainsTest)
// {
// 	int n = rand();
// 	list.add(n);
// 	ASSERT_TRUE(list.contains(n));
// }

// TEST_F(ListTest, ResizeTest)
// {
// 	int num = 101;
// 	for (int i = 0; i < num; i++) {
// 		list.add(i);
// 	}

// 	ASSERT_EQ(list.size(), num);
// }

int main(int argc, char** argv) 
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();	
}