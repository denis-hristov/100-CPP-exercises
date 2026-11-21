#include <iostream>
//  You are preparing a YouTube video and know its length in seconds. Present the duration in a format suitable for an editing plan.
int main() {
    int v_sum_sec;
    std::cout << "Enter the video seconds: ";
    std::cin>>v_sum_sec;
    int v_hours, v_min, v_sec;
    if(v_sum_sec > 0){
        v_hours = (v_sum_sec/60)/60;
        v_min = (v_sum_sec/60)%60;
        v_sec = v_sum_sec%60;
    }
    else {
        v_hours = v_min = v_sec = 0;

    }

    if(v_min > 9 && v_sec > 9){
        std::cout<<"Video time: "<<v_hours<<':'<<v_min<<':'<<v_sec;
    }
    else if(v_min < 9 && v_sec > 9){
        std::cout<<"Video time: "<<v_hours<<":0"<<v_min<<':'<<v_sec;
    }
    else if(v_min > 9 && v_sec < 9){
        std::cout<<"Video time: "<<v_hours<<':'<<v_min<<":0"<<v_sec;
    }
    else if(v_min < 9 && v_sec < 9){
        std::cout<<"Video time: "<<v_hours<<":0"<<v_min<<":0"<<v_sec;
    }
    return 0;
}