#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <utility>
//Create a simple color indicator for a design palette. Use the arithmetic mean of the three RGB channels as an exercise in averaging. Perceived brightness is outside the scope of this calculation.
int main() {
    std::string input;
    std::cout << "Write code of color RGB (3 numbers): ";
    std::getline(std::cin, input);

    std::istringstream data(input);
    int color_R, color_G, color_B;
    data >> color_R >> color_G >> color_B;

    while((color_R < 0 or color_R > 255) 
        or (color_G < 0 or color_G > 255) 
        or (color_B < 0 or color_B > 255)){
        std::getline(std::cin, input);
        std::istringstream data(input);
        data >> color_R >> color_G >> color_B;
    }

    std::vector<std::pair<std::string, std::array<int, 3>>> colors_data = {
        {"Black", {0, 0, 0}},
        {"Red", {255, 0, 0}},
        {"Orange", {255, 125, 0}},
        {"Yellow", {255, 255, 0}},
        {"Spring Green", {125, 255, 0}},
        {"Green", {0, 255, 0}},
        {"Turquoise", {0, 255, 125}},
        {"Cyan", {0, 255, 255}},
        {"Ocean", {0, 125, 255}},
        {"Blue", {0, 0, 255}},
        {"Violet", {125, 0, 255}},
        {"Magenta", {255, 0, 255}},
        {"Respberry", {255, 0, 125}},
        {"White", {255, 255, 255}}
    };

    std::string final_color = "Strange color";
    std::array<int, 3> your_colors = {color_R, color_G, color_B};

    for(int j = 0; j < 3; j++){
        if(your_colors[j] <= 125/2){
            your_colors[j] = 0;
        }
        else if(your_colors[j] <= 125){
            your_colors[j] = 125;    
        }
        else if(your_colors[j] <= (125+125/2)){
            your_colors[j] = 125;    
        }
        else if(your_colors[j] <= 255){
            your_colors[j] = 255;
        }
    }

    for(int i = 0; i < colors_data.size(); i++){
        if(colors_data[i].second == your_colors){
            final_color = colors_data[i].first;
        }
        
    }

    std::cout << "This color is " << final_color;
    return 0;
}