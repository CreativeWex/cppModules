#ifndef SED_HPP
#define SED_HPP

#include <iostream>

# define RED	"\x1b[31m"
# define BLU	"\x1B[34m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"

class Sed
{
    public:
        Sed(std::string filename, std::string first_str, std::string second_str);
        ~Sed();
    /*===================[METHODS]===================*/
        // bool validateFilename(std::string filename); TODO::
    
    /*===================[GETTERS]===================*/
        std::string getFilename();
        std::string getFirstStr();
        std::string getSecondStr();

    /*===================[SETTERS]===================*/
        void setFilename(std::string valueFilename);
        void setFirstStr(std::string valueFirstStr);
        void setSecondStr(std::string valueSecondStr);

    private:
        std::string _filename;
        std::string _first_str;
        std::string _second_str;
};

#endif