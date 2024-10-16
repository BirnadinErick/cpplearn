#include <cpplearn/reversestr/reversestr.h>
#include <stdlib.h>

void reversestr(const char* src, char* dst, size_t len) {
  if (len < 2) {
    dst[0] = src[0];
    return;
  }

  size_t i = 0;
  size_t j = len - 1;
  while (i < len + 1) {
    dst[i] = src[j];
    i++;
    j--;
  }
  dst[i] = '\0';
}
