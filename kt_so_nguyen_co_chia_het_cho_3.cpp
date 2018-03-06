# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản


#include <stdio.h>
#include <conio.h>
#include <math.h>
/* Kiem tra so nhap vao co chia het cho 3 hay khong su dung de quy*/
/* Bai11 trang 22 SBT LTCBA*/
int kt(int n){
	int i,total=0;
	
	while(n != 0){
		i = n%10;
		total = total + i;
		n = n/10;
	}
	return total;
	
}

int main(){
	unsigned int n,i;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	printf("\nTong cac chu so cua N  la:  %d", kt(n));
	if(kt(n)%3){
		printf("\nSo do ko chia het cho 3");
		
	} else
		printf("\nSo do chia het cho 3");
		return 0;
}
