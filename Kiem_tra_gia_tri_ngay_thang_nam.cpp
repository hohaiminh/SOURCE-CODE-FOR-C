# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <math.h>
#include <conio.h>

/* Kiem tra xem gia tri ngay thang nam co hop le ko ????*/

/* bai tap 7 trang 9 SBT LTCBA */

int main(){
	unsigned int ngay,thang,nam;
	printf("Nhap vao ngay: ");
	scanf("%d", &ngay);
	printf("\nNhap vao thang: ");
	scanf("%d", &thang);
	printf("\nNhap vao nam: ");
	scanf("%d",&nam);
	if(ngay == 31 && thang <=12){
		switch(thang){
			case 2:
			case 4:
			case 6:
			case 9:
			case 11:
				printf("\nLoi");
				break;
			default:
				printf("\nNgay %d thang %d nam %d",ngay,thang,nam);		
		}
	} else  if(ngay == 30 && thang <= 12){
		switch(thang){
			case 2:
				printf("\nLoi");
				break;
			default:
				printf("\nNgay %d thang %d nam %d",ngay,thang,nam);
		}
	} else if(ngay <= 31 && thang <=12){
		printf("\nNgay %d thang %d nam %d",ngay,thang,nam);
	} else
		printf("\nMoi ngap lai ngay thang nam");
		
	return 0;
	
}
