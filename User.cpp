// // #include "User.h"

// // User::User(std::string name) : name(name) {}

// // std::string User::getName() const {
// //     return name;
// // }

// // void User::addDedicatedBrick(int brickId) {
// //     dedicatedBricks.push_back(brickId);
// // }

// // const std::vector<int>& User::getDedicatedBricks() const {
// //     return dedicatedBricks;
// // }



// #include "User.h"
// #include <iostream>
// using namespace std;

// User::User(string name) : name(name) {}

// string User::getName() const {
//     return name;
// }

// void User::addDedicatedBrick(int brickId) {
//     dedicatedBricks.push_back(brickId);
// }

// const vector<int>& User::getDedicatedBricks() const {
//     return dedicatedBricks;
// }




#include "User.h"

User::User(const std::string& name, bool isAdmin) : name(name), isAdmin(isAdmin), dedicationCount(0) {}

std::string User::getName() const {
    return name;
}

bool User::getIsAdmin() const {
    return isAdmin;
}

void User::incrementDedicationCount() {
    dedicationCount++;
}

int User::getDedicationCount() const {
    return dedicationCount;
}
