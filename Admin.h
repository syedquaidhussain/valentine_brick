// // // // #ifndef ADMIN_H
// // // // #define ADMIN_H

// // // // #include "User.h"

// // // // class Admin : public User {
// // // // public:
// // // //     Admin(std::string name);
// // // //     void editBrick(int brickId, const std::string &newMessage) override; // Override base method
// // // // };

// // // // #endif // ADMIN_H



// // // #ifndef ADMIN_H
// // // #define ADMIN_H

// // // #include "User.h"

// // // class Admin : public User {
// // // public:
// // //     Admin(string name);
// // //     void editBrick(int brickId, const string &newMessage) override; // Override base method
// // // };

// // // #endif // ADMIN_H



// // /*

// // #ifndef ADMIN_H
// // #define ADMIN_H

// // #include "User.h"
// // #include <iostream>
// // using namespace std;

// // class Admin : public User {
// // public:
// //     Admin(string name) : User(name) {}

// //     void editBrick(int brickId, const string &newMessage) override {
// //         cout << "Admin editing brick " << brickId << " with new message: " << newMessage << endl;
// //         // Code to edit brick
// //     }
// // };

// // #endif // ADMIN_H

// // */






// // #ifndef ADMIN_H
// // #define ADMIN_H

// // #include "User.h"
// // #include <iostream>
// // #include "Brick.h"
// // using namespace std;

// // class Admin : public User {
// // public:
// //     Admin(string name) : User(name) {}

// //     void editBrick(int brickId, const string &newMessage) override {
// //         cout << "Admin editing brick " << brickId << " with new message: " << newMessage << endl;
// //         // Code to edit brick
// //     }
// // };

// // #endif // ADMIN_H

// #ifndef ADMIN_H
// #define ADMIN_H

// #include <string>
// #include "User.h" // Assuming User is a base class

// class Admin : public User {
// public:
//     Admin(std::string name); // Declaration
//     void editBrick(int brickId, const std::string &newMessage) override; // Declaration
// };

// #endif // ADMIN_H



#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User {
public:
    Admin(const std::string& name) : User(name) {}

    void editBrick(int brickId, const std::string& newMessage) override {
        // Admin logic to edit a brick
        std::cout << "Admin " << name << " edited brick " << brickId << " with new message: " << newMessage << std::endl;
    }
};

#endif // ADMIN_H
