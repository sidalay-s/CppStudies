#include <iostream>
#include <vector>
#include <iterator>
#include <chrono>
#include <array>

struct Timer {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	std::chrono::duration<float> duration;

	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took " << ms << "ms" << std::endl;
	}
};

int main() {

    std::array<int, 1000> ListOne{}, ListTwo{};
    ListTwo.fill(0);

    {
        Timer TimerOne;
        for (int i = 0; i < ListOne.size(); ++i) {
            ListOne[i] = 1;
            // std::cout << ListOne[i];
        }
    }

    {
        Timer TimerTwo;
        for (auto& iterator:ListTwo) {
            iterator = 1;
            // std::cout << iterator;
        }
    }

    std::cout << ListTwo[1] << std::endl;


}