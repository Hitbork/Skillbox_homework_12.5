#include <iostream>
#include <string>

int main() {
    // Greetings
    std::cout << "Apartment house\n\n\n";


    // Creating vars and quering data
    std::string house[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Insert owner's surname of apartment #" << i+1 << ":\n";
        std::cin >> house[i];
    }

    std::cout << "\n";


    // Output
    {
        int temp, i = 0;

        while (i < 3) {
            std::cout << "Insert number of apartment: ";
            std::cin >> temp;
            if ((temp <= 0) || (temp > 10)) {
                std::cout << "Invalid index. Try again.\n\n";
            } else {
                std::cout << "Surname of apartment #" << temp << ": " << house[temp-1] << "\n\n";
                i++;
            }
        }
    }
}
