#include <stdio.h>
void GTLN_mang (int *p, int sophantucuamang) {
	int max = *p;
	int i = 0;
	for ( ; i < sophantucuamang; ++i) {
		if (max < *(p + i)) {
			max = *(p + i);
		}
	}
	printf("\nGia tri lon nhat cua mang: %d", max);
}

void TongGT_mang (int *p, int sophantucuamang) {
	int sum = *p;
	int i = 0;
	for ( ; i < sophantucuamang; ++i) {
		sum += *(p + i);
	}
	printf("\nTong gia tri cua mang: %d", sum);
}

int main(void) {
	int mang[10];
	  	mang[0]=5; mang[1]=51; mang[2]=25; mang[3]=15; mang[4]=55; mang[5]=15;
	  	mang[6]=56; mang[7]=57; mang[8]=50; mang[9]=53; mang[10]=52;
  	int n = sizeof(mang) / sizeof(int);
  	int *p1, *p2;
  	p1 = mang;
  	p2 = mang;
  	
  	GTLN_mang (p1, n);
	TongGT_mang (p2, n);
  	
  	return 0;
}
