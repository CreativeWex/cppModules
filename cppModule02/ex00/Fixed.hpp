#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &obj);
	    ~Fixed();

        Fixed & operator=(const Fixed &obj);

        int getRawBits() const;
        void serRawBits(int const raw);

    private:
        int _value;
        static int const _bitsNumber; // TODO: 8? 

};

#endif