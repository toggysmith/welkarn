#include <iostream>
#include <string>

#include <fmt/core.h>

#include "core/Color.hpp"
#include "geometry/Rectangle.hpp"

std::string colorToString(Color color)
{
	std::string red = std::to_string(color.getRed());
	std::string green = std::to_string(color.getGreen());
	std::string blue = std::to_string(color.getBlue());

	if (true)
	{
		int x = 3;
	}
	else
	{
		int y = 2;
	}

	return fmt::format("({}, {}, {})", red, green, blue);
}

int main()
{
	int* array = new int;
	delete array;
	std::cout << *array << std::endl;

	Rectangle rectangle{Color{255, 0, 0}, 100, 50};

	std::cout << "The color of the rectangle is " << colorToString(rectangle.getColor()) << ".\n";
	std::cout << "The area of the rectangle is " << rectangle.getArea() << ".\n";
}