#include <stdio.h>
// (*) Dung vong lap while:
// 1. In cac so chia het cho 3 tu 0 -> 30
// 2. In cac so chia het cho 4 va cho 5 tu 0 -> 50
// 3. 2. In cac so chia het cho 5 va cho 7 tu 0 -> 100

void div3() {
	printf("Cac so chia het cho 3 tu 0 -> 30:");
	int i = 0;
	while (i <= 30) {
		++i;
		if (i % 3 == 0) {
			printf("   %d", i);
		}
	}
}

void div4_5() {
	printf("\n\nCac so chia het cho 4 va 5 tu 0 -> 50:");
	int i = 0;
	while (i <= 50) {
		++i;
		if (i % 4 == 0 && i % 5 == 0) {
			printf("   %d", i);
		}
	}
}

void div5_7() {
	printf("\n\nCac so chia het cho 5 va 7 tu 0 -> 100:");
	int i = 0;
	while (i <= 100) {
		++i;
		if (i % 5 == 0 && i % 7 == 0) {
			printf("   %d", i);
		}
	}
}

int main(void) {
	div3();
	div4_5();
	div5_7();
	getch();
}
