// // #include <vector>
// // #include "Brick.h"

// // class Wall {
// // public:
// //     Wall();
// //     void addBrick(Brick* brick);  // Accept a pointer
// //     Brick* getBrick(int index) const;  // Return a pointer
// //     int getTotalBricks() const;
// //     bool isFull() const;
// //     void flagBrick(int brickId);  // Assume this is defined somewhere

// // private:
// //     std::vector<Brick*> bricks;  // Store pointers to Brick objects
// //     const int maxBricks ;  // Example limit
// // };



// #ifndef WALL_H
// #define WALL_H

// #include <vector>
// #include <iostream>
// #include "Brick.h"

// class Wall {
// private:
//     std::vector<Brick*> bricks; // Store pointers to Brick objects
//     const int maxBricks = 10; // Example maximum

// public:
//     Wall() {}

//     bool isFull() const {
//         return bricks.size() >= maxBricks;
//     }

//     void addBrick(Brick* brick) {
//         if (!isFull()) {
//             bricks.push_back(brick); // Store the pointer
//         } else {
//             std::cout << "Wall is full, cannot add more bricks." << std::endl;
//         }
//     }

//     Brick* getBrick(int index) const {
//         if (index < 0 || index >= bricks.size()) {
//             std::cerr << "Index out of range: " << index << ". Number of bricks: " << bricks.size() << std::endl;
//             return nullptr; // Handle out of range
//         }
//         return bricks.at(index);
//     }

//     int getTotalBricks() const {
//         return bricks.size();
//     }

//     void flagBrick(int brickId) {
//         for (auto& brick : bricks) {
//             if (brick->getId() == brickId) {
//                 brick->flag();
//                 return;
//             }
//         }
//         std::cout << "Brick with ID " << brickId << " not found." << std::endl;
//     }
// };

// #endif // WALL_H




#ifndef WALL_H
#define WALL_H

#include "Brick.h"
#include <vector>

class Wall {
private:
    std::vector<Brick> bricks;

public:
    Wall();
    bool isFull() const;
    void dedicateBrick(int brickIndex, const std::string& message, const std::string& fromUser);
    void display() const;
    void flagBrick(int brickIndex);
};

#endif
