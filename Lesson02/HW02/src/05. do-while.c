#include <stdio.h>
// (*) Dung vong lap do - while:
// 1. In cac so chia het cho 3 tu 0 -> 30
// 2. In cac so chia het cho 4 va cho 5 tu 0 -> 50
// 3. 2. In cac so chia het cho 5 va cho 7 tu 0 -> 100

void ddiv3() {
	printf("Cac so chia het cho 3 tu 0 -> 30:");
	int i = 0;
	do {
		++i;
		if (i % 3 == 0) {
			printf("   %d", i);
		}
	} while (i <= 30);
}

void ddiv4_5() {
	printf("\n\nCac so chia het cho 4 va 5 tu 0 -> 50:");
	int i = 0;
	do {
		++i;
		if (i % 4 == 0 && i % 5 == 0) {
			printf("   %d", i);
		}
	} while (i <= 50);
}

void ddiv5_7() {
	printf("\n\nCac so chia het cho 5 va 7 tu 0 -> 100:");
	int i = 0;
	do {
		++i;
		if (i % 5 == 0 && i % 7 == 0) {
			printf("   %d", i);
		}
	} while (i <= 100);
}

int main(void) {
	ddiv3();
	ddiv4_5();
	ddiv5_7();
	getch();
}
