#include <iostream>
#include <vector>

// Function to print elements of an array
void printArray(std::vector<int> myArray) {
    for (int i = 0; i < myArray.size(); i++) {
        std::cout << myArray[i] << std::endl;
    }
}

int main() {
    std::vector<int> myArray = {1, 2, 3, 4, 5};
    printArray(myArray);
    return 0;
}
