#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../include/dice.h"
#include "../include/cards.h"
#include "../include/journal.h"
#include "../include/map_editor.h"
#include "../include/settings.h"
#include "../include/utils.h"

int main(void) {
	char choice[10];
	bool running = true;

	while (running) {
		clear_screen();

		printf("Sojourn Buddy: Your Solo Journaling RPG Toolbox!\n");
		printf("||============================================||\n\n");
		printf("1. Dice Bag\n");
		printf("2. Card Deck\n");
		printf("3. Journal\n");
		printf("4. Map Maker\n");
		printf("5. Settings\n");
		printf("6. Exit\n\n");
		printf("Enter your choice (1-6): ");

		get_input(choice, sizeof(choice));

		switch (atoi(choice)) {
			case 1:
				printf("Roll some dice - Coming soon!\n");
				printf("Press Enter to return.");
				get_input(choice, sizeof(choice));
				break;
			case 2:
				printf("Draw some cards - Coming soon!\n");
				printf("Press Enter to return.");
				get_input(choice, sizeof(choice));
				break;
			case 3:
				printf("Write some words - Coming soon!\n");
				printf("Press Enter to return.");
				get_input(choice, sizeof(choice));
				break;
			case 4:
				printf("Make a map - Coming soon!\n");
				printf("Press Enter to return.");
				get_input(choice, sizeof(choice));
				break;
			case 5:
				printf("Settings - Coming soon!\n");
				printf("Press Enter to return");
				get_input(choice, sizeof(choice));
				break;
			case 6:
				printf("Exiting Sohourn Buddy\n");
				printf("Press Enter to return");
				get_input(choice, sizeof(choice));
				break;
			default:
				printf("Invalid choice.\n");
				printf("Press Enter to return");
				get_input(choice, sizeof(choice));
				break;
		}
	}

	return 0;
}
