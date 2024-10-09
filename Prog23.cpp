#include <iostream>
#include "Sales_Item.h"
int main()
{
    Sales_item total;
    if (std::cin >> total){
        Sales_item trans;
        while (std::cin >> trans){
            if (total.isbn() == total.isbn()){
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
            std::cout << total << std::endl;
        }
    } else {
        std::cerr << "Input Error" << std::endl;
        return -1;
    }
    return 0;
}