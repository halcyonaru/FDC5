#include <stdio.h>
void Div3() {
	int a;
	printf("Cac so chia het cho 3: ");
	for (a = 0; a < 23; ++a) {
		if (a%3 == 0) {
			printf("  %d  ", a);
		}
	}
}

void D3() {
	int i = 0;
	while (i < 30) {
		i++;
		if (i%3 == 0) {
			printf("\nSo %d chia het cho 3", i);
		}
	}
}

int main(void) {
	Div3();
	D3();
	
	return 0;
}
