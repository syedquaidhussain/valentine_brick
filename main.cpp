// // // #include "System.h"
// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // //     System system;

// // //     // Creating users
// // //     system.createUser("Alice");
// // //     system.createUser("Bob");
// // //     system.createUser("AdminUser", true); // Creating an Admin

// // //     // Add walls to the city
// // //    system.getCity().addWall(); // Add first wall
// // // system.getCity().addWall(); // Add second wall

// // //     // Dedicate bricks
// // //     system.dedicateBrick(0, 0, "Love you, Bob!");
// // //     system.dedicateBrick(1, 0, "You are amazing, Alice!");
// // //     system.dedicateBrick(2, 1, "Hey Admin, you rock!");

// // //     // Display the wall contents
// // //     system.displayWall(0);

// // //     // Flag a brick
// // //     system.flagBrick(0, 0);

// // //     // Display wall after flagging
// // //     system.displayWall(0);

// // //     // Find hottest user
// // //     system.hottestUser();

// // //     return 0;
// // // }









// // #include "System.h"
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     System system;

// //     // Create users
// //     system.createUser("Alice", false); // Regular User
// //     system.createUser("Bob", true); // Admin User

// //     // Add walls
// //     system.city.addWall();
// //     system.city.addWall();

// //     // Dedicate bricks
// //     system.dedicateBrick(0, 0, "I love you, Bob!");
// //     system.dedicateBrick(1, 1, "Happy Valentine's Day, Alice!");
// //     system.dedicateBrick(0, 0, "You're the best, Bob!");
    
// //     // Flag a brick
// //     system.flagBrick(0, 0);

// //     // Display walls
// //     system.displayWall(0);
// //     system.displayWall(1);

// //     // Display hottest user
// //     system.hottestUser();

// //     return 0;
// // }



// #include <iostream>
// #include "System.h"

// int main() {
//     System system;

//     // Create users
//     system.createUser("Alice", true); // Admin
//     system.createUser("Bob", false); // Regular User

//     // Users dedicate bricks
//     system.dedicateBrick(0, 0, "This is a dedication from Alice.");
//     system.dedicateBrick(1, 0, "This is a dedication from Bob.");

//     // Display the wall
//     system.displayWall(0);

//     // Flag a brick
//     system.flagBrick(0, 0);

//     // Display the wall again
//     system.displayWall(0);

//     // Show hottest user
//     system.hottestUser();

//     return 0;
// }



#include "System.h"
#include <iostream>

int main() {
    System system;

    // Create some users
    system.createUser("Alice");
    system.createUser("Bob");
    system.createUser("Admin", true);

    // Dedicate bricks
    system.dedicateBrick(0, 0, "Happy Valentine's Day, Alice!", "Bob");
    system.dedicateBrick(0, 1, "You are awesome!", "Alice");

    // Display wall
    system.displayWall(0);

    // Flag a brick
    system.flagBrick(0, 0);
    system.flagBrick(0, 0); // Multiple flagging
    system.flagBrick(0, 0);

    // Find hottest user (most dedications)
    User* hottestUser = system.findHottestUser();
    if (hottestUser) {
        std::cout << "Hottest user is: " << hottestUser->getName() << " with " << hottestUser->getDedicationCount() << " dedications." << std::endl;
    }

    // Find a user with no dedication
    User* noDedicationUser = system.findUserWithNoDedication();
    if (noDedicationUser) {
        std::cout << "User with no dedications: " << noDedicationUser->getName() << std::endl;
    }

    return 0;
}
