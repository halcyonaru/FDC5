#include <stdio.h>
void sumArray (int id, int mangSo[]) {
	int i, sum;
	sum = 0;
	for (i = 0; i <= 7; ++i) {
		sum += mangSo[i];
	}
	printf("Tong cac gia tri trong mang so %d: %d\n", id, sum);
}

int main (void) {
	int mangSo1[] = {4,9,6,4,6,77,22};
    int mangSo2[] = {5,99,88,77,66,44,3};
    int mangSo3[] = {54,39,38,77,65,42,13};
	
	sumArray(1, mangSo1);
	sumArray(2, mangSo2);
	sumArray(3, mangSo3);
	
	return 0;
}
