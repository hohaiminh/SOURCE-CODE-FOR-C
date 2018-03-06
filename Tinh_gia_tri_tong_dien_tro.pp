# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>

/* Nhap vao 3 gia tri dien tro va tinh gia tri cua tong tro*/
/* Bai 15 trang 6 SBT LTCBA*/

int main(){
	float R1,R2,R3,R;
	printf("Nhap vao gia tri cua dien tro R1: ");
	scanf("%f", &R1);
	printf("\nNhap vao gia tri cua dien tro R2: ");
	scanf("%f", &R2);
	printf("\nNhap vao gia tri cua dien tro R3: ");
	scanf("%f", &R3);
	R = (R2*R3 + R1*R3 + R2*R1)/(R1*R2*R3);
	printf("\nDien tro tong la: %.6f ", 1/R);
	return 0;
	
}
