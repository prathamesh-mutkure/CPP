#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player {

private:
    string name {""};
    int health {0};
    int xp {0};

public:

    Player();
    Player(string n);
    Player(string n, int h, int x);

    void setName(string n);
    void setHealth(int h);
    void setXp(int x);

    string getName();
    int getHealth();
    int getXp();

    void displayInfo();

    ~Player();      // Destructor

};


#endif //CONSTRUCTOR_AND_DESTRUCTOR_PLAYER_H
