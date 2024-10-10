#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item current_item, input_item;
    if (std::cin >> current_item){
        int cnt = 1;
        while (std::cin >> input_item){
            if (input_item.isbn() == current_item.isbn()){
                ++cnt;  
            } else {
                std::cout << current_item << " occurs " << cnt << " times " << std::endl;
                current_item = input_item;
                cnt = 1;
            }
        }
        std::cout << current_item << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}