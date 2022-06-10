#include <stdio.h>
#include <string.h>
struct SinhVien {
	int maSV;
	int tuoi;
	char ten[20];
};

int tinhChuViHinhChuNhat(int chieudai, int chieurong) {
	int chuvi;
	chuvi = 2*(chieudai + chieurong);
	return chuvi;
}

void testcontro () {
	printf("\n\nTest ham in con tro");
	int tuoi1 = 20;
	int tuoi2 = 30;

	int *p1, *p2;	
	int *p;				// Khai bao bien con tro ten "p"
	p = &tuoi1;			// Tro toi bien "tuoi"
	*p = 100;
	p = &tuoi2;
	*p = 200;
	p1 = &tuoi2;
	p2 = &tuoi2;
	
	tuoi2 = 99;
	printf("\nGia tri con tro la: %d, Gia tri bien tuoi1 la: %d", *p, tuoi1);
	printf("\n\n Gia tri cua *p1: %d, *p2: %d, *p: %d", *p1, *p2, *p);
}

//int tinhChuViTamGiac(int canhA, int canhB, int canhC) {
//	
//}

int main() {
	char batKi = 'b';		// char: 1 byte = 8 bit
	char gioiTinh = 'M'; 
	char tenBien[] = "Cao Minh";
	printf("Ten toi la: %s, Gioi tinh la: %c", tenBien, gioiTinh);
	
	int chuvihcn = tinhChuViHinhChuNhat(5, 3);
	printf("\n\nChu vi hinh chu nhat: %d", chuvihcn);
	chuvihcn = tinhChuViHinhChuNhat(8, 6);
	printf("\nChu vi hinh chu nhat: %d", chuvihcn);
	
	struct SinhVien sv1, sv2;
	sv1.maSV = 1;
	sv1.tuoi = 19;
	strcpy(sv1.ten, "Minh");
	sv2.maSV = 2;
	sv2.tuoi = 20;
	strcpy(sv2.ten, "Thao");
	
	printf("\n\nMa sinh vien: %d, Ten: %s, Tuoi: %d", sv1.maSV, sv1.ten, sv1.tuoi);
	printf("\nMa sinh vien: %d, Ten: %s, Tuoi: %d", sv2.maSV, sv2.ten, sv2.tuoi);
	
	testcontro();
}

