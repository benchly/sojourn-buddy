#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../include/utils.h"

void clear_screen(void) {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void print_centered(const char* text, int width) {
	int text_length = strlen(text);
	int padding = (width - text_length) / 2;

	if (padding < 0) {
		padding = 0;
	}

	for (int i = 0; i < padding; i++) {
		putchar(' ');
	}
	putchar('\n');
}

void print_line(char c, int width) {
	for (int i = 0; i < width; i++) {
		putchar(c);
	}
	putchar('\n');
}

char* get_string_input(char* buffer, size_t size, const char* prompt) {
	if (prompt != NULL) {
		printf("%s", prompt);
		fflush(stdout);
	}

	// if buffer is NULL, wait for Enter key
	if (buffer == NULL || size == 0) {
		while (getchar() != '\n') {
			
		}
		return NULL;
	}

	if (fgets(buffer, size, stdin) == NULL) {
		return NULL;
	}
	// Remove trailing new line, if present
	size_t len = strlen(buffer);
	if (len > 0 && buffer[len -1] == '\n') {
		buffer[len - 1] = '\0';
	}

	return buffer;
}

int get_integer_input(const char* prompt, int min, int max) {
	char buffer[32];
	int value;
	char* endptr;

	while (1) {
		if (prompt != NULL) {
			printf("%s", prompt);
		}

		if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
			continue;
		}
		// Remove trailing new line, if present
		size_t len = strlen(buffer);
		if (len > 0 && buffer[len -1] == '\n') {
			buffer[len - 1] = '\0';
		}

		value = (int)strtol(buffer, &endptr, 10);
		if (*endptr != '\0') {
			printf("Error: Input must be a number.\n");
			continue;
		}

		if (value < min || value > max) {
			printf("Error: Input must be between %d and %d. Try again.\n", min, max);
			continue;
		}

		return value;
	}
}

void get_input(char *buffer, int size) {
	if (fgets(buffer, size, stdin) != NULL) {
		// Remove trailing new line, if present
		size_t len = strlen(buffer);
		if (len > 0 && buffer[len -1] == '\n') {
			buffer[len -1] = '\0';
		}
	} else {
		buffer[0] = '\0';
	}
}
