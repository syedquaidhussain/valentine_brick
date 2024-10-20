// // // #include "System.h"
// // // #include <iostream>
// // // #include <map>
// // // #include <string>

// // // using namespace std;

// // // System::System() : city("Sample City") {}

// // // void System::createUser(string name, bool isAdmin) {
// // //     static int userId = 0;  // User ID management
// // //     if (isAdmin) {
// // //         users[userId] = new Admin(name);  // Creating Admin object
// // //     } else {
// // //         users[userId] = new RegularUser(name);  // Creating RegularUser object
// // //     }
// // //     userId++;
// // // }

// // // void System::dedicateBrick(int userId, int wallId, string dedication) {
// // //     if (users.find(userId) != users.end()) {
// // //         Brick* newBrick = new Brick(wallId * 100 + city.getWall(wallId).getTotalBricks(), users[userId]->getName(), dedication);
// // //         city.getWall(wallId).addBrick(newBrick);  // Assuming addBrick accepts a pointer
// // //         userDedications[users[userId]->getName()]++;  // Track the number of dedications for the user
// // //     } else {
// // //         cout << "User ID not found!" << endl;
// // //     }
// // // }

// // // void System::flagBrick(int wallId, int brickId) {
// // //     Wall& wall = city.getWall(wallId);
// // //     Brick* brick = wall.getBrick(brickId);  // Assuming getBrick returns a pointer
// // //     if (brick) {
// // //         brick->flag();  // Flagging the brick
// // //     } else {
// // //         cout << "Brick not found!" << endl;
// // //     }
// // // }

// // // void System::displayWall(int wallId) {
// // //     cout << "Displaying Wall " << wallId << ":\n";
// // //     Wall& wall = city.getWall(wallId);

// // //     for (int i = 0; i < wall.getTotalBricks(); ++i) {
// // //         Brick* brick = wall.getBrick(i);  // Assuming getBrick returns a pointer
// // //         if (brick) {  // Check if the brick is valid
// // //             cout << "Brick ID: " << brick->getId() 
// // //                  << " by " << brick->getOwner() 
// // //                  << ": " << brick->getMessage() 
// // //                  << (brick->isFlagged() ? " [Flagged]" : "") << endl;
// // //         } else {
// // //             cout << "No brick found at index " << i << endl;
// // //         }
// // //     }
// // // }

// // // void System::hottestUser() const {
// // //     string hottestUser;
// // //     int maxDedications = 0;

// // //     for (const auto& entry : userDedications) {
// // //         if (entry.second > maxDedications) {
// // //             maxDedications = entry.second;
// // //             hottestUser = entry.first;
// // //         }
// // //     }

// // //     cout << "Hottest User: " << hottestUser << " with " << maxDedications << " dedications." << endl;
// // // }

// // // City& System::getCity() {
// // //     return city;
// // // }






// // #include "System.h"
// // #include <iostream>
// // using namespace std;

// // System::System() : city("Sample City") {}

// // void System::createUser(string name, bool isAdmin) {
// //     static int userId = 0;
// //     if (isAdmin) {
// //         users[userId] = new Admin(name); // Creating Admin object
// //     } else {
// //         users[userId] = new RegularUser(name); // Creating RegularUser object
// //     }
// //     userId++;
// // }

// // void System::dedicateBrick(int userId, int wallId, string dedication) {
// //     // Create a new Brick object using the `new` operator
// //     Brick* newBrick = new Brick(wallId * 100 + city.getWall(wallId).getTotalBricks(), users[userId]->getName(), dedication);
// //     city.getWall(wallId).addBrick(newBrick); // Pass the pointer to addBrick

// //     // Track the number of dedications for the user
// //     userDedications[users[userId]->getName()]++;
// // }

// // void System::flagBrick(int wallId, int brickId) {
// //     Wall& wall = city.getWall(wallId);
// //     wall.flagBrick(brickId);
// // }

// // void System::displayWall(int wallId) {
// //     Wall& wall = city.getWall(wallId);
// //     cout << "Displaying Wall " << wallId << ":\n";

