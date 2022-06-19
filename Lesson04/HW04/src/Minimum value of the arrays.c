#include <stdio.h>
void GTNN_mang (int id, int mangso[], int sophantucuamang) {
	int i = 0;
	int min = 0;
	min = mangso[0];
	for (i = 0; i < sophantucuamang; ++i) {
		if (mangso[i] < min) {
			min = mangso[i];
		}
	}
	printf("Gia tri nho nhat cua mang thu %d la: %d\n", id, min);
}

int main(void) {
	int mangSo1[] = {4,9,6,4,6,77,22};
    int mangSo2[] = {5,99,88,77,66,44,3};
    int mangSo3[] = {54,39,38,77,65,42,13};

	int sophantucuamang1 = sizeof(mangSo1) / sizeof(int);
	int sophantucuamang2 = sizeof(mangSo2) / sizeof(int);
	int sophantucuamang3 = sizeof(mangSo3) / sizeof(int);
	
	GTNN_mang (1, mangSo1, sophantucuamang1);
	GTNN_mang (2, mangSo2, sophantucuamang2);
	GTNN_mang (3, mangSo3, sophantucuamang3);
	
	return 0;
}
