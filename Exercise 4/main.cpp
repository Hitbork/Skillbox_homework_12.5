#include <iostream>

// Function for searching repeated number
int search_repeated_number(int array[]) {
    // Searching minimal number
    int min = array[0], summaryOf15 = 0;
    for (int i = 0; i < 15; i ++) {
        if (array[i] < min) {
            min = array[i];
        }
        summaryOf15 += array[i];
    }

    // Counting summary
    int summaryOf14 = 0;
    for (int i = 0; i < 14; i++) {
        summaryOf14 += min;
        min++;
    }

    // Return the number
    return summaryOf15 - summaryOf14;
}


int main() {
    // Greetings
    std::cout << "Searching for repeated number\n\n\n";


    // Creating vars and quering data
    int numbers[15];

    std::cout << "Insert number using spacebar between them and enter in the end:\n";

    for (int i = 0; i < 15; i++) {
        std::cin >> numbers[i];
    }

    std::cout << "\n";

    // Output
    std::cout << "Repeated number is: " << search_repeated_number(numbers) << "\n";
}
