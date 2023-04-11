#include "geometry/Rectangle.hpp"

Rectangle::Rectangle(Color color, int width, int height) : color(color), width(width), height(height) {}

Color Rectangle::getColor() const
{
	return color;
}

int Rectangle::getWidth() const
{
	return width;
}

int Rectangle::getHeight() const
{
	return height;
}

int Rectangle::getArea() const
{
	return width * height;
}

void Rectangle::setColor(Color color)
{
	this->color = color;
}

void Rectangle::setWidth(int width)
{
	this->width = width;
}

void Rectangle::setHeight(int height)
{
	this->height = height;
}