# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include<stdio.h>
#include<conio.h>

/* Dem so chu so cua so nguyen duong N*/
/*Bai 5 trang 17 SBT LTCBA*/

int main(){
	int n,count,p;
	printf("nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	while(n){
		n=n/10;
		count++;
	}
	printf("\nSo chu so cua n: %d",count);
	getch();
	return 0;
}
