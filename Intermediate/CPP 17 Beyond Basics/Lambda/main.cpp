#include <iostream>
#include <algorithm>
#include <string>
#include <memory>
#include <vector>


struct Point {
    int x, y;
    Point(): x{0}, y{0} {}
};

int main() {
    int x{3}, y{7};
    std::vector<int> Vi({2, 3, 4, -1, 1});
    std::string msg = "elements between ";
    msg += std::to_string(x) + " and " + std::to_string(y) + " inclusive: ";
    std::for_each(begin(Vi), end(Vi), 
        [x, y, &msg] (int n) { // mutable removes the error of changing params given by value
            if (n >= x && n <= y) {
                msg += " " + std::to_string(n);
            }
        }
    );
    std::cout << msg << std::endl;

    auto pPoint = std::make_unique<Point>();
    std::for_each(begin(Vi), end(Vi), 
        // [=, &msg, &pPoint] (int n) {    // when pPoint goes out of scoop lambda still refere to it
        // -> void : return type help the compiler when it can't deduce it 
        [=, &msg, p = std::move(pPoint)] (int n) -> void {    // a better statment prevents dangling reference
            if (n >= x && n <= y) {
                msg += " (" + std::to_string(p->x) + ", " + std::to_string(p->y) + ") ";
            }
        }
    );
    std::cout << msg;
}