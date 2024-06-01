#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int x, y; // Player's position in the grid

public:
    Player(const std::string& name, int health)
        : name(name), health(health), x(0), y(0) {}

    void move(char direction) {
        switch (direction) {
            case 'w': y--; break;
            case 's': y++; break;
            case 'a': x--; break;
            case 'd': x++; break;
        }
    }

    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) health = 0;
    }

    int getHealth() const { return health; }
    int getX() const { return x; }
    int getY() const { return y; }
    std::string getName() const { return name; }
};




class Item {
private:
    std::string name;

public:
    Item(const std::string& name) : name(name) {}

    std::string getName() const { return name; }
};


class Enemy {
private:
    std::string name;
    int damage;

public:
    Enemy(const std::string& name, int damage)
        : name(name), damage(damage) {}

    std::string getName() const { return name; }
    int getDamage() const { return damage; }
};