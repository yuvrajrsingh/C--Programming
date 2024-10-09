#include <iostream>
int main()
{
    int num1, num2;
    std::cout << "Enter the two integers:" << std::endl;
    std::cin >> num1 >> num2;
    int current = std::min(num1, num2);
    int max = std::max(num1, num2);
    ++current;
    std::cout << std::endl << "The range excluding:" << std::endl;
    for (; current < max; current++){
        std::cout << current << std::endl;
    }
    std::cout << std::endl;
    return 0;
}