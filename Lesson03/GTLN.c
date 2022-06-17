#include <stdio.h>
void printArray(int mangso[]) {	
	int i = 0;
	int n = 6;
	printf("\nMang nay co %d phan tu\n", n);
	printf("\n== Cac gia tri cua mang so ==\n");
	for ( ; i < n; ++i) {
		printf("Gia tri tai mangso[%d]: %d\n", i, mangso[i]);
	}
}

void InGiaTriChanCuaMang (int mangso[], int sophantucuamang) {
	int i = 0;
	printf("\n\n++ Cac gia tri chan cua mang ++\n");
	for ( ; i < sophantucuamang; ++i) {
		if (mangso[i] % 2 == 0) {
			printf("Gia tri tai mangso[%d]: %d\n", i, mangso[i]);
		}
	}
}

void InGiaTriLeCuaMang (int mangso[], int sophantucuamang) {
	int i = 0;
	printf("\n\n++ Cac gia tri le cua mang ++\n");
	for ( ; i < sophantucuamang; ++i) {
		if (mangso[i] % 2 != 0) {
			printf("Gia tri tai mangso[%d]: %d\n", i, mangso[i]);
		}
	}
}

void GTLN_mang (int mangso[], int sophantucuamang) {
	int i = 0;
	int max = 0;
	max = mangso[0];
	for (i = 0; i < sophantucuamang; ++i) {
		if (mangso[i] > max) {
			max = mangso[i];
		}
	}
	printf("\nGia tri lon nhat cua mang: %d", max);
}

void GTNN_mang (int mangso[], int sophantucuamang) {
	int i = 0;
	int min = 0;
	min = mangso[0];
	for (i = 0; i < sophantucuamang; ++i) {
		if (mangso[i] < min) {
			min = mangso[i];
		}
	}
	printf("\n\nGia tri nho nhat cua mang: %d", min);
}

int main(void) {
	int mangso[] = {4, 6, 3, 9, 8, 6};
	int mangso2[] = {11, 25, 15, 49, 70, 72, 75};
	int mangso3[] = {1, 2, 3, 4, 5};
	printArray(mangso);
	printArray(mangso2);
	printArray(mangso3);
	
	InGiaTriChanCuaMang(mangso, 6);
	InGiaTriChanCuaMang(mangso2, 7);
	InGiaTriChanCuaMang(mangso3, 5);
	
	InGiaTriLeCuaMang(mangso, 6);
	InGiaTriLeCuaMang(mangso2, 7);
	InGiaTriLeCuaMang(mangso3, 5);
	
	GTLN_mang (mangso, 6);
	GTLN_mang (mangso2, 7);
	GTLN_mang (mangso3, 5);
	
	GTNN_mang (mangso, 6);
	GTNN_mang (mangso2, 7);
	GTNN_mang (mangso3, 5);
	
	return 0;
}
