#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>


inline bool EqualsNoCase(const std::string& s1, const std::string& s2) {
    // used with find_if to find non-case sensitive word matches
    return std::equal(std::begin(s1), std::end(s1), std::begin(s2), std::end(s2), 
        [](char ch1, char ch2){
            return std::tolower(ch1) == std::tolower(ch2);
        }
    );
}


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
    // std::cout << "Vi size: " << Vi.size() << " " << Vi[100] << std::endl;

    std::string search_val("Hello");
    auto pos = std::find_if(std::begin(words), std::end(words), 
        [&search_val](const auto& word){return EqualsNoCase(word, search_val);}
    );
    if (pos != end(words)) {
        std::cout << "found item!" << std::endl;
    }
    else {
        std::cout << "item wasn't found!\n";
    }
    return 0;
}