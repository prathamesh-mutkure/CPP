/**********************************************************
 *
 * CONSTRUCTOR:
 * Constructors are special methods, which have no return type and follow same name as Class
 * Constructors are called when Object is created
 * Commonly used for Initialization of Member Variables
 *
 * C++ needs Constructor to create a objects
 * So, if we don't explicitly write a Constructor, C++ creates one for us
 * This is called Default Constructor
 * It has no arguments or body, it only helps in creating an Object
 *
 **********************************************************
 *
 * DESTRUCTORS:
 * Like constructor they are also special methods
 * They are preceded by (~) sign
 * They are called when an object goes out of scope
 * They are used to free up memory used by objects
 * They can be called when we delete a Pointer to Object
 *
 * Implicit destructors within a same scope are called in order of their respective constructors
 * We can perform Constructor Overloading
 * But we can only set a single Destructor
 *
 **********************************************************/

#include <iostream>

#include "Player.h"

int main() {

    /*
     * We are creating scopes so that objects are created and deleted immediately
     * So that we can see the creation and destruction of object
     * When it goes out of scope
     */

    {
        Player panda;
        panda.setName("Panda");
        panda.setHealth(100);
        panda.setXp(1000);
    }

    {
        Player levhino("Levhino");
        levhino.setHealth(85);
        levhino.setXp(800);
        levhino.displayInfo();

        Player shroud("Shout", 77, 700);
        shroud.displayInfo();
    }

    /*
     * Explicitly deleting the Object
     * Through Dynamically allocating and then deallocating the storage
     * So that the destructor is called
     */

    Player *mortal = new Player("Mortal", 97, 990);
    mortal->displayInfo();

    Player *dynamo = new Player("Dynamo");
    dynamo->setHealth(99);
    dynamo->setXp(995);
    dynamo->displayInfo();

    // Deleting memory
    delete dynamo;
    delete mortal;

    return 0;
}