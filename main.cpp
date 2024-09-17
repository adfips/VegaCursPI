#include <cstdlib>
#include <iostream>

#include "include/add.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Provide exactly 2 arguments\n";
        return 1;
    }
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    std::cout << add(a, b) << '\n';
    return 0;
}
