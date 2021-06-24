#ifndef TAMED_H
#define TAMED_H
#include "player.h"
#include "monster.h"

class Tamed : public Player, public Monster {

private:

public:
    Tamed(std::string name, std::string role = "none", std::string temper = "wild", float X = 0.0f, float Y = 0.0f)
        : Player{name, role, X, Y}, Monster{name, temper, X, Y}, Character{name, X, Y} {
            LOG("Tamed constructor called for " << name);
    }

    void MoveCharacter(float X, float Y) override {
        this->setPosX(X);
        this->setPosY(Y);

        LOG("Tamed moved to PosX: " << X << " and PosY: " << Y);
    }
};

#endif