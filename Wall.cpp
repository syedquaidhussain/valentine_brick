// // #include "Wall.h"
// // #include <iostream>

// // Wall::Wall():maxBricks(10) {}


// // void Wall::flagBrick(int brickId) {
// //     if (brickId < 0 || brickId >= bricks.size()) {
// //         std::cerr << "Invalid brick ID: " << brickId << std::endl;
// //         return;
// //     }
// //     // Assuming Brick has a flag() method to set it as flagged
// //     bricks[brickId].flag(); // Modify the flag status of the brick
// // }


// // bool Wall::isFull() const {
// //     return bricks.size() >= maxBricks;
// // }

// // void Wall::addBrick(Brick* brick) {  // Accept pointer to Brick
// //     if (!isFull()) {
// //         bricks.push_back(brick);  // Store pointer in vector
// //     } else {
// //         std::cout << "Wall is full, cannot add more bricks." << std::endl;
// //     }
// // }

// // Brick* Wall::getBrick(int index) const {
// //     if (index < 0 || index >= bricks.size()) {
// //         std::cerr << "Index out of range: " << index << ". Number of bricks: " << bricks.size() << std::endl;
// //         return nullptr;  // Return nullptr if out of range
// //     }
// //     return bricks.at(index);  // Return pointer to Brick
// // }

// // int Wall::getTotalBricks() const {
// //     return bricks.size(); 
// // }


// // Wall.cpp
// #include "Wall.h"
// #include <iostream>

// Wall::Wall() : maxBricks(10) {} // Example initialization

// void Wall::addBrick(Brick* brick) {
//     if (bricks.size() < maxBricks) {
//         bricks.push_back(brick); // Store the pointer
//     } else {
//         std::cout << "Wall is full, cannot add more bricks." << std::endl;
//     }
// }

// Brick* Wall::getBrick(int index) const {
//     if (index < 0 || index >= bricks.size()) {
//         std::cerr << "Index out of range: " << index << ". Number of bricks: " << bricks.size() << std::endl;
//         return nullptr; // or throw an exception if you prefer
//     }
//     return bricks.at(index); // Returns a pointer to the Brick
// }

// int Wall::getTotalBricks() const {
//     return bricks.size(); 
// }

// void Wall::flagBrick(int brickId) {
//     if (brickId < 0 || brickId >= bricks.size()) {
//         std::cerr << "Invalid brick ID: " << brickId << std::endl;
//         return;
//     }
//     if (bricks[brickId]) { // Check if the pointer is not null
//         bricks[brickId]->flag(); // Call the flag method on the Brick object
//     }
// }



#include "Wall.h"
#include <iostream>

Wall::Wall() {
    bricks.resize(90); // Each wall can hold 90 bricks
}

bool Wall::isFull() const {
    for (const auto& brick : bricks) {
        if (brick.getMessage().empty()) {
            return false; // There's an empty brick
        }
    }
    return true; // All bricks are full
}

void Wall::dedicateBrick(int brickIndex, const std::string& message, const std::string& fromUser) {
    if (brickIndex >= 0 && brickIndex < bricks.size() && bricks[brickIndex].getMessage().empty()) {
        bricks[brickIndex].setOwner(fromUser);
        bricks[brickIndex].setMessage(message);
        std::cout << "Brick " << brickIndex << " dedicated by " << fromUser << std::endl;
    } else {
        std::cout << "Brick is already dedicated or invalid index!" << std::endl;
    }
}

void Wall::display() const {
    for (int i = 0; i < bricks.size(); ++i) {
        if (!bricks[i].getMessage().empty() && bricks[i].getIsVisible()) {
            std::cout << "Brick " << i << ": " << bricks[i].getMessage() << std::endl;
        }
    }
}

void Wall::flagBrick(int brickIndex) {
    if (brickIndex >= 0 && brickIndex < bricks.size()) {
        bricks[brickIndex].flag();
        if (!bricks[brickIndex].getIsVisible()) {
            std::cout << "Brick " << brickIndex << " is now invisible due to excessive flags." << std::endl;
        }
    }
}

