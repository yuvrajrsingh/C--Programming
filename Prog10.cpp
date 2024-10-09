#include <iostream>
int main()
{
    int num1, num2;
    std::cout << "Enter the two integers:" << std::endl;
    std::cin >> num1 >> num2;
    int current = std::min(num1, num2);
    int max = std::max(num1, num2);
    ++current;
    std::cout << std::endl << "The numbers in the range(exclusive):" << std::endl;
    while (current < max){
        std::cout << current << std::endl;
        ++current;
    }
    std::cout << std::endl;
    return 0;
}