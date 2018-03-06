# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Nhap vao so gio va so phut, in ra tong so phut tuong ung*/
/* Bai 13 trang 6 SBT LTCBA */

int main(){
	unsigned int gio,phut,tong;
	printf("Nhap vao so gio: ");	
	scanf("%d", &gio);
	printf("\nNhap vao so phut: ");	
	scanf("%d", &phut);
	 
	tong = gio*60 + phut;
	printf("\nTong so phut: %d", tong);
	return 0;
}
