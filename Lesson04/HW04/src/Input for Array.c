#include <stdio.h>
void nhapDuLieu(int *p) {
	int i, j;
	for (i = 0; i <= 5; ++i) {
		for (j = 0; j <= 5; ++j) {
			printf("Nhap gia tri cho phan tu thu [%d]: ", *(p + i));
			scanf("%d", j);
		}
	}
}  

int main (void) {
	int *p;
	int mangSo[5];
	p = mangSo;
	
	nhapDuLieu(p);
	return 0;
}
