#include <stdio.h>
int tinhChuViHinhChuNhat(int chieudai, int chieurong) {
	int chuvi;
	chuvi = 2*(chieudai + chieurong);
	printf("Chu vi hinh chu nhat co canh (%d, %d) la: %d", chieudai, chieurong, chuvi);
	return chuvi;
}

int tinhChuViTamGiac(int canhA, int canhB, int canhC) {
	int chuvi3;
	chuvi3 = canhA + canhB + canhC;
	printf("\nChu vi hinh tam giac co canh (%d, %d, %d): %d", canhA, canhB, canhC, chuvi3);
	return chuvi3;
}

int main() {
	int chuvihcn = tinhChuViHinhChuNhat(8, 6);
	int chuvitg = tinhChuViTamGiac(3, 4, 5);
	return 0;
}
