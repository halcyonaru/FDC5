#include <stdio.h>

void testToanTu() { 

   int i=0;
   i++;
   int j=0;
   printf("\n gia tri i = %d ", i);    // i =1 
   printf("\n gia tri i = %d ", i++);   // i = 2 ; 
   printf("\n gia tri i = %d ", i);
   printf("\n gia tri j = %d ", ++j);   // j = 1 ;
   printf("\n gia tri j = %d ", j);   // j = 1;
   
} 

int main() {
	testToanTu();
}
