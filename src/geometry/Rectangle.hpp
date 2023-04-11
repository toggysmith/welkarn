#ifndef WELKARN__GEOMETRY_RECTANGLE
#define WELKARN__GEOMETRY_RECTANGLE

#include "core/Color.hpp"

class Rectangle
{
	private:
		int width;
		int height;
		Color color;

	public:
		/**
		 * @brief Constructretret
		 *
		 */
		Rectangle(Color, int, int);

		Color getColor() const;
		int getWidth() const;
		int getHeight() const;
		int getArea() const;

		void setColor(Color);
		void setWidth(int);
		void setHeight(int);
};

#endif