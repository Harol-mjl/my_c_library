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

/*
 * Replaces the characters in 'dest' with the 'n' characters from 'src'
 * if 'n' is greater than 'strlen(src), the remaining character in 'dest' will be set to 0's
 *
 * @param dest: Pointer to the destination where the characters from 'src' will be copied
 * @param src: Pointer to the source string to copy
 * @param m: the number of characters to copy form 'src' to 'dest,
 *
 */
char *my_strncpy(char *dest, const char *src, size_t n){
  char *origin_dest = dest;
  int contador = 0;
  
  if (n > strlen(src)){
    memset(dest, 0, n);
  }
  
  while(*src && contador < n){
    *dest++ = *src++;
    contador++;
  }

  return origin_dest;
}

/*
 * Copies te string from i'src' to the end of the string 'dest' overwriting the null character of 'dest'.
 * @param dest: Pointer to the destination where the 'src' string will be concatenated to'dest'
 * @param src: Pinter to the string to the concatenated with 'dest'
 * @return: the first position of 'dest' saved in 'origin_dest'
 */

char *my_strcat(char *dest, char const *src){
  char *origin_dest = dest;
  //Move the pointer "dest" until the null character   
  while(*dest){
    dest++;
  }
  while(*src){
    *dest++ = *src++; 
  }
  //add the character null at the final of the concatenated string
  *dest = '\0';

  return origin_dest;
}
