/*
 * start.c
 *
 *  Created on: Jun 15, 2012
 *      Author: kaio
 */

#include "stdio.h"
#include "stdlib.h"
#include <gtk/gtk.h>

int main(int argc, gchar* argv[]) {

	g_print("Char Generator\n\n");

	char keys[5];

	g_print("Input your 5 keys: ");
	gets(keys);

	char keyscut[5];
	strncpy(keyscut, keys, 5);

	g_print("You inputted keys: %s", keyscut);

	g_print("\n");

	return 0;
}
