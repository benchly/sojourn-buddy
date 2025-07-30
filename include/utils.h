#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>

// Clear terminal screen
void clear_screen(void);

// Centers text with given width
void print_centered(const char* text, int width);

// Prints character line with given width
void print_line(char c, int width);

// Gets string input from prompt
void get_string_input(char* buffer, size_t size, const char* prompt);

// Gets integer input from prompt
int get_integer_input(const char* prompt, int min, int max);

// Get user input from stdin
void get_input(char *buffer, int size);

#endif 
