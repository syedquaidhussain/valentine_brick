// // // #ifndef SYSTEM_H
// // // #define SYSTEM_H

// // // #include "City.h"
// // // #include "Admin.h"
// // // #include "User.h"
// // // #include <map>

// // // class System {
// // // public:
// // //     map<int, User*> users;
// // //     City city;
// // //  City& getCity(); // Add this line
// // // public:
// // //     System();
// // //     void createUser(string name, bool isAdmin = false);
// // //     void dedicateBrick(int userId, int wallId, string dedication);
// // //     void flagBrick(int wallId, int brickId);
// // //     void displayWall(int wallId);
// // //     void hottestUser() const;
// // //     City& System::getCity() {
// // //     return city;
// // // }
// // // };

// // // #endif // SYSTEM_H

// // /*

// // #ifndef SYSTEM_H
// // #define SYSTEM_H

// // #include <map>
// // #include "City.h"
// // #include "Admin.h"
// // #include "RegularUser.h"
// // using namespace std;

// // class System {
// // private:
// //     map<int, User*> users;
// // public:
// //     City city;

// //     System();
// //     void createUser(string name, bool isAdmin = false);
// //     void dedicateBrick(int userId, int wallId, string dedication);
// //     void flagBrick(int wallId, int brickId);
// //     void displayWall(int wallId);
// //     void hottestUser() const;
// //     City& getCity(); // Declare the getter
// // };

// // #endif // SYSTEM_H

// // */



// // #ifndef SYSTEM_H
// // #define SYSTEM_H

// // #include <map>
// // #include <iostream>
// // #include "City.h"
// // #include "Admin.h"
// // #include "RegularUser.h"
// // using namespace std;

// // class System {
// // private:
// //     map<int, User*> users;
// //     map<string, int> userDedications; // Track dedications for each user
// // public:
// //     City city;

// //     System();
// //     void createUser(string name, bool isAdmin = false);
// //     void dedicateBrick(int userId, int wallId, string dedication);
// //     void flagBrick(int wallId, int brickId);
// //     void displayWall(int wallId);
// //     void hottestUser() const;
// //     City& getCity(); // Declare the getter
// // };

// // #endif // SYSTEM_H




// #ifndef SYSTEM_H
// #define SYSTEM_H

// #include <map>
// #include "City.h"
// #include "Admin.h"
// #include "RegularUser.h"

// class System {
// private:
//     City city;
//     std::map<int, User*> users; // Store users by ID
//     std::map<std::string, int> userDedications; // Count dedications per user

// public:
//     System();

//     void createUser(const std::string& name, bool isAdmin);
//     void dedicateBrick(int userId, int wallId, const std::string& dedication);
//     void flagBrick(int wallId, int brickId);
//     void displayWall(int wallId);
//     void hottestUser() const;
//     City& getCity();
// };

// #endif // SYSTEM_H



#ifndef SYSTEM_H
#define SYSTEM_H

#include "City.h"
#include "User.h"
#include <vector>

class System {
private:
    City city;
    std::vector<User> users;

public:
    void createUser(const std::string& name, bool isAdmin = false);
    void dedicateBrick(int wallIndex, int brickIndex, const std::string& message, const std::string& fromUser);
    void displayWall(int wallIndex);
    void flagBrick(int wallIndex, int brickIndex);
    User* findHottestUser();
    User* findUserWithNoDedication();
    City& getCity();
};

#endif
