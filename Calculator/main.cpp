#include <iostream>

int main() {

    while (true) {
        
        double firstNumber {};
        char operation {};
        double secondNumber {};
        double result {};

        std::cout << "enter a number" << std::endl;
        std::cin >> firstNumber;
        std::cout << "Enter an operator (+, -, *, /)" << std::endl;
        std::cin >> operation;
        std::cout << "enter a second number" << std::endl;
        std::cin >> secondNumber;

        switch(operation) {
            case '+':
                result = firstNumber + secondNumber;
                break;
            case '-':
                result = firstNumber - secondNumber;
                break;
            case '*':
                result = firstNumber * secondNumber;
                break;
            case '/':
                if (secondNumber == 0) {
                    std::cout << "Cannot divide by 0" << std::endl;
                    break;
                }
                result = firstNumber / secondNumber;
                break;
            default:
                std::cout << "Illegal operator" << std::endl;
                break;
        }

        std::cout << "Result: " << result << '\n'
                  << "1. Start new calculation\n"
                  << "2. Exit" << std::endl;

        // std::cout << "1. Start new calculation" << std::endl;
        // std::cout << "2. Exit" << std::endl;

        int option {};
        std::cin >> option;
        if (option == 2)
            return false;
    }
}

/*

    Loop {

        cout << "Enter a number" << endl;
        cin >> first input 
        cout << "Enter an operator (+, -, *, /)"
        cin >> (+, -, *, /)
        cout << "Enter a number" << endl
        cin >> second input
        
        operator(first input, second input);

        cout << result

        Menu with two options
        1. Start new calculation
        2. Exit

    }

    1. addition function
    2. subtract function
    3. multiply function
    4. division function

*/