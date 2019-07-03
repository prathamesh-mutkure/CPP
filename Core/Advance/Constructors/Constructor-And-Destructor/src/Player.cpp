#include "Player.h"

using namespace std;

/***** CONSTRUCTORS *****/

Player::Player() {
    cout << "\nNo args constructor called" << endl;
}

Player::Player(string n) {
    cout << "\nString argument constructor called" << endl;
    name = n;
}

Player::Player(string n, int h, int x) {
    cout << "\nAll args constructor called" << endl;
    name = n;
    health = h;
    xp = x;
}

/***** METHODS *****/

void Player::setName(string n) {name = n;}
string Player::getName() { return name;}

void Player::setHealth(int h) {health = h;}
int Player::getHealth() { return health;}

void Player::setXp(int x) {xp = x;}
int Player::getXp() { return xp;}

void Player::displayInfo() {
    cout << "Player name: " << name << endl;
    cout << "Player health: " << health << endl;
    cout << "Player XP: " << xp << endl;
}

/***** DESTRUCTORS *****/

Player::~Player() {
    cout << "\nDestructor of " << name << " called!" << endl;
}

