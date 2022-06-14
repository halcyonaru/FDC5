#include <stdio.h>
// Ham in cac so le tu 0 -> 30

void oddNum () {
	int i = 0;
	printf("Cac so le tu 0 -> 30:");
	for ( ; i <= 30; ++i) {
		if (i % 2 != 0) {
			printf("   %d", i);
		} 
	}	
}

int main(void) {
	oddNum();
	return 0;
}
