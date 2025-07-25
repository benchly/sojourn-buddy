#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/utils.h"

void clear_screen(void) {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void get_input(char *buffer, int size) {
	if (fgets(buffer, size, stdin) != NULL) {
		// Remove trailing newline if present
		size_t len = strlen(buffer);
		if (len > 0 && buffer[len -1] == '\n') {
			buffer[len -1] = '\0';
		}
	} else {
		buffer[0] = '\0';
	}
}
