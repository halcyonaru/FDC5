#include <stdio.h>
// 1. Viet ham in cac so vua chia het cho 2, vua chia het cho 7
// 2. Viet ham in cac so chia het cho 2 hoac chia het cho 7
// (Note) So tu 0 - 100

void div1 () {
	printf("Cac so vua chia het cho 2, vua chia het cho 7:");
	int i = 0;
	for ( ; i <= 100; ++i) {
		if (i % 2 == 0 && i % 7 == 0) {
			printf("   %d", i); 
		}
	} 
}

void div2 () {
	printf("\n\nCac so chia het cho 2 hoac chia het cho 7:");
	int i = 0;
	for ( ; i <= 100; ++i) {
		if (i % 2 == 0 || i % 7 == 0) {
			printf("   %d", i); 
		}
	} 
}

int main(void) {
	div1();
	div2();
	getch();
}
