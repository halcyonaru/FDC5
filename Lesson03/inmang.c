#include <stdio.h>
void printArray() {
	int mangso[] = {6, 0, 9, 8, 6, 4, 5};
	printf("Cac gia tri cua mang so:\n");
	int i = 0;
	for ( ; i < 8; ++i) {
		printf("Gia tri tai mangso[%d]: %d\n", i, mangso[i]);
	}
}

int main(void) {
	printArray();
	return 0;
}
