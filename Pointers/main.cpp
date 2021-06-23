#include <iostream>

void PrintNum(int x) {
    std::cout << "Your number is: " << x << std::endl;
}

class Person {
    int a{};
    int b{};
};

struct TwoNumbers {
    int x{};
    int y{};
}; 

int main() {

    int NumOne {1};
    double NumTwo {24.5};
    char Alpha {'a'};
    Person Sid{};
    TwoNumbers Coordinates{};

    int* ptr1 {&NumOne}; // 0x000abF80

    std::cout << NumOne << '\n';
    std::cout << *ptr1 << '\n';
    std::cout << &NumOne << '\n';
    std::cout << ptr1 << std::endl;

    *ptr1 = 1000;

    std::cout << NumOne << '\n';
    std::cout << *ptr1 << '\n';
    std::cout << &NumOne << '\n';
    std::cout << ptr1 << std::endl;

    double* ptr2 {&NumTwo};
    char* ptr3 {&Alpha};
    Person* ptr4 {&Sid};
    TwoNumbers* ptr5 {&Coordinates};

    std::cout << ptr1 << "\n\n";
    std::cout << &ptr1 << "\n";
    ptr1 = nullptr;
    std::cout << ptr1 << '\n';
    std::cout << &ptr1 << "\n\n";
    ptr1 = &NumOne;

    int** ptr2ptr {&ptr1}; // ptr2ptr -> ptr1 -> NumOne

    std::cout << **ptr2ptr << '\n';
    **ptr2ptr = 50;
    std::cout << **ptr2ptr << "\n\n";   // Value of NumOne
    std::cout << *ptr2ptr << "\n\n";    // Address of NumOne
    std::cout << ptr2ptr << "\n\n";     // Address of Ptr1
    
    std::cout << &ptr1 << "\n\n";

    int* HeapPtr {new int {10}};
    delete HeapPtr;
    
    void (*FuncPtr)(int){&PrintNum};
    (*FuncPtr)(20);

    std::cout << FuncPtr << std::endl;
    
}