#include <iostream>
#include <iomanip>
//Calculate the cost of an order for your future shop. The shirts are identical, and the order has one packaging fee.
int main() {
    int quantity;
    double price, order_fee;
    std::cout << "Enter a quantity of T-shirts: ";
    std::cin >> quantity;
    std::cout << "Enter price for a peace: ";
    std::cin >> price;
    std::cin.ignore();
    std::cout << "Enter prder fee: ";
    std::cin >> order_fee;
    
    double order_price = quantity * price + order_fee;
    std::cout << std::fixed << std::setprecision(2);                        
    std::cout << "Your order final price is " << order_price << "€";
    return 0;
}