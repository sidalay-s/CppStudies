#ifndef MAGIC_H
#define MAGIC_H

#include <string>

class Magic {

private:
    std::string Type{};

public:
    Magic() {};

    Magic(std::string type) 
        : Type{type} {
            LOG("Magic object " << Type << " has been constructed.");
    }

    std::string getType() {return Type;}

};


#endif