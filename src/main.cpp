#include <iostream>
#include "include/encoder.h"
#include "include/decoder.h"

int main() {
    int choice;

    std::cout << "Encode or Decode? (1/2)" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1:
            encode();
            break;
        case 2:
            decode();
            break;
        default:
            break;
    }
}