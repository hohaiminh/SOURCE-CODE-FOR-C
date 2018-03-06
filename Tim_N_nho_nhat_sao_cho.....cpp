# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>

// Tim N sao cho 1 + 1/2 +....+ 1/N > s
/* BAI TAP 6 TRANG 17 SBT LTCBA*/
int main() {
	int n;
	float s, tong=0;
	printf("Xin moi nhap S: ");
	scanf("%f", &s);
	for (n = 1;tong < s; n++){
		tong = tong + (1.0/n);
	}
	printf("\nSo n can tim la: %d ", n-1);
	printf("\nVoi tong la: %.2f", tong);
	getch();
	return 0;
}
