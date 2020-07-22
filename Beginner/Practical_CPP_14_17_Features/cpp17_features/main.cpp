#include <iostream>
#include "utils.hpp"
#include <algorithm>
#include <type_traits>
#include <map>



// ----------------------
// Constexpr in templates
// ---------------------- 
template <typename T>
auto length(T const& value) {
    // due to constexpr the compiler only compile consider the if
    // ignoring other parts at compile time so it will not cause error
    // i.e the if always run first neglecting other cases unless it fails
    if constexpr (std::is_integral<T>::value) {
        // in case it is a int
        return value;
    }
    else {  // in case it is a string
        // in regular if @runtime this throws error
        // the reason is it when value is int can't have length method
        return value.length();
    }
}



// namespace Engine{
//     namespace Person{
//         namespace attack{

//             int level{11};
//         }
//     }
// }


// ------------------------------------
// New Nested namespaces style in C++17
// ------------------------------------ 


namespace Engine::Person::attack{
    int level{13};
}

namespace Engine::Person::attack{
    int range{3};
}

int main(int argc, char** argv) {
    using Engine::Person::attack::level;
    using namespace std::string_literals;
    using Engine::Person::attack::range;

    std::cout << "attack level: " << level << std::endl;
    std::cout << "attack range: " << range << std::endl;

    // ---------------------------------
    // variable decleration in if/switch
    // ---------------------------------

    std::string names_list = "Neo Jin Baraa Kaakaa Khabab"s;
    std::string target_name = "Baraa";
    // auto it = names_list.find("dadd", 0, 3);

    // if (it != std::string::npos){
    if (auto idx = names_list.find(target_name, 0); idx != std::string::npos) {
            std::cout << "found " << names_list.substr(idx, target_name.length()) 
                      << " at index: " << idx << std::endl;
    }
    else {  // idx is availble also to this scope
    std::cout << "Word not found, return index: " << idx << std::endl;
    }

    // ------------------------------------
    // if constexpr evaluated @compile time
    // ------------------------------------

    if constexpr (auto const i = 0; i > 0) {
        std::cout << "i is bigger than 0\n";
    }
    else {
        std::cout << "i is less than or equal 0\n";
    }
    

    int n{32};
    std::string s{"Connor"};
    std::cout << "n: " << n << "\t" << length<int>(n) << "\n";
    std::cout << "s: " << s << "\t" << length<std::string>(s) << "\n";

    // --------------------
    //  Structured Bindings
    // --------------------
    std::map<std::string, int> class2int {
        {"Dog", 0},
        {"Cat", 1},
        {"Bird", 2}
    };

    // since the insert method returns a pair
    // first element: iterator to the position of the item 
    // second element: boolean wheather contained in map or no
    auto result = class2int.insert({"None", -1});
    // to retrieve the data in C++11/14 we use pair methods
    auto v1 = result.first;
    auto v2 = result.second;
    // alternativly in C++17
    auto [v_1, v_2] = result;
    
    // std::cout << "position: " << v1 << "\t" << v_1 << "\n";
    auto it = class2int.find("Bird");
    std::cout << "position: " << it->first << "\t" << "id: " << it->second << "\n";
    std::cout << "success: " << v2 << "\t" << v_2 << "\n";

    // best for iterating inside a map
    for (auto const& [class_name, idx] : class2int) {
        std::cout << "class name: " << class_name
                  << "class id: "   << idx << "\n";
    }

    return 0;
}