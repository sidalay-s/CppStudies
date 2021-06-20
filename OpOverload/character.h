#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <iostream>
#include "macros.h"
#include "characterstats.h"


class Character {

friend std::ostream& operator<<(std::ostream& os, const Character& rhs) {
    os << "Name: " << rhs.getName() << '\n'
       << "HP: " << rhs.getHP() << '\n'
       << "MP: " << rhs.getMP() << '\n'
       << "XP: " << rhs.getXP() << '\n'
       << "Level: " << rhs.getLevel() << '\n'
       << "PosX: " << rhs.getPosX() << '\n'
       << "PosY: " << rhs.getPosY() << std::endl;
    return os;
}  

protected:
    // Stats CharacterStats{};
    // Position Pos{};

    std::string name {};
    int hp {100};
    size_t mp {100};
    size_t xp {0};
    size_t level {1};
    float PosX {};
    float PosY {};
    // float PosZ {};

public:
    
    Character() = delete;

    // constructor
    Character(const std::string& name, float X, float Y) 
        : name{name}, PosX{X}, PosY{Y} {
            LOG("Character " << name << " has been constructed!");
    }

    // copy constructor
    Character(const Character& obj) 
        : name{obj.getName()}, hp{obj.getHP()}, mp{obj.getMP()}, xp{obj.getXP()}, 
          level{obj.getLevel()}, PosX{obj.getPosX()}, PosY{obj.getPosY()} {
            LOG("Character copy constructor for " << name << " has been called.");
    }

    // overloaded constructor
    Character(const std::string name, const Character& obj) 
        : name{name}, hp{obj.getHP()}, mp{obj.getMP()}, xp {obj.getXP()},
          level{obj.getLevel()}, PosX{obj.getPosX()}, PosY{obj.getPosY()} {
              LOG("Overloaded constructor called for " << name << '.');
    }

    // move constructor


    // copy assignment
    Character& operator=(const Character& rhs) {
        LOG("Character copy assignment for " << name << " and " << rhs.getName() << " has been called");
        
        if (this != &rhs) {
            name = rhs.getName();
            PosX = rhs.getPosX();
            PosY = rhs.getPosY();
            hp = rhs.getHP();
            mp = rhs.getMP();
            xp = rhs.getXP();
            level = rhs.getLevel();
        }
        return *this;
    }


    // move assignment


    // setters
    void setLevel(int num) {level = num;}
    void setPosX(float X) {PosX = X;} 
    void setPosY(float Y) {PosY = Y;} 
    // void setPosZ(const float Z) {PosZ = Z;}
     
    // getters
    std::string getName() const {return name;}
    int getHP() const {return hp;}
    size_t getMP() const {return mp;}
    size_t getXP() const {return xp;}
    size_t getLevel() const {return level;}
    float getPosX() const {return PosX;}
    float getPosY() const {return PosY;}
    // float getPosZ() const {return PosZ;}

    // virtual void MoveCharacter(const float& X, const float& Y) {
    //     this->setPosX(X);
    //     this->setPosY(Y);

    //     LOG("Character moved to PosX: " << X << " and PosY: " << Y);
    // }

    virtual void MoveCharacter(float X, float Y) = 0;

    void operator++() {
        ++level;
        LOG(name << " has leveled up to: " << level);
    }

    void operator--() {
        --level;
        LOG(name << " has leveled down to: " << level);
    }
};

#endif