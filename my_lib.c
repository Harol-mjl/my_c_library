#include "my_lib.h"

/**
 * Count the number of characters in a string
 * @param *str: Pointer to the string whose length need to be counted 
 * @return number of characters in the string, not including character null
 */
size_t my_strlen(const char *str){
  int num_bytes = 0;
  
  while(*str++){
    num_bytes = num_bytes + 1;
  }
  return num_bytes;
}

/**
 * Compare two strings character by cahracter. If a characters are diferents,
 * the function return which string is greater or lesser based on the ASCII values.
 *
 *@param str1: Pointer to the first string to be compare
 *@param str2: Pointer to the second string to compare with the first one
 *@return: >0 if str1 is greater than str2
 *       : <0 if str1 is less than str2
 *       : 0 if str1 and str2 are equal
 */
int my_strcmp(const char *str1 , const char *str2){
  while(*str1 && *str2){
    if(*str1 != *str2){
      return (int)*str1 - (int)*str2;
    }
    str1++;
    str2++;
  }
  return (int)(*str1 - *str2);
}

/**
 * Copies the string from src inside the memory pointed by dest
 *
 *@param dest: Pointer to the destination where the string will be copied.
 *@param src:  Pointer to the source string to be copied.
 *@return the pointer to the first character of dest.
 */

char *my_strcpy(char *dest, const char *src){
  char *origin_dest = dest;
  while(*src){
    *dest++ = *src++;
  }
  *dest = '\0';
  return origin_dest;
}
