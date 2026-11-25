#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
//Enter how long you played on three consecutive days and summarize your practice.
int main() {
    std::string line;
    
    std::cout << "Enter 3 songs duration: ";
    std::getline(std::cin, line);
    
    std::istringstream input(line);
    std::string song1, song2, song3;

    input >> song1 >> song2 >> song3;
    
    int songs_duration = 0;
    if(song1.find(':') == std::string::npos){
        songs_duration += stoi(song1);
    }
    else{
        songs_duration += stoi(song1.substr(0, song1.find(':'))) * 60;
        songs_duration += stoi(song1.substr(song1.find(':') +1));
    }
  
    if(song2.find(':') == std::string::npos){
        songs_duration += stoi(song2);
    }
    else{
        songs_duration += stoi(song2.substr(0, song2.find(':'))) * 60;
        songs_duration += stoi(song2.substr(song2.find(':') +1));
        }
   
    if(song3.find(':') == std::string::npos){
        songs_duration += stoi(song3);
    }
    else{
        songs_duration += stoi(song3.substr(0, song3.find(':'))) * 60;
        songs_duration += stoi(song3.substr(song3.find(':') +1));
    }

    std::string sound_sum;

    int v_hours, v_min, v_sec;
    if(songs_duration > 0){
        v_hours = (songs_duration/60)/60;
        v_min = (songs_duration/60)%60;
        v_sec = songs_duration%60;
    }
    else {
        v_hours = v_min = v_sec = 0;

    }

    std::ostringstream output;
    output << v_hours << ':' << std::setfill('0') << std::setw(2) << v_min << ':' << std::setw(2) << v_sec;
    sound_sum = output.str();

    std::cout << "\nSongs seconds: " << sound_sum;
    return 0;
}