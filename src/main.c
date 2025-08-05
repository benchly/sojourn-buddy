#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../include/dice.h"
#include "../include/cards.h"
#include "../include/journal.h"
#include "../include/map_editor.h"
#include "../include/settings.h"
#include "../include/utils.h"
#include "../include/colors.h"

#define DEFAULT_WIDTH 60

int get_terminal_width(); 

void display_menu(void) {
	clear_screen();
	
	int width = get_terminal_width();

	print_line('=', width);
	print_centered("%sSojourn Buddy%s: Your Solo TTRPG Assistant", width);
	print_line('=', width);
	printf("\n");

	const char* menu_items[] = {
		"1. Dice Bag",
		"2. Deck o' Cards",
		"3. Journal",
		"4. Map Maker",
		"5. Settings", 
		"6. Exit"
	};

	for (int i = 0; i < 6; i++) {
		printf(" %s%s%s\n", BYEL, menu_items[i], RESET);
	}

	printf("\n");
	print_line('-', width);
	printf("\n");
}

int main(void) {
	ENABLE_COLORS();
	bool running = true;
	int width = get_terminal_width();
	
	while (running) {
		display_menu();

		int choice = get_integer_input("Enter your choice (1 - 6): ", 1, 6);

		switch (choice) {
			case 1:
				clear_screen();
				print_centered("Dice Bag", width);
				print_line('-', width);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 2:
				clear_screen();
				print_centered("Deck o' Cards", width);
				print_line('-', width);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 3:
				clear_screen();
				print_centered("Journal", width);
				print_line('-', width);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 4:
				clear_screen();
				print_centered("Map Maker", width);
				print_line('-', width);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 5:
				clear_screen();
				print_centered("Settings", width);
				print_line('-', width);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 6:
				clear_screen();
				print_centered("Exiting Sojourn Buddy", width);
				print_line('-', width);
				printf("\nFarewell, Traveler!\n\n");
				running = false;
				break;
		}
	}

	return 0;
}
