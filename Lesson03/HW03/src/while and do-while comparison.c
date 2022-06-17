#include <stdio.h>

// So sanh su khac nhau giua vong lap while & do-while
int main(void) {
	int i = 5;
	do {
		printf("== Test vong lap do-while ==");
	} while (i < 5);
	while (i < 5) {
		printf("\nTest vong lap while");
	}
	return 0;
}
