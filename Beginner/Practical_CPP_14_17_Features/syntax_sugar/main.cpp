#include <iostream>
#include "utils.hpp"
#include <memory>
#include <vector>
#include <chrono>
#include <string>
#include <tuple>


[[deprecated("AreaOfSquare is deprecated please use the template version")]]
auto AreaOfSquare(double edge) {
    return edge*edge;
}



// template variables
template <typename T>   // will be reduced to lower precision float
constexpr T pi = T(3.141592653589793238462643383);

template <typename T>   // will be reduced to lower precision float
constexpr T maxVal = T(1000);

template <>
double maxVal<double> = 1000;

template <>
constexpr char maxVal<char> = 'Z';


// all conversion done @compile time with no runtime overhead
using namespace std::chrono_literals;
using namespace std::string_literals;
// using std::literals::chrono_literals::operator ""ms;


int main(int argc, char** argv) {
    print("hello from Main");
    // C++ STD-14 Literals
    auto ss = "any";                    // ss is a char* c-style string
    auto st = "C++ string"s;            // st became C++ string
    float x = 10.003f;                  // (f) cast the decimal to float
    auto t = 10s;                       // standard defined chrono leterals works with numbers only {h, min, s, ms, us, ns}
    auto t0 = 120ms;                     // automatically used for time conversion
    long y = 10'000'000;                // (') seperates the numbers without affecting code
    auto byte = 0b00001111;             // (0b) allows typing binary number
    auto word = 0b00001111'00001111;    // combining (0b) + (') to increase readability
    auto var = AreaOfSquare(10);        // automatic return deduction but not supported in decleration
    auto res = Febonacii(10);           // requested to be evaluated @compile time not @runtime increasing runtime speed
    std::cout << "febo 10: " << res << std::endl;
    // static_assert(res == 55, "Unexpected number");
    // compile time checking --> static_assert
    static_assert(Febonacii(10) == 55, "Unexpected number");
    std::cout << pi<int> << "\t";   // prints pi as int
    std::cout << pi<double> << "\t";   // prints pi as double but truncated value by the template
    std::cout << maxVal<float> << typeid(maxVal<float>).name() << "\t";
    std::cout << maxVal<char> << "\t";  // print maxVal as char
    std::cout << std::endl;

    auto vector_ptr = std::make_unique<std::vector<int>>(100);
    std::cout << "vector length: " << vector_ptr->size() << std::endl;
    int i;                               // uninitialized value
    std::cout << i  << std::endl;
    int j{};                             // initializes all its values with zeros
    std::cout << j  << std::endl;


    std::cout << t.count() << "\t" << typeid(t).name() << std::endl;
    std::cout << ss << "\t" << typeid(ss).name() << std::endl;
    std::cout << st << "\t" << typeid(st).name() << std::endl;
    
    auto t1{10s}, t2{50s};
    auto t3{5min};
    auto total = t1+t2+t3;
    std::cout << "t1: " << t1.count() << "s" << std::endl;
    std::cout << "t2: " << t2.count() << "s" << std::endl;
    std::cout << "t3: " << t3.count() << "s" << std::endl;
    std::cout << "total time: " << total.count() << "s" << std::endl;


    std::pair<std::string, int> pr1("Neo", 21);
    std::tuple<std::string, int, double> tp1("Jin", 23, 5000.0);
    auto val = std::get<std::string>(tp1); // or std::get<0>(tp1); in c++11
    std::cout << val << std::endl;
    return 0;

}
