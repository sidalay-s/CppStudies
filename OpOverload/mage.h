#ifndef MAGE_H
#define MAGE_H
#include "player.h"
#include "magic.h"
#include <array>

class Mage : public Player {

private:
    std::array<Magic, 4> Spells {Magic("Fire"), Magic("Ice"), Magic("Wind"), Magic("Earth")};

public:
    Mage(std::string name, std::string role = "None", float X = 10, float Y = 10) 
        : Player{name, role, X, Y} {    
            LOG("Mage " << name << " has been created and array of Spells has been filled!");
    }

    Mage(const Mage& obj)
        : Player(obj) {
            LOG("object has been copied");
    }

    
    

    void CastSpell(std::string Spellname) {
        for (auto i = 0; i < Spells.size(); ++i)
            if (Spellname == Spells.at(i).getType()) {
                LOG(name << " has casted " << Spells.at(i).getType());
                return;
            }
            LOG(Spellname << " does not exist!");
    }
};

#endif