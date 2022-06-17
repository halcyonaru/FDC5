#include <stdio.h>
#include <stdlib.h>
// Ham scanf thuong dung de doc du lieu dau vao
// Chu "f" trong "scanf" viet tat cho tu "format", hay "dinh dang", co y nghia "dinh dang dau vao"

void Menu();
int MenuChooser();
void MenuHandler();

// Loai du lieu so nguyen: %d - digit
void digitInput() {
	fflush(stdin);
	int a;
	printf("Nhap 1 so nguyen bat ki: ");
	scanf("%d", &a);
	printf("So vua nhap la: %d", a);
}

// Loai du lieu so: %c - character
void characterInput() {
	fflush(stdin);
	char b;
	printf("Nhap mot chu cai: \n");
	scanf("%c", &b);
	printf("Chu cai vua nhap la: %c", b);
}

// Loai du lieu so thuc: %f - float
void floatInput() {
	fflush(stdin);
	float c;
	printf("Nhap mot so thuc bat ki: \n");
	scanf("%f", &c);
	printf("So thuc vua nhap la: %f", c);
}

// Loai du lieu so thuc do chinh xac cao: %lf - double
void doubleInput() {
	fflush(stdin);
	double d;
	printf("Nhap mot so thuc bat ki: \n");
	scanf("%lf", &d);
	printf("So thuc vua nhap la: %lf", d);
}

void Menu() {
	printf("=================MENU================\n");
	printf("1. In du lieu kieu digit\n");
	printf("2. In du lieu kieu char\n");
	printf("3. In du lieu kieu float\n");
	printf("4. In du lieu kieu double\n");
	printf("5. Thoat chuong trinh\n");
	printf("=====================================\n");
}

int MenuChooser() {
	int n = 0;
	printf("\nMoi chon menu: ");
	scanf("%d", &n);
	if (n > 0 || n < 5)
		return n;
	else return MenuChooser();
}

void MenuHandler() {
	int choice = MenuChooser();
	switch (choice) {
		case 1:
			digitInput();
			break;
		case 2:
			characterInput();
			break;
		case 3:
			floatInput();
			break;
		case 4:
			doubleInput();
			break;
		case 5:
			exit(1);
			break;
		default:
			printf("Moi ban chon dung chuong trinh chay (1 - 5)");
			MenuChooser();
			break;
	}
}

int main (void) {
	Menu();
	while (1) {	
		MenuHandler();
	}
	getch();
}
