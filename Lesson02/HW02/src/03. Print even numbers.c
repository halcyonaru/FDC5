#include <stdio.h>
// 1. Ham in cac so chan tu 0 -> 30
// 2. Ham in cac so chia het cho 3 tu 3 -> 100

void inSoChan () {
	printf("Cac so chan tu 0 -> 30:");
	int i = 0;
	for ( ; i <= 30; ++i) {
		if (i % 2 == 0) {
			printf("   %d", i);
		} 
	}	
}

void soChiaHetCho3 () {
	printf("\n\nCac so chia het cho 3 tu 3 -> 100:");
	int i = 3;
	for ( ; i <= 100 ; ++i) {
		if (i % 3 == 0) {
			printf("   %d", i);
		}
	}
}

int main(void) {
	inSoChan();
	soChiaHetCho3 ();
	getch();
}
