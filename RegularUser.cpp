#include "RegularUser.h"
#include <iostream>
using namespace std;

RegularUser::RegularUser(string name) : User(name) {}

void RegularUser::editBrick(int brickId, const string &newMessage) {
    cout << "Regular user editing brick " << brickId << " with new message: " << newMessage << endl;
    // Implement the logic to edit the user's brick
}
