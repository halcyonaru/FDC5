#include <stdio.h>
void nhapDuLieu (int *p) {		// Chu y: Trong lap trinh C, tham so cua ham la con tro thi co the truyen vao mot mang
	int i = 0;
	for ( ; i <= 5; ++i) {
		printf("Nhap gia tri cho phan tu thu [%d]: ", i);
		scanf("%d", (p+i));
	}
}

void inMang (int mangSo[]) {
	int i = 0;
	for ( ; i <= 5; ++i) {
		printf("\nGia tri cua phan tu thu [%d] cua mang: %d", i, mangSo[i]);
	}
}

int main (void) {
	int *p;
	int mangSo[5];
	p = mangSo;
	
	nhapDuLieu(p);		// Co the truyen mang so hoac bien con tro
	inMang(mangSo);
	
	return 0;
}
