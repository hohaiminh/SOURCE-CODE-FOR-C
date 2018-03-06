# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>

/*Mo phong phep chia nguyen DIV*/
/*Bai 12 trang 14 SBT LTCBA*/

int main(){
	int a,b,hieu=0,count=0;
	printf("Nhap vao 2 so a va b: ");
	scanf("%d %d", &a, &b);
	if(a>b){
		hieu = a;
		while(hieu >= b){
			hieu = hieu -b;
			count++;
		}
		
	}else 
		printf("\nMoi nhap lai");
	printf("\n\t=>Tri cua phep chia nguyen: %d",count);
	return 0;
}
