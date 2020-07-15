#include <iostream>
#include <vector>



int main(int argc, char** argv) {  
    
    std::cout << std::endl;
    for (int i{1}; i<argc; i++) {
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;

    enum  class RobotStatus{
        forward = 'f',
        backward = 'b',
        right = 'r',
        left = 'l'
    };
    RobotStatus status = RobotStatus::forward;
    std::cout << "robot status: " << static_cast<char>(status) << std::endl;
    return 0;
}