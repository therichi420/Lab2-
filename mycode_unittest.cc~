#include <limits.h>
#include "mycode.h"
#include "gtest/gtest.h"

TEST(AddTest, Blah) {
		
	Matrix a,b,c;

	a.matrix[0][0]=4;
	a.matrix[0][1]=5;
	a.matrix[1][0]=6;
	a.matrix[1][1]=3;
	
	b.matrix[0][0]=4;
	b.matrix[0][1]=5;
	b.matrix[1][0]=6;
	b.matrix[1][1]=3;
	
	c.add(a,b);

	
	
  EXPECT_EQ(c.matrix[0][0], 8);
  EXPECT_EQ(c.matrix[0][1], 10);
  EXPECT_EQ(c.matrix[1][0], 12);
  EXPECT_EQ(c.matrix[1][1], 6);
}

TEST(Subtest, Blah) {
		
	Matrix a,b,c;

	a.matrix[0][0]=4;
	a.matrix[0][1]=5;
	a.matrix[1][0]=6;
	a.matrix[1][1]=3;
	
	b.matrix[0][0]=4;
	b.matrix[0][1]=5;
	b.matrix[1][0]=6;
	b.matrix[1][1]=3;
	
	c.sub(a,b);

	
	
  EXPECT_EQ(c.matrix[0][0], 0);
  EXPECT_EQ(c.matrix[0][1], 0);
  EXPECT_EQ(c.matrix[1][0], 0);
  EXPECT_EQ(c.matrix[1][1], 0);
}

TEST(MulTest, Blah) {
		
	Matrix a,b,c;

	a.matrix[0][0]=4;
	a.matrix[0][1]=5;
	a.matrix[1][0]=6;
	a.matrix[1][1]=3;
	
	b.matrix[0][0]=4;
	b.matrix[0][1]=5;
	b.matrix[1][0]=6;
	b.matrix[1][1]=3;
	
	c.multiply(a,b);

	
	
  EXPECT_EQ(c.matrix[0][0], 46);
  EXPECT_EQ(c.matrix[0][1], 35);
  EXPECT_EQ(c.matrix[1][0], 42);
  EXPECT_EQ(c.matrix[1][1], 39);
}

TEST(Mul_AdditionTest, Blah) {
	Matrix a,b,c,d;
		
	a.matrix[0][0]=4;
	a.matrix[0][1]=5;
	a.matrix[1][0]=6;
	a.matrix[1][1]=3;
	
	b.matrix[0][0]=4;
	b.matrix[0][1]=5;
	b.matrix[1][0]=6;
	b.matrix[1][1]=3;
	
	c.multiply(a,b);

	a.matrix[0][0]=4;
	a.matrix[0][1]=5;
	a.matrix[1][0]=6;
	a.matrix[1][1]=3;
	
	d.addmulti(c,a);

	
	
  EXPECT_EQ(c.matrix[0][0], 50);
  EXPECT_EQ(c.matrix[0][1], 40);
  EXPECT_EQ(c.matrix[1][0], 48);
  EXPECT_EQ(c.matrix[1][1], 42);
}
 



