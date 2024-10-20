#include "Admin.h"
#include <iostream>
#include "Brick.h" // Added to handle bricks
using namespace std;

// Assuming a global collection of bricks for simplicity
vector<Brick*> allBricks; // This will hold all bricks in the system

Admin::Admin(string name) : User(name) {}

void Admin::editBrick(int brickId, const string &newMessage) {
    for (auto brick : allBricks) {
        if (brick->getId() == brickId) {
            brick->setMessage(newMessage); // Assuming a setMessage method exists in Brick
            cout << "Admin edited brick " << brickId << " with new message: " << newMessage << endl;
            return;
        }
    }
    cout << "Brick not found!" << endl;
}
