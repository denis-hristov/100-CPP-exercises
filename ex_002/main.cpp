#include <iostream>
// Build a calculator for the time you spend on university, work, and your own project in a single day.
int main() {
    int h_university, h_work, h_project;
    std::cout<<"Hours for university today: ";
    std::cin>>h_university;
    std::cout<<"Hours for work today: ";
    std::cin>>h_work;
    std::cout<<"Hours for your project today: ";
    std::cin>>h_project;
    
    int h_sum_today = h_university + h_work + h_project;
    std::cout<<"\n\n=====================\n";
    std::cout<<"Hours of productivity: "<< h_sum_today<<" hours\n";
    std::cout<<"Hours of university: "<<h_university<<" hours\n";
    std::cout<<"Hours of work: "<<h_work<<" hours\n";
    std::cout<<"Hours of projects: "<<h_project<<" hours\n";
    std::cout<<"=====================\n";
    return 0;
}