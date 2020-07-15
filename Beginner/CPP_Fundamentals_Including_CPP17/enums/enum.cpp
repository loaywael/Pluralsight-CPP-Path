#include <iostream>
#include <vector>
#include <chrono>



int main(int argc, char** argv) {  
    
    auto t1 = std::chrono::high_resolution_clock::now();
    std::cout << std::endl;
    for (int i{1}; i<argc; i++) {
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;

    enum  class RobotStatus: char{
        forward = 'f',
        backward = 'b',
        right = 'r',
        left = 'l'
    };
    RobotStatus status = RobotStatus::forward;
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = t2 - t1;
    std::cout << "robot status: " << static_cast<char>(status) << std::endl;
    std::cout << "time stamp: " << duration.count() << std::endl;
    return 0;
}