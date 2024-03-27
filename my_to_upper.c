#include "my_string.h"

void *my_to_upper(const char *str) {
  if (str == my_NULL) {
    return my_NULL;
  }

  int length = my_strlen(str);
  char *result = (char *)calloc(length + 1, sizeof(char));
  if (result == my_NULL) {
    return my_NULL;
  }

  for (int i = 0; i < length; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      result[i] = str[i] - 32;
    } else {
      result[i] = str[i];
    }
  }

  return result;
}