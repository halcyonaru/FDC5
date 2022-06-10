#include <stdio.h>
#include <stdbool.h>		// Dat them ham de hoat dong voi bien bool

// Mot so kieu du lieu co ban trong C gom:
// bool, char, int, float, double, void

// Integer co the su dung lam kieu bien cho mot ham
int tinhChuViHinhChuNhat(int chieudai, int chieurong) {
	int chuvi;
	chuvi = 2*(chieudai + chieurong);
	printf("Chu vi hinh chu nhat co canh (%d, %d) la: %d", chieudai, chieurong, chuvi);
	return chuvi;
}

// Void la kieu bien khong xac dinh san gia tri
// Ham void duoc su dung lam kieu bien khi khoi tao ham
void printNum(int num){
    printf("\nIn so dung ham void: %d\n", num);
}

typedef enum { F, T } boolean;

int main() {
	// Kieu bien boolean the hien hai gia tri: True/False hay 1/0
	printf("\t=== Bool ===");
	boolean bool1, bool2;
    bool1 = F;
  
    if (bool1 == F) {
        printf("\nbool1 co gia tri false");
    }
    else {
        printf("\nbool1 co gia tri true");
    }
    bool2 = 2;
    if (bool2 == F) {
        printf("\nbool2 co gia tri false");
    }
    else {
        printf("\nbool2 co gia tri true");
	}
	
	// Kieu ky tu: char
	printf("\n\n\t=== Char ===");
	char batKi = 'b';
	char gioiTinh = 'M'; 
	char tenBien[] = "Cao Minh";
	printf("\nTen toi la: %s, Gioi tinh la: %c", tenBien, gioiTinh);
	
	// Kieu so nguyen: int
	printf("\n\n\t=== Integer ===");
	int tuoi = 17;
	int diemToan = 8;
	printf ("\nTuoi hoc sinh: %d; Diem thi mon Toan: %d; ", tuoi, diemToan);
	int chuvihcn = tinhChuViHinhChuNhat(8, 6);

	// Kieu so thuc: float
	printf("\n\n\t=== Float ===");
	float bookprice = 29.95;
	float gdp_raise_q1 = 5.03;
	float calc = 57.25 + 15.645;
	printf("\nGia niem yet sach <Alice in Wonderland>: %g", bookprice);
	printf("\nTang truong GDP Vietnam Q1/2022: %g", gdp_raise_q1);
	printf("\nKet qua phep tinh: %f", calc);
	
	// Kieu bien Double
	printf("\n\n\t=== Double ===");
	double y = 4244.546;
	printf("\nGia tri bien double: %lf", y);
	
	// So sanh voi kieu so thuc float
	float z = 4244.546;
	printf("\nGia tri bien float: %f", z);
	printf("\n\nKich co cua kieu du lieu float la: %d", sizeof(float));
   	printf("\nKich co cua kieu du lieu double la: %d", sizeof(double));
	
	// Khai bao ham void trong main
	printf("\n\n\t=== Void ===");
	printNum (222);
	return 0;
}
