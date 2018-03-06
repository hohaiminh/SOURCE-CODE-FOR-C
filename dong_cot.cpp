# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
/* Nhap vao so dong, in ra duoi dang kim tu thap*/
/*Bai 10 trang 14 SBT LTCBA*/
int main(){
	int cot,dong,n,i;
	printf("Nhap vao so dong: ");
	scanf("%d",&n);
	dong =1;
	cot=1;
	while(dong <= n){
		printf("\n");
		i = 1;
		while(i<=dong){
			printf("%d",cot);
			i++;
		}
		
		cot++;
		dong++;
	}
	
	return 0;
}
