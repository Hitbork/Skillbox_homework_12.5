#include <iostream>

// Subfunction to sort array
void heapify(float array[], int n, int i) {
    int largest = i;

    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if ((l < n) && (array[l] < array[largest])) {
        largest = l;
    }

    if ((r < n) && (array[r] < array[largest])) {
        largest = r;
    }

    if (largest != i) {
        std::swap(array[i], array[largest]);

        heapify(array, n, largest);
    }
}


// Function of sorting
void heapSort(float array[], int n) {
    for (int i = n  / 2 - 1; i >= 0; i--) {
        heapify(array, n, i);
    }

    for (int i = n - 1; i>= 0; i--) {
        std::swap(array[0], array[i]);

        heapify(array, i , 0);
    }
}



int main() {
    // Greetings
    std::cout << "Sorting array\n\n\n";


    // Creating vars and quering data
    float array[15];

    std::cout << "Input numbers with spacebars and newline in the end:\n";
    for (int i = 0; i < 15; i ++) {
        std::cin >> array[i];
    }

    std::cout << std::endl;


    // Sorting
    int n = sizeof(array) / sizeof(array[0]);

    heapSort(array, n);


    // Output
    std::cout << "Sorted array: ";

    for (int i = 0; i < 15; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << "\n";

}
