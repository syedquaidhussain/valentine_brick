// // // // // #ifndef BRICK_H
// // // // // #define BRICK_H

// // // // // #include <string>
// // // // // #include <vector>

// // // // // class Brick {
// // // // // private:
// // // // //     int id;
// // // // //     string owner;
// // // // //     string message;
// // // // //     int flaggedCount;
// // // // //     vector<string> comments;
// // // // //     bool visible;

// // // // // public:
// // // // //     Brick(int id, string owner, string message);
// // // // //     void addComment(const string &comment);
// // // // //     void flag();
// // // // //     bool isVisible() const;
// // // // //     string getOwner() const;
// // // // //     string getMessage() const;
// // // // //     int getId() const; // Getter for id
// // // // //     void setMessage(const string &newMessage); // Setter for message
// // // // // };

// // // // // #endif // BRICK_H



// // // // /*

// // // // #ifndef BRICK_H
// // // // #define BRICK_H

// // // // #include <string>
// // // // using namespace std;

// // // // class Brick {
// // // // public:
// // // //     Brick(int id, string owner, string message) : id(id), owner(owner), message(message) {}

// // // //     string getOwner() const { return owner; }
// // // //     string getMessage() const { return message; }

// // // // private:
// // // //     int id;
// // // //     string owner;
// // // //     string message;
// // // // };

// // // // #endif // BRICK_H

// // // // */




// // // // #ifndef BRICK_H
// // // // #define BRICK_H

// // // // #include <string>
// // // // #include <vector>
// // // // using namespace std;

// // // // class Brick {
// // // // public:
// // // //     Brick(int id, string owner, string message) : id(id), owner(owner), message(message), flagged(false) {}

// // // //     string getOwner() const { return owner; }
// // // //     string getMessage() const { return message; }
// // // //     void setMessage(const string& newMessage) { message = newMessage; }
// // // //     bool isFlagged() const { return flagged; }
// // // //     void flag() { flagged = true; }
// // // //     void addComment(const string& comment); // Add this line


// // // // private:
// // // //     int id;
// // // //     string owner;
// // // //     string message;
// // // //     bool flagged; // New member to track if the brick is flagged
// // // //     vector<string> comments;
// // // // };

// // // // #endif // BRICK_H






// // // #ifndef BRICK_H
// // // #define BRICK_H

// // // #include <string>
// // // #include <vector>

// // // class Brick {
// // // public:
// // //     Brick(int id, std::string owner, std::string message); // Constructor declaration
// // //     void addComment(const std::string &comment); // Method declaration
// // //     void flag(); // Method declaration
// // //     std::string getOwner() const; // Method declaration
// // //     std::string getMessage() const; // Method declaration
// // //     int getId() const; // Method declaration for getId()
// // //     void setMessage(const std::string &newMessage); // Method declaration

// // // private:
// // //     int id; // Member variable
// // //     std::string owner; // Member variable
// // //     std::string message; // Member variable
// // //     bool flagged; // Member variable
// // //     std::vector<std::string> comments; // Member variable for comments
// // // };

// // // #endif // BRICK_H






// // #ifndef BRICK_H
// // #define BRICK_H

// // #include <string>
// // #include <vector>

// // class Brick {
// // public:
// //     Brick(int id, std::string owner, std::string message);
// //     void addComment(const std::string &comment);
// //     void flag();
// //     std::string getOwner() const;
// //     std::string getMessage() const;
// //     int getId() {return id ;}
// //     void setMessage(const std::string &newMessage);
// //     // bool isFlagged() {return flagged;} // Declaration
// //        bool isFlagged() const;
// //        int getId() const; 

// // private:
// //     int id;
// //     std::string owner;
// //     std::string message;
// //     bool flagged;
// //     std::vector<std::string> comments;
// // };

// // #endif // BRICK_H




// #ifndef BRICK_H
// #define BRICK_H

// #include <string>

// class Brick {
// private:
//     int id;
//     std::string owner;
//     std::string message;
//     bool flagged;

// public:
//     Brick(int id, const std::string& owner, const std::string& message)
//         : id(id), owner(owner), message(message), flagged(false) {}

//     int getId() const { return id; }
//     std::string getOwner() const { return owner; }
//     std::string getMessage() const { return message; }
//     bool isFlagged() const { return flagged; }
    
//     void flag() { flagged = true; }
// };

// #endif // BRICK_H


#ifndef BRICK_H
#define BRICK_H

#include <string>

class Brick {
private:
    std::string owner;
    std::string message;
    bool isFlagged;
    int flagCount;
    bool isVisible;

public:
    Brick();
    void setOwner(const std::string& owner);
    void setMessage(const std::string& message);
    bool getIsFlagged() const;
    bool getIsVisible() const;
    void flag();
    std::string getMessage() const;
};

#endif
