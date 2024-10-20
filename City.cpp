// // #include "City.h"
// // #include <iostream>
// // using namespace std;

// // City::City(string name) : name(name) {}

// // void City::addWall() {
// //     walls.push_back(Wall());
// // }

// // Wall& City::getWall(int index) {
// //     return walls.at(index);
// // }

// // int City::getTotalWalls() const {
// //     return walls.size();
// // }


// #include "City.h"

// City::City(std::string name) : cityName(name) {}

// void City::addWall() {
//     // Implementation goes here
// }

// Wall& City::getWall(int wallId) {
//     return walls.at(wallId); // Ensure this is defined only once
// }

// int City::getTotalWalls() const {
//     return walls.size(); // Ensure this is defined only once
// }


#include "City.h"
#include <iostream>

City::City() {
    walls.emplace_back(); // Start with one wall
}

Wall& City::getWall(int index) {
    if (index >= 0 && index < walls.size()) {
        return walls[index];
    } else {
        throw std::out_of_range("Wall index out of range");
    }
}

void City::addWall() {
    if (walls.empty() || walls.back().isFull()) {
        walls.emplace_back();
        std::cout << "New wall created!" << std::endl;
    } else {
        std::cout << "The current wall is not yet full." << std::endl;
    }
}
