#include <stdio.h>
int tinhChuViHinhChuNhat(int chieudai, int chieurong) {
	int chuvi;
	chuvi = 2*(chieudai + chieurong);
	printf("Chu vi hinh chu nhat co canh (%d, %d) la: %d\n", chieudai, chieurong, chuvi);
	return chuvi;
}

int tinhChuViTamGiac(int canhA, int canhB, int canhC) {
	int chuvi3;
	chuvi3 = canhA + canhB + canhC;
	printf("Chu vi hinh tam giac co canh (%d, %d, %d): %d\n", canhA, canhB, canhC, chuvi3);
	return chuvi3;
}

int main() {
	int chuvihcn = tinhChuViHinhChuNhat(8, 6);
	int chuvihinhchunhat = tinhChuViHinhChuNhat(5, 3);
	int chuvitg = tinhChuViTamGiac(3, 4, 5);
	int chuvitamgiac = tinhChuViTamGiac(4, 5, 6);
	return 0;
}
