#include <stdio.h>
#include <string.h>

void Toantu3ngoi(int n) {
	char msg;
	char str1[8] = "so chan";
	char str2[6] = "so le";
	printf("So ban vua nhap la%c", msg);
	msg = (n % 2 == 0) ? puts(str1) : puts(str2);
}

int main(void) {
	int n;
	printf("Moi ban nhap mot so nguyen bat ki: ");
	scanf("%d", &n);
	Toantu3ngoi (n);
	return 0;
}
