/*
 * tabdict.c
 *
 *  Created on: Jun 20, 2012
 *      Author: kaio
 */

#include <stdio.h>

#define TAB_DICT_SIZE 255

// No unicode characters yet.
char tab_dict[TAB_DICT_SIZE] =
  { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', // 0 - 9
      'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', // 10 - 19
      'u', 'v', 'w', 'x', 'y', 'z', '\'', ';', '`', '~', // 20 - 29
      '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', // 30 - 39
      '-', '_', '=', '+', '[', ']', '{', '}', '|', '/', // 40 - 49
      ':', '"', '<', '>', ',', '.', '?', '\\', 'A', 'B', // 50 - 59
      'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', // 60 - 69
      'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', // 70 - 79
      'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', // 80 - 89
      '6', '7', '8', '9', // 90 - 94

      '\0'

  // From Python code. I ain't rewrite at this moment.
    /*
     gen_uni('ä'):95,
     gen_uni('ö'):96,
     gen_uni('ü'):97
     */
    };

int
deparse(char id)
{
  int i;
  for (i = 0; i < TAB_DICT_SIZE; ++i)
    {
      if (id == tab_dict[i])
        return i;
    }
  return -1;
}

char*
parse(char* input_str)
{
//  int i = 0;
//  char token;
//  char* output_str;
//    printf("%s", input_str);
//
//  while ((token = input_str[i]) != '\0')
//    {
//      for (int j = 0; j < TAB_DICT_SIZE; ++j)
//        {
//          if (token == tab_dict[j]){
//              output_str[i] = j;
//          }
//
//        }
//    }
  return input_str;
}

