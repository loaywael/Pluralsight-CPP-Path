#include <iostream>
#include <algorithm>
#include <chrono>


template <typename Func>
long long TimeFunc(Func f) {
    auto t1 = std::chrono::steady_clock::now();
    f();
    auto t2 = std::chrono::steady_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>((t2 -t1)).count();
}


int main() {
    int r = (int)rand();
    int ss = 3;//r % 100;
    std::cout << ss << "\n";
    std::string s("anything temporary ");
    // back_inserter: returns iterator of last index 
    // generate_n: generates/injects n nums starting from a given index/iterator
    std::generate_n(std::back_inserter(s), ss, [ss] () {return (char)('!' + ss / 2);});
    std::for_each(begin(s), end(s), [&s](auto const& elem){std::cout << elem << " ";});
    return 0;
}