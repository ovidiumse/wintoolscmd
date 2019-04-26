#include "MyApi.h"

#include <iostream>
#include <gtest/gtest.h>

class MyApiTest : public testing::Test
{

};

TEST_F(MyApiTest, b)
{
	EXPECT_EQ(7, f());
}