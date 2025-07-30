#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../include/dice.h"
#include "../include/cards.h"
#include "../include/journal.h"
#include "../include/map_editor.h"
#include "../include/settings.h"
#include "../include/utils.h"

#define MENU_WIDTH 60

void display_menu(void) {
	clear_screen();

	print_line('=', MENU_WIDTH);
	print_centered("Sojourn Buddy: Your Solo TTRPG Assistant", MENU_WIDTH);
	print_line('=', MENU_WIDTH);
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
		printf(" %s\n", menu_items[i]);
	}

	printf("\n");
	print_line('-', MENU_WIDTH);
	printf("\n");
}

int main(void) {
	bool running = true;

	while (running) {
		display_menu();

		int choice = get_integer_input("Enter your choice (1 - 6): ", 1, 6);

		switch (choice) {
			case 1:
				clear_screen();
				print_centered("Dice Bag", MENU_WIDTH);
				print_line('-', MENU_WIDTH);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 2:
				clear_screen();
				print_centered("Deck o' Cards", MENU_WIDTH);
				print_line('-', MENU_WIDTH);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 3:
				clear_screen();
				print_centered("Journal", MENU_WIDTH);
				print_line('-', MENU_WIDTH);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 4:
				clear_screen();
				print_centered("Map Maker", MENU_WIDTH);
				print_line('-', MENU_WIDTH);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 5:
				clear_screen();
				print_centered("Settings", MENU_WIDTH);
				print_line('-', MENU_WIDTH);
				printf("\nCOMING SOON!");
				get_string_input(NULL, 0, "Press enter to return...");
				break;
			case 6:
				clear_screen();
				print_centered("Exiting Sojourn Buddy", MENU_WIDTH);
				print_line('-', MENU_WIDTH);
				printf("\nFarewell, Traveler!\n\n");
				running = false;
				break;
		}
	}

	return 0;
}
