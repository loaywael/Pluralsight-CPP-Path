#include <iostream>
#include <vector>


namespace old {
    class Location {

    private:
        int _x, _y, _z;
        std::vector<int>* _location;

    public:
        Location(): _x(0), _y(0), _z(0){_location = new std::vector<int>({_x, _y, _z});}
        Location(int x, int y, int z);
        explicit Location(const Location& obj);
        inline std::vector<int> getLocation() const {return *_location;}
        ~Location();

    };
}