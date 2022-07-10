#include "Sed.hpp"

Sed::Sed(std::string filename, std::string first_str, std::string second_str)
{
    _filename = filename;
    _first_str = first_str;
    _second_str = second_str;
}

Sed::~Sed()
{
    delete this;
}
/*===================[METHODS]===================*/

/*===================[GETTERS]===================*/
std::string Sed::getFilename()
{
    return _filename;
}

std::string Sed::getFirstStr()
{
    return _first_str;
}
std::string Sed::getSecondStr()
{
    return _second_str;
}

/*===================[SETTERS]===================*/
void Sed::setFilename(std::string valueFilename)
{
    _filename = valueFilename;
}

void Sed::setFirstStr(std::string valueFirstStr)
{
    _first_str = valueFirstStr;
}
void Sed::setSecondStr(std::string valueSecondStr)
{
    _second_str = valueSecondStr;
}


