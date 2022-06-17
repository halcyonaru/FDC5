#include <stdio.h>

void TongGT_mang (int mangso[], int sophantucuamang) {
	int i = 0;
	int sum = 0;
	for ( ; i < sophantucuamang; ++i) {
		sum += mangso[i];
	}
	printf("Tong gia tri cua mang: %d", sum);
}

void TongphantuLe (int mangso[], int sophantucuamang) {
	int i = 0;
	int osum = 0;
	for ( ; i < sophantucuamang; ++i) {
		if (mangso[i] % 2 != 0) {
			osum += mangso[i];
		}
	}
	printf("\n\nTong gia tri cac phan tu le trong mang: %d\n", osum);
}

void testToantu3ngoi(int tuoi) {
	char theloai = 'O';
	theloai = tuoi >= 20 ? 'Y':'N';
	printf("Trang thai duoc ket hon la: %c", theloai);
}

int main(void) {
	int mangso[] = {1, 2, 3, 4, 5};
	TongGT_mang (mangso, 5);
	TongphantuLe (mangso, 5);
	testToantu3ngoi(18);
	return 0;
}
