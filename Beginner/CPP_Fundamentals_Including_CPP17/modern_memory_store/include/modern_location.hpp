#include <iostream>
#include <vector>
#include <memory>


namespace modern {
    class Location {

    private:
        int _x, _y, _z;
        std::unique_ptr<std::vector<int>> _location;

    public:
        Location();
        Location(int x, int y, int z);
        explicit Location(const Location& obj);
        inline std::vector<int> getLocation() const {return *_location;}
        ~Location();

    };
}