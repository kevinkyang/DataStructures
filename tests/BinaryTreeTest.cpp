#include "BinaryTree.h"
#include "gtest/gtest.h"


TEST(BinaryTreeTest, Test1)
{
    BinaryTree<int> tree;

    ASSERT_TRUE(tree.empty());

    tree.add(1);
    tree.add(2);
    tree.add(3);

    ASSERT_EQ(tree.getNumNodes(), 3);
    ASSERT_EQ(tree.getTreeHeight(), 2);

    ASSERT_TRUE(tree.remove(2));
}

int main (int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
