#include <iostream>
#include <cstdint>
/*auto main() -> int //see also trailing return type
{
    std::cout <<"Hello World" << std::endl;
}*/

using MyCppStruct = struct 
{
    int8_t a = 0;
    float b = 2.1F;

    void print() const
    {
      std::cout <<"a = " << a << "; b = " << b << std::endl;
    }
};

auto main() -> int
{
    MyCppStruct my_struct;
    std::cout << "Printing struct my_struct: " << std::endl;
    my_struct.print();
}
