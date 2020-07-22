#include <istream>
#include <algorithm>
#include <vector>
#include <string>
#include "utils.hpp"


int main(int argc, char** argv) {

    std::vector<std::string> Vs{
        "Ramy", "Raed", "Saif", "Ali",
        "Hossam", "Kazem", "Baraa", "Saleh"
    };

    std::vector<int> Vi{1, 4, 0, 5, 43, 32, 23, 53, 21};

    std::sort(std::begin(Vs), std::end(Vs),
    // std::sort(std::begin(Vi), std::end(Vi),
    // [](std::string const& w1, std::string const& w2) {
    [](auto w1, auto w2) {  // generic lambda in c++14
        return w1.length() < w2.length();
    }
    );
    printVector(Vs);
    return 0;
}