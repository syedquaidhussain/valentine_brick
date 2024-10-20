// // // // #include "Brick.h"
// // // // #include <iostream>
// // // // using namespace std;

// // // // Brick::Brick(int id, string owner, string message)
// // // //     : id(id), owner(owner), message(message), flaggedCount(0), visible(true) {}

// // // // void Brick::addComment(const string &comment) {
// // // //     comments.push_back(comment);
// // // // }

// // // // void Brick::flag() {
// // // //     flaggedCount++;
// // // //     if (flaggedCount > 10) {
// // // //         visible = false;
// // // //     }
// // // // }

// // // // bool Brick::isVisible() const {
// // // //     return visible;
// // // // }

// // // // string Brick::getOwner() const {
// // // //     return owner;
// // // // }

// // // // string Brick::getMessage() const {
// // // //     return message;
// // // // }

// // // // int Brick::getId() const {
// // // //     return id;
// // // // }

// // // // void Brick::setMessage(const string &newMessage) {
// // // //     message = newMessage;
// // // // }









// // // #include "Brick.h"

// // // Brick::Brick(int id, std::string owner, std::string message)
// // //     : id(id), owner(owner), message(message), flagged(false) {}

// // // void Brick::addComment(const std::string &comment) {
// // //     comments.push_back(comment); // This will work now that 'comments' is declared
// // // }

// // // void Brick::flag() {
// // //     flagged = true; // Ensure this is defined only once
// // // }

// // // std::string Brick::getOwner() const {
// // //     return owner;
// // // }

// // // std::string Brick::getMessage() const {
// // //     return message;
// // // }

// // // int Brick::getId()  const {
// // //     return id;
// // // }

// // // void Brick::setMessage(const std::string &newMessage) {
// // //     message = newMessage;
// // // }






// // #include "Brick.h"

// // Brick::Brick(int id, std::string owner, std::string message)
// //     : id(id), owner(owner), message(message), flagged(false) {}

// // void Brick::addComment(const std::string &comment) {
// //     comments.push_back(comment); // Ensure 'comments' is declared in the class
// // }

// // void Brick::flag() {
// //     flagged = true; // Flagging the brick
// // }

// // std::string Brick::getOwner() const {
// //     return owner; // Return the owner of the brick
// // }

// // std::string Brick::getMessage() const {
// //     return message; // Return the message of the brick
// // }

// // int Brick::getId() const {
// //     return id; // Return the ID of the brick
// // }

// // void Brick::setMessage(const std::string &newMessage) {
// //     message = newMessage; // Set a new message
// // }








// #include "Brick.h"

// Brick::Brick(int id, std::string owner, std::string message)
//     : id(id), owner(owner), message(message), flagged(false) {}

// void Brick::addComment(const std::string &comment) {
//     comments.push_back(comment);
// }

// void Brick::flag() {
//     flagged = true;
// }

// bool Brick::isFlagged() const { // Definition
//     return flagged;
// }

// std::string Brick::getOwner() const {
//     return owner;
// }

// std::string Brick::getMessage() const {
//     return message;
// }

// int Brick::getId() const {
//     return id;
// }

// void Brick::setMessage(const std::string &newMessage) {
//     message = newMessage;
// }




#include "Brick.h"

Brick::Brick() : isFlagged(false), flagCount(0), isVisible(true) {}

void Brick::setOwner(const std::string& owner) {
    this->owner = owner;
}

void Brick::setMessage(const std::string& message) {
    this->message = message;
}

bool Brick::getIsFlagged() const {
    return isFlagged;
}

bool Brick::getIsVisible() const {
    return isVisible;
}

void Brick::flag() {
    isFlagged = true;
    flagCount++;
    if (flagCount > 10) {
        isVisible = false;
    }
}

std::string Brick::getMessage() const {
    return message;
}

