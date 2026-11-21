#include <iostream>
// Calculate how much remains from a design project after paying for software and other services. Use whole euros for this exercise only.
int main() {
    int budget, software_ex, design_ex, other_ex;
    std::cout << "What's your budget: ";
    std::cin >> budget;
    std::cout << "What's the softuare expenses: ";
    std::cin >> software_ex;
    std::cout << "What's the design expenses: ";
    std::cin >> design_ex;
    std::cout << "What's the other expenses: ";
    std::cin >> other_ex;

    int revenue = budget - (software_ex + design_ex + other_ex);
    if(revenue >= 0){
        std::cout << "The budget is enough!\nYou're left with "
        << revenue << "€";
    }
    else{
        std::cout << "The budget isn't enough!\nYou need "
        << revenue << "€ more!";
    }
    return 0;
}