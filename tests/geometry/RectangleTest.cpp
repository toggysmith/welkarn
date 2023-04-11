#include <gtest/gtest.h>

#include "core/Color.hpp"
#include "geometry/Rectangle.hpp"

TEST(Rectangle, Rectangle)
{
	Color color{255, 128, 64};
	int width{100};
	int height{50};

	Rectangle rectangle{color, width, height};

	ASSERT_EQ(rectangle.getColor(), color);
	ASSERT_EQ(rectangle.getWidth(), width);
	ASSERT_EQ(rectangle.getHeight(), height);
}

/*TEST(Rectangle, getColor)
{
    Color color{255, 128, 64};

    Rectangle rectangle{color, 100, 50};

    ASSERT_EQ(rectangle.getColor(), color);
}

TEST(Rectangle, getWidth)
{
    int width{100};

    Rectangle rectangle{{255, 128, 64}, width, 50};

    ASSERT_EQ(rectangle.getWidth(), width);
}

TEST(Rectangle, getHeight)
{
    int height{50};

    Rectangle rectangle{{255, 128, 64}, 100, height};

    ASSERT_EQ(rectangle.getHeight(), height);
}

TEST(Rectangle, getArea)
{
    int width{100};
    int height{50};

    Rectangle rectangle{{255, 128, 64}, width, height};

    ASSERT_EQ(rectangle.getArea(), width * height);
}

TEST(Rectangle, setColor)
{
    Color color{255, 128, 64};

    Rectangle rectangle({0, 0, 0}, 100, 50);

    rectangle.setColor(color);

    ASSERT_EQ(rectangle.getColor(), color);
}

TEST(Rectangle, setWidth)
{
    int width{100};

    Rectangle rectangle({255, 128, 64}, width, 50);

    rectangle.setWidth(width);

    ASSERT_EQ(rectangle.getWidth(), width);
}

TEST(Rectangle, setHeight)
{
    int height{100};

    Rectangle rectangle({255, 128, 64}, height, 50);

    rectangle.setHeight(height);

    ASSERT_EQ(rectangle.getHeight(), height);
}*/