// // // #ifndef REGULARUSER_H
// // // #define REGULARUSER_H

// // // #include "User.h"

// // // class RegularUser : public User {
// // // public:
// // //     RegularUser(string name);
// // //     void editBrick(int brickId, const string &newMessage) override; // Implement the pure virtual function
// // // };

// // // #endif // REGULARUSER_H


// // /*

// // #ifndef REGULARUSER_H
// // #define REGULARUSER_H

// // #include "User.h"
// // #include <iostream>
// // using namespace std;

// // class RegularUser : public User {
// // public:
// //     RegularUser(string name) : User(name) {}

// //     void editBrick(int brickId, const string &newMessage) override {
// //         cout << "Regular user editing brick " << brickId << " with new message: " << newMessage << endl;
// //         // Implement the logic to edit the user's brick
// //     }
// // };

// // #endif // REGULARUSER_H

// // */





// // #ifndef REGULARUSER_H
// // #define REGULARUSER_H

// // #include "User.h"
// // #include <iostream>
// // using namespace std;

// // class RegularUser : public User {
// // public:
// //     RegularUser(string name) : User(name) {}

// //     void editBrick(int brickId, const string &newMessage) override {
// //         cout << "Regular user editing brick " << brickId << " with new message: " << newMessage << endl;
// //         // Implement the logic to edit the user's brick
// //     }
// // };

// // #endif // REGULARUSER_H




// #ifndef REGULARUSER_H
// #define REGULARUSER_H

// #include <string>
// #include "User.h"

// class RegularUser : public User {
// public:
//     RegularUser(std::string name); // Declaration
//     void editBrick(int brickId, const std::string &newMessage) override; // Declaration
// };

// #endif // REGULARUSER_H



#ifndef REGULAR_USER_H
#define REGULAR_USER_H

#include "User.h"

class RegularUser : public User {
public:
    RegularUser(const std::string& name) : User(name) {}

    void editBrick(int brickId, const std::string& newMessage) override {
        // Regular user logic to edit a brick (could be limited)
        std::cout << "Regular user " << name << " attempted to edit brick " << brickId << std::endl;
    }
};

#endif // REGULAR_USER_H
