#include <iostream>

int main()
{

    int a = 5;
    int b = 5;
    int result = ++a; // a tang len 1, sau do moi gan result = a => result = 6, a = 6
    std::cout << a << " " << result << " - ";
    int result2 = b++; // gan result2 = b, sau do moi tang b len 1 => result = 5, b = 6
    std::cout << b << " " << result2 << std::endl;
    return 0;
}