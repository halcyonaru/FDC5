#include <stdio.h>
void printArray(int mangso[], int sophantucuamang) {
	printf("== Cac gia tri cua mang so ==\n");
	int i = 0;
	for ( ; i < sophantucuamang; ++i) {
		printf("Gia tri tai mangso[%d]: %d\n", i, mangso[i]);
	}
}

int main(void) {
	int mangso[] = {4, 6, 3, 9, 8, 6};
	int sophantucuamang = sizeof(mangso) / sizeof(int);
	printf("So phan tu cua mang: %d\n\n", sophantucuamang);
	printArray(mangso, sophantucuamang);
	return 0;
}
