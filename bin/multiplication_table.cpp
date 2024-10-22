#include <cpplearn/chap_arr/chap_arr.h>
#include <stdlib.h>

#include <array>
#include <iostream>
#include <ostream>

int main() {
    std::array<std::array<int, 10>, 10> table = {{
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
	{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
        {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}},
    }};

    for (int i = 0; i < 10; i++) {
        cpplearn::ex::multiply_arr(&table[i], i + 1);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << table[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
