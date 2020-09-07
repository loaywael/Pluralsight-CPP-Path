#include <iostream>
#include <fstream>
#include <vector>


int main() {

    std::vector<int> Vi{};
    std::vector<std::string> words{};
    std::vector<std::string> lines{};
    std::ifstream intFile("data/nums.txt");
    std::ifstream strFile("data/strings.txt");

    int n{};
    while (intFile >> n) {
        Vi.push_back(n);
    }
    for (auto v: Vi) {
        std::cout << v << "\n";
    }
    std::cout << std::endl;

    std::string tempWord{};
    while(strFile >> tempWord) { // reasign word eachtime until return null
        words.push_back(tempWord);
    }
    for (const auto& word : words) {
        std::cout << word << "\t";
    }
    std::cout << std::endl;


    std::ifstream strFile1("data/strings.txt");
    std::string tempLine{};
    while(getline(strFile1, tempLine)) { // reasign line eachtime until return null
        lines.push_back(tempLine);
    }
    for (const auto& line : lines) {
        std::cout << line << "\t";
    }
    std::cout << std::endl;


    // buffer overflow guard
    std::cout << "Vi size: " << Vi.size() << " " << Vi[100] << std::endl;
    return 0;
}