#include "core/Color.hpp"

Color::Color(unsigned short red, unsigned short green, unsigned short blue) : red(red), green(green), blue(blue) {}

unsigned short Color::getRed() const {
    return red;
}

unsigned short Color::getGreen() const {
    return green;
}

unsigned short Color::getBlue() const {
    return blue;
}

void Color::setRed(unsigned short red) {
    this->red = red;
}

void Color::setGreen(unsigned short green) {
    this->green = green;
}

void Color::setBlue(unsigned short blue) {
    this->blue = blue;
}

bool Color::operator==(const Color& otherColor) const {
    return this->getRed() == otherColor.getRed()
           && this->getGreen() == otherColor.getGreen()
           && this->getBlue() == otherColor.getBlue();
}