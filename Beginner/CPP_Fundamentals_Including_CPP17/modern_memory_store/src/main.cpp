#include <iostream>
#include "../lib/include/Location.hpp"
#include "../include/modern_location.hpp"
#include <memory>


struct Point {
    int x, y;
    static int count;
    Point():x(0), y(0){
        count++;
        std::cout << ">>> constructed point" << count << std::endl;
    }
    ~Point() {std::cout << ">>> destroyed point" << count << std::endl;}
};


int Point::count = 0;
int main(int argc, char** argv) {

    // ----------------------------------------
    //   ----- Legacy Memory Allocation -----
    // ----------------------------------------
    std::cout << "Legacy Memory Allocation" << std::endl;
    std::cout << "------------------------" << std::endl;
    old::Location loc1;
    std::vector<int> pt1 = loc1.getLocation();
    std::cout << "x: " << pt1[0] << "\t"
              << "x: " << pt1[1] << "\t"
              << "x: " << pt1[2] << std::endl;


    old::Location loc2(5, 15, 45);
    std::vector<int> pt2 = loc2.getLocation();
    std::cout << "x: " << pt2[0] << "\t"
              << "x: " << pt2[1] << "\t"
              << "x: " << pt2[2] << std::endl;

    std::cout << std::endl << std::endl;
    // ----------------------------------------
    //   ----- Modern Memory Allocation -----
    // ----------------------------------------
    std::cout << "Modern Memory Allocation" << std::endl;
    std::cout << "------------------------" << std::endl;
    modern::Location loc3;
    std::vector<int> pt3 = loc3.getLocation();
    std::cout << "x: " << pt3[0] << "\t"
              << "x: " << pt3[1] << "\t"
              << "x: " << pt3[2] << std::endl;


    modern::Location loc4(5, 10, 15);
    std::vector<int> pt4 = loc4.getLocation();
    std::cout << "x: " << pt4[0] << "\t"
              << "x: " << pt4[1] << "\t"
              << "x: " << pt4[2] << std::endl;

    std::cout << std::endl << std::endl;

    // Unique pointer example
    // ----------------------
    {
        std::cout << "entered unique-scope" << std::endl;
        std::unique_ptr<Point> uniqPtr = std::make_unique<Point>();
        auto alive = uniqPtr? "true":"false";
        std::cout << "is uniqPtr alive: " << alive << std::endl;
        std::cout << "exited unique-scope" << std::endl;
    }
    std::cout << std::endl << std::endl;

    // Unique pointer example
    // ----------------------
    std::shared_ptr<Point> sharedPtr = std::make_shared<Point>();
    {
        std::cout << "entered weakPtr scope" << std::endl;
        std::weak_ptr<Point> weakPtr = sharedPtr;
        auto alive = weakPtr.expired()? "false":"true";
        std::cout << "is weakPtr alive: " << alive << std::endl;
        std::cout << "exited weakPtr scope" << std::endl;
    }
    auto alive = sharedPtr? "true":"false";
    std::cout << "is sharedPtr alive: " << alive << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "finished and exited with  0" << std::endl;
    return 0;
}