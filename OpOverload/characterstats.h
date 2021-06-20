#ifndef CHARACTERSTATS_H
#define CHARACTERSTATS_H

#include <string>

struct Stats {
public:
    std::string name {};
    int hp {100};
    size_t mp {100};
    size_t xp {0};
    size_t level {1};

};

struct Position {
public:
    float x{};
    float y{};

};

#endif