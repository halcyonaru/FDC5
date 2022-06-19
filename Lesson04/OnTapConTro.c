#include <stdio.h>

int main(void) {
	int mang[10];
	  	mang[0]=5; mang[1]=51; mang[2]=25; mang[3]=15; mang[4]=55; mang[5]=15;
	  	mang[6]=56; mang[7]=57; mang[8]=50; mang[9]=53; mang[10]=52;
  	
  	int *pm1, *pm2;
  	int *p;
  	p = pm1 = mang;
  	// pm1 = &mang[0];
  	pm2 = &mang[2];
  	int n = sizeof(mang) / sizeof(int);
  	
  	printf("In gia tri bien con tro pm1: %d\n", *pm1);
  	printf("In gia tri bien con tro pm2: %d\n", *pm2);
  	printf("In gia tri bien con tro (pm1+1): %d\n", *(pm1+1));
  	printf("In gia tri bien con tro (pm2+1): %d\n", *(pm2+1));
  	printf("In gia tri bien con tro (pm2-1): %d\n", *(pm2-1));
  	
  	int i = 0;
  	for ( ; i <= n; ++i) {
  		printf("\nHien thi mang p[%d] = %d", i, *(p+i));
	}
  	return 0;
}
