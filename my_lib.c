#include "my_lib.h"

size_t my_strlen(const char *str){
  int num_bytes = 0;
  
  while(*str++){
    num_bytes = num_bytes + 1;
  }
  return num_bytes;
}

int my_strcmp(const char *str1 , const char *str2){
  while(*str1 != '\0' && *str2 != '\0'){
    if(*str1 != *str2){
      return (int)*str1 - (int)*str2;
    }
    str1++;
    str2++;
  }
  return (int)(*str1 - *str2);
}