// //     for (int i = 0; i < wall.getTotalBricks(); ++i) {
// //         Brick* brick = wall.getBrick(i); // Get the brick pointer
// //         if (brick) { // Check if brick is not nullptr
// //             cout << "Brick ID: " << brick->getId() << std::endl;
// //             cout << (brick->isFlagged() ? " [Flagged]" : "") << std::endl;
// //         } else {
// //             std::cout << "No brick found at index " << i << std::endl;
// //         }
// //     }
// // }

// // void System::hottestUser() const {
// //     string hottestUser;
// //     int maxDedications = 0;

// //     for (const auto& entry : userDedications) {
// //         if (entry.second > maxDedications) {
// //             maxDedications = entry.second;
// //             hottestUser = entry.first;
// //         }
// //     }

// //     cout << "Hottest User: " << hottestUser << " with " << maxDedications << " dedications." << endl;
// // }

// // City& System::getCity() {
// //     return city;
// // }



// #include "System.h"
// #include <iostream>

// System::System() : city("Sample City") {}

// void System::createUser(const std::string& name, bool isAdmin) {
//     static int userId = 0;
//     if (isAdmin) {
//         users[userId] = new Admin(name); // Creating Admin object
//     } else {
//         users[userId] = new RegularUser(name); // Creating RegularUser object
//     }
//     userId++;
// }

// void System::dedicateBrick(int userId, int wallId, const std::string& dedication) {
//     Brick* newBrick = new Brick(wallId * 100 + city.getWall(wallId).getTotalBricks(), users[userId]->getName(), dedication);
//     city.getWall(wallId).addBrick(newBrick);
//     users[userId]->addDedicatedBrick(newBrick->getId());
// }

// void System::flagBrick(int wallId, int brickId) {
//     city.getWall(wallId).flagBrick(brickId);
// }

// void System::displayWall(int wallId) {
//     Wall& wall = city.getWall(wallId);
//     std::cout << "Displaying Wall " << wallId << ":\n";
//     for (int i = 0; i < wall.getTotalBricks(); ++i) {
//         Brick* brick = wall.getBrick(i);
//         if (brick) {
//             std::cout << "Brick ID: " << brick->getId() << " by " << brick->getOwner() 
//                       << ": " << brick->getMessage() 
//                       << (brick->isFlagged() ? " [Flagged]" : "") << std::endl;
//         }
//     }
// }

// void System::hottestUser() const {
//     std::string hottestUser;
//     int maxDedications = 0;

//     for (const auto& entry : userDedications) {
//         if (entry.second > maxDedications) {
//             maxDedications = entry.second;
//             hottestUser = entry.first;
//         }
//     }

//     std::cout << "Hottest User: " << hottestUser << " with " << maxDedications << " dedications." << std::endl;
// }

// City& System::getCity() {
//     return city;
// }



#include "System.h"
#include <iostream>

void System::createUser(const std::string& name, bool isAdmin) {
    users.emplace_back(name, isAdmin);
}

void System::dedicateBrick(int wallIndex, int brickIndex, const std::string& message, const std::string& fromUser) {
    city.getWall(wallIndex).dedicateBrick(brickIndex, message, fromUser);
    for (auto& user : users) {
        if (user.getName() == fromUser) {
            user.incrementDedicationCount();
            break;
        }
    }
}

void System::displayWall(int wallIndex) {
    city.getWall(wallIndex).display();
}

void System::flagBrick(int wallIndex, int brickIndex) {
    city.getWall(wallIndex).flagBrick(brickIndex);
}

User* System::findHottestUser() {
    User* hottest = nullptr;
    int maxDedications = 0;
    for (auto& user : users) {
        if (user.getDedicationCount() > maxDedications) {
            hottest = &user;
            maxDedications = user.getDedicationCount();
        }
    }
    return hottest;
}

User* System::findUserWithNoDedication() {
    for (auto& user : users) {
        if (user.getDedicationCount() == 0) {
            return &user;
        }
    }
    return nullptr;
}

City& System::getCity() {
    return city;
}
