#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << RED "Wrong args number\n";
        return 1;
    }

    std::cout << argv[1] << "\n";
    std::cout << argv[2] << "\n";
    std::cout << argv[3] << "\n";

    Sed object = new Sed(

    return 0;
}