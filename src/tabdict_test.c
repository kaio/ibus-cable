/*
 * tabdict_test.c
 *
 *  Created on: Jun 21, 2012
 *      Author: kaio
 */

#include <stdio.h>
#include "tabdict.h"

int
main(void)
{

  printf("Testing deparse()\n");
  printf("=================\n");

  char query_char;

  printf("Please insert the character for query: ");
  query_char = getchar();
  if (query_char != '\n')
    printf("The index of the char is [%i].\n", deparse(query_char) + 1);

  else
    printf("Invalid input. Quitting...\n");

  return 0;

}
