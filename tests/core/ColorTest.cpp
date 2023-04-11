#include <gtest/gtest.h>

#include "core/Color.hpp"

TEST(Color, Color)
{
	unsigned short red{223};
	unsigned short green{22};
	unsigned short blue{46};

	Color color{red, green, blue};

	EXPECT_EQ(color.getRed(), red);
	EXPECT_EQ(color.getGreen(), green);
	EXPECT_EQ(color.getBlue(), blue);
}

TEST(Color, getRed)
{
	unsigned short red{223};

	Color color{red, 12, 34};

	EXPECT_EQ(color.getRed(), red);
}

TEST(Color, getGreen)
{
	unsigned short green{223};

	Color color{12, green, 34};

	EXPECT_EQ(color.getGreen(), green);
}

TEST(Color, getBlue)
{
	unsigned short blue{223};

	Color color{73, 12, blue};

	EXPECT_EQ(color.getBlue(), blue);
}

TEST(Color, setRed)
{
	unsigned short red{200};

	Color color{0, 0, 0};

	color.setRed(red);

	EXPECT_EQ(color.getRed(), red);
}

TEST(Color, setGreen)
{
	unsigned short green{200};

	Color color{0, 0, 0};

	color.setGreen(green);

	EXPECT_EQ(color.getGreen(), green);
}

TEST(Color, setBlue)
{
	unsigned short blue{200};

	Color color{0, 0, 0};

	color.setBlue(blue);

	EXPECT_EQ(color.getBlue(), blue);
}