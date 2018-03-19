#include <stdio.h>
#include <conio.h>

 // Chuong trinh dao nguoc vi tri cac gia tri nhap vao
// Bai tap 8 trang 26
int main(){
	int n,dem=0,i,a[1000];
	printf("So phan tu can nhap vao la: ");
	scanf("%d", &n);
	printf("\n Nhap vao cac so thuc: ");
	for(i=0;i<=n-1;i++){
		printf(" \na[%d]=  ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n Cac gia tri khi nhap xong la: ");
	for(i=0;i<=n-1;i++){
		printf(" %4d",a[i]);
	}
	printf("\n\n\n Dao nguoc vi tri cac gia tri nhap vao: ");
	for(i=i-1;i>=0;i--){
		printf("%4d", a[i]);
	}
	getch();
	return 0;		
			
}
