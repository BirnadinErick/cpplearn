#include <cpplearn/chap_funcs/chap_funcs.h>

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    // sqaure n
    float n;
    if (argc < 2) {
        std::cerr << "Enter a number to square it: ";
        std::cin >> n;
    } else {
        n = std::stof(argv[1]);
    }

    std::cout << std::fixed << std::setprecision(2) << cpplearn::ex::square(n)
              << " square units";
    std::cerr << std::endl;

    // circular area
    float r;
    if (argc < 3) {
        std::cerr << "Enter radius to find circular area: ";
        std::cin >> r;
    } else {
        r = std::stof(argv[2]);
    }

    std::cout << std::fixed << std::setprecision(2) << cpplearn::ex::cir_area(r)
              << " square units";
    std::cerr << std::endl;

    return EXIT_SUCCESS;
}
