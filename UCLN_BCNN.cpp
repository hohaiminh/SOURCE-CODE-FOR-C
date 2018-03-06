# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int a, b, i, ucln, bcnn;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	for(i = 1; i <= a || i <= b; i++){
		if (a%i==0 && b%i==0)
		ucln = i;
	}
	printf("\nUoc chung lon nhat cua a va b la: %d", ucln);
	bcnn = (a*b)/ucln;
	printf("\nBoi so chung nho nhat cua a va b la: %d", bcnn);
	
   getch();
   return 0;
}
