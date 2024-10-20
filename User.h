// // // #ifndef USER_H
// // // #define USER_H

// // // #include <string>
// // // #include <vector>

// // // using namespace std;
// // // class User {
// // // protected:
// // //     string name;
// // //     vector<int> dedicatedBricks; // IDs of bricks dedicated by the user

// // // public:
// // //     User(string name);
// // //     virtual ~User() = default;
    
// // //     string getName() const;
// // //     virtual void editBrick(int brickId, const string &newMessage) = 0; // Pure virtual
// // //     void addDedicatedBrick(int brickId);
// // //     const vector<int>& getDedicatedBricks() const;
// // // };

// // // #endif // USER_H


// // /*

// // #ifndef USER_H
// // #define USER_H

// // #include <string>
// // using namespace std;

// // class User {
// // protected:
// //     string name;
// // public:
// //     User(string name) : name(name) {}
// //     virtual void editBrick(int brickId, const string &newMessage) = 0; // Pure virtual function
// //     string getName() const { return name; }
// // };

// // #endif // USER_H

// // */










// // #ifndef USER_H
// // #define USER_H

// // #include <string>
// // using namespace std;

// // class User {
// // protected:
// //     string name;
// // public:
// //     User(string name) : name(name) {}
// //     virtual void editBrick(int brickId, const string &newMessage) = 0; // Pure virtual function
// //     string getName() const { return name; }
// // };

// // #endif // USER_H



// #ifndef USER_H
// #define USER_H

// #include <string>
// #include <vector>

// class User {
// protected:
//     std::string name;
//     std::vector<int> dedicatedBricks;

// public:
//     User(const std::string& name) : name(name) {}
//     virtual ~User() {}

//     std::string getName() const { return name; }

//     void addDedicatedBrick(int brickId) {
//         dedicatedBricks.push_back(brickId);
//     }

//     const std::vector<int>& getDedicatedBricks() const {
//         return dedicatedBricks;
//     }

//     virtual void editBrick(int brickId, const std::string& newMessage) = 0; // Pure virtual function
// };

// #endif // USER_H


#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string name;
    bool isAdmin;
    int dedicationCount;

public:
    User(const std::string& name, bool isAdmin = false);
    std::string getName() const;
    bool getIsAdmin() const;
    void incrementDedicationCount();
    int getDedicationCount() const;
};

#endif
