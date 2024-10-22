#include <cpplearn/chap_arr/chap_arr.h>

#include <array>

namespace cpplearn {
namespace ex {
void multiply_arr(std::array<int, 10>* basetable, int multiplier) {
    for (int i = 0; i < 10; i++) {
        (*basetable)[i] = (*basetable)[i] * multiplier;
    }
}
}  // namespace ex
}  // namespace cpplearn
