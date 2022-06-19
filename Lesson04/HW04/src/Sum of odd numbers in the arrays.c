#include <stdio.h>
void printOddSum (int id, int mangSo[], int sophantucuamang) {
	int sum = 0;
	printf("== Cac gia tri le cua mang so %d ==\n", id);
	int i = 0;
	for ( ; i <= sophantucuamang; ++i) {
		if (i % 2 != 0) {
			printf("%d\t", mangSo[i]);
			sum += mangSo[i];
		}
	}
	printf("\nTong cac gia tri le cua mang so: %d\n", sum);
}

int main (void) {
	int mangSo1[] = {4,9,6,4,6,77,22};    
	int mangSo2[] = {5,99,88,77,66,44,3};
    int mangSo3[] = {54,39,38,77,65,42,13};
	
	int sophantucuamang1 = sizeof(mangSo1) / sizeof(int);
	int sophantucuamang2 = sizeof(mangSo2) / sizeof(int);
	int sophantucuamang3 = sizeof(mangSo3) / sizeof(int);
	
	printOddSum(1, mangSo1, sophantucuamang1);
	printOddSum(2, mangSo2, sophantucuamang2);
	printOddSum(3, mangSo3, sophantucuamang3);
	
	return 0;
}
