#include <stdio.h>
#include <string.h>
// Ngoai cac bien thong thuong con bien cau truc
// Bien cau truc, bien kieu nhom, kieu gop.
typedef struct SinhVien {
	int id;
	char name[30];
	int age;
}std;

int main(void) {
	std s1, s2, s3;
	s1.id = 1;
	s1.age = 18;
	strcpy(s1.name, "Tran Thuy Vi");
	
	s2.id = 2;
	s2.age = 20;
	strcpy(s2.name, "Van The Minh");
	
	printf("Ma sinh vien: %d; Ten: %s; Tuoi: %d", s1.id, s1.name, s1.age);
	printf("\nMa sinh vien: %d; Ten: %s; Tuoi: %d", s2.id, s2.name, s2.age);
	
	return 0;
}
