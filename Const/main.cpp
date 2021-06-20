#include <iostream>
#include <string>

class Study {
private:
    int x{};
    mutable int y{};
public:
    int GetX() const {
        y = 5;      // this works because y is mutable
        return x;
    }

    void SetX(const int& a) {
        // a = 5;   // this will error
        this->x = a;
    }

    void SetY(const int& a) {
    // a = 5;   // this will error
    this->y = a;
    }

};

int main() {

    Study testone{};
    testone.SetX(5);
    const Study test{};
    // test.SetX(10); // this doesnt work because the object TEST is const

    const int ten{10};

    const std::string Sid{"Sid"};
    std::string Diana{"Diana"};

    const std::string* Point2Sid = &Sid;
    std::cout << *Point2Sid << std::endl;
    // *Point2Sid = "Charlie";
    const std::string* const Point2Diana = &Diana;
    std::cout << *Point2Diana << std::endl;
    // *Point2Diana = "Rumby";

    Point2Sid = &Diana;
    // Point2Diana = &Sid; // This does not work because the variable Point2Diana is const
}

