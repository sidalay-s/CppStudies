#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"

class Player : public virtual Character {

friend std::ostream& operator<<(std::ostream& os, const Player& rhs) {
    const Character* temp = &rhs;
    os << *temp;
    os << "PlayerClass: " << rhs.GetClass() << std::endl;
    return os;
}

protected:
    std::string PlayerClass {};
public:

    // constructor
    Player(std::string name, std::string role = "None", float X = 10, float Y = 10) 
        : Character(name, X, Y), PlayerClass{role} {
            LOG("Player " << name << " has been constructed!");
    }
    
    // copy constructor
    Player(const Player& obj)
        : Character(obj), PlayerClass{obj.GetClass()} {
            LOG("Player copy constructor called for " << name << ".");  
    } 

    // overloaded constructor
    Player(const std::string& name, const Player& obj) 
        : Character(name, obj), PlayerClass{obj.GetClass()} {
            LOG("Overloaded copy constructor called for " << name << ".");
    }

    // move constructor

    // copy assignment
    Player& operator=(const Player& rhs) {

        if (this != &rhs) {
            Character::operator=(rhs);
            PlayerClass = rhs.GetClass();
        }
        LOG("Player copy assignment for " << name << " and " << rhs.getName() << " has been called");
        return *this;
    }

    // move assignment

    // getter
    std::string GetClass() const {return PlayerClass;}

    void MoveCharacter(float X, float Y) override {
        this->setPosX(X);
        this->setPosY(Y);

        LOG("Player moved to PosX: " << X << " and PosY: " << Y);
    }
};

#endif