// // // // #ifndef CITY_H
// // // // #define CITY_H

// // // // #include <string>
// // // // #include <vector>
// // // // #include "Wall.h"

// // // // class City {
// // // // private:
// // // //     string name;
// // // //     vector<Wall> walls;

// // // // public:
// // // //     City(string name);
// // // //     void addWall();
// // // //     Wall& getWall(int index);
// // // //     int getTotalWalls() const;
// // // // };

// // // // #endif // CITY_H



// // // /*

// // // #ifndef CITY_H
// // // #define CITY_H

// // // #include <vector>
// // // #include <string>
// // // #include "Wall.h"
// // // using namespace std;

// // // class City {
// // // public:
// // //     City(string name) : cityName(name) {}

// // //     void addWall() {
// // //         walls.push_back(Wall());
// // //     }

// // //     Wall& getWall(int wallId) {
// // //         return walls[wallId];
// // //     }

// // // private:
// // //     string cityName;
// // //     vector<Wall> walls;
// // // };

// // // #endif // CITY_H

// // // */





// // // #ifndef CITY_H
// // // #define CITY_H

// // // #include <vector>
// // // #include <string>
// // // #include "Wall.h"
// // // using namespace std;

// // // class City {
// // // public:
// // //     City(string name) : cityName(name) {}

// // //     void addWall() {
// // //         walls.push_back(Wall());
// // //     }

// // //     Wall& getWall(int wallId) {
// // //         return walls[wallId];
// // //     }

// // //     int getTotalWalls() const {
// // //         return walls.size();
// // //     }

// // // private:
// // //     string cityName;
// // //     vector<Wall> walls;
// // // };

// // // #endif // CITY_H










// // #ifndef CITY_H
// // #define CITY_H

// // #include <string>
// // #include <vector>
// // #include "Wall.h"

// // class City {
// // public:
// //     City(std::string name); // Declaration
// //     void addWall(); // Declaration
// //     Wall& getWall(int wallId); // Declaration
// //     int getTotalWalls() const; // Declaration

// // private:
// //     std::string cityName;
// //     std::vector<Wall> walls; // Declaration
// // };

// // #endif // CITY_H





// #ifndef CITY_H
// #define CITY_H

// #include <vector>
// #include "Wall.h"

// class City {
// private:
//     std::string name;
//     std::vector<Wall> walls;

// public:
//     City(const std::string& name) : name(name) {
//         walls.emplace_back(); // Create one wall for simplicity
//     }

//     Wall& getWall(int index) {
//         return walls.at(index); // You can add boundary checks if necessary
//     }
// };

// #endif // CITY_H



#ifndef CITY_H
#define CITY_H

#include "Wall.h"
#include <vector>

class City {
private:
    std::vector<Wall> walls;

public:
    City();
    Wall& getWall(int index);
    void addWall();
};

#endif
