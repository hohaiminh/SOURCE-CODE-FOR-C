# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>

/* Nhap vao so phut, sau do in ra tong so gio va phut tuong ung*/
/* Bai 14 trang 6 SBT LTCBA*/

int main(){
	unsigned int gio,phut,phut_le;
	printf("\nNhap vao so phut: ");	
	scanf("%d", &phut);
	gio = phut/60;
	phut_le= phut - gio*60;
	printf("%d phut = %d gio va %d phut", phut,gio,phut_le);
	return 0;
}
