#include <iostream>
#include <cassert>

// Function to find travel time
float travelTime(float distance, float speed) {
    // Using assert crush program if speed <= 0
    assert(speed > 0);

    // Using assert crush program if distance < 0
    assert(distance >= 0);

    return distance / speed;
}


int main() {
    // Greetings
    std::cout << "Using assert\n\n\n";


    // Creating vars and quering data
    float distance, speed;

    std::cout << "Input distance:\n";
    std::cin >> distance;

    std::cout << "Input speed:\n";
    std::cin >> speed;

    std::cout << "\n";


    // Output
    std::cout << "Travel time is: " << travelTime(distance, speed) << std::endl;
}
