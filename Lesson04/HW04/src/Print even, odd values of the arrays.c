#include <stdio.h>
void printOddNumbers(int id, int mangSo[], int sophantucuamang) {
	printf("== Cac gia tri le cua mang so %d ==\n", id);
	int i = 0;
	for ( ; i <= sophantucuamang; ++i) {
		if (i % 2 != 0) {
			printf("%d\t", mangSo[i]);
		}
	}
	printf("\n");
}

void printEvenNumbers(int id, int mangSo[], int sophantucuamang) {
	printf("== Cac gia tri chan cua mang so %d ==\n", id);
	int i = 0;
	for ( ; i <= sophantucuamang; ++i) {
		if (i % 2 == 0) {
			printf("%d\t", mangSo[i]);
		}
	}
	printf("\n");
}

int main (void) {
	int mangSo1[] = {4,9,6,4,6,77,22} ;
    int mangSo2[] = {5,99,88,77,66,44,3};
    int mangSo3[] = {54,39,38,77,65,42,13};

	int sophantucuamang1 = sizeof(mangSo1) / sizeof(int);
	int sophantucuamang2 = sizeof(mangSo2) / sizeof(int);
	int sophantucuamang3 = sizeof(mangSo3) / sizeof(int);
	
	printOddNumbers(1, mangSo1, sophantucuamang1);
	printEvenNumbers(1, mangSo1, sophantucuamang1);
	printOddNumbers(2, mangSo2, sophantucuamang2);
	printEvenNumbers(2, mangSo2, sophantucuamang2);
	printOddNumbers(3, mangSo3, sophantucuamang3);
	printEvenNumbers(3, mangSo3, sophantucuamang3);
	
	return 0;
}
