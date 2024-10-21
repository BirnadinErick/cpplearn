#include <cpplearn/chap_funcs/chap_funcs.h>

namespace cpplearn {
namespace ex {

static const float PI = 3.14;

float square(float n) { return n * n; }

float cir_area(float r) {
    if (r < 0 || r == 0) {
        return 0;
    }
    return PI * square(r);
}

}  // namespace ex
}  // namespace cpplearn
