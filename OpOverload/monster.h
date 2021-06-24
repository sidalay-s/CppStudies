#ifndef MONSTER_H
#define MONSTER_H
#include "character.h"

class Monster : public virtual Character {

friend std::ostream& operator<<(std::ostream& os, const Monster& rhs) {
    const Character* temp = &rhs;
    os << *temp;
    os << "Temperament: " << rhs.GetTemper() << '\n';
    os << "Friendliness: " << rhs.GetFriendly() << std::endl;
    return os;
}

protected:
    std::string Temperament{};
    bool Friendly{};
public:

    // constructor 
    Monster(std::string name, std::string temper, float X = 10, float Y = 10) 
        : Character(name, X, Y), Temperament{temper}, Friendly{false} {
            LOG("Monster " << name << " has been constructed!");
    }

    // copy constructor
    Monster(const Monster& obj) 
        : Character(obj), Temperament{obj.GetTemper()}, Friendly{obj.GetFriendly()} {
            LOG("Monster copy constructor called for " << name << '.');
    }

    // overloaded constructor
    Monster(const std::string& name, const Monster& obj) 
        : Character(name, obj), Temperament{obj.GetTemper()}, Friendly{obj.GetFriendly()} {
            LOG("Overloaded copy constructor called for " << name << ".");
    }

    // move constructor

    // copy assignment
    Monster& operator=(const Monster& rhs) {
        if (this != &rhs) {
            Character::operator=(rhs);
            Temperament = rhs.GetTemper();
            Friendly = rhs.GetFriendly();
        }
        LOG("Monster copy assignment for " << name << " and " << rhs.getName() << " has been called");
        return *this;
    }

    // move assignment

    // getter
    std::string GetTemper() const {return Temperament;}
    bool GetFriendly() const {return Friendly;}
    
    void MoveCharacter(float X, float Y) override {

        this->setPosX(X);
        this->setPosY(Y);

        LOG("Monster moved to PosX: " << X << " and PosY: " << Y);
    }
};

#endif