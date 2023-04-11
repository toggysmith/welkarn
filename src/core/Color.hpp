#ifndef WELKARN__CORE_COLOR
#define WELKARN__CORE_COLOR

class Color {
    private:
        unsigned short red;
        unsigned short green;
        unsigned short blue;
    
    public:
        Color(unsigned short, unsigned short, unsigned short);

        unsigned short getRed() const;
        unsigned short getGreen() const;
        unsigned short getBlue() const;

        void setRed(unsigned short);
        void setGreen(unsigned short);
        void setBlue(unsigned short);

        bool operator==(const Color&) const;
};

#endif