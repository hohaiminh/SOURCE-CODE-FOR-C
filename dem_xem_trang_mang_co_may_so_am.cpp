#include <stdio.h>
#include <conio.h>


// Dem xem trong mang co bao nhieu so am
// Bai tap 6 trang 26
int main(){
	int n,dem=0,i,a[1000];
	printf("So phan tu can nhap vao la: ");
	scanf("%d", &n);
	printf("\n Nhap vao cac so thuc: ");
	for(i=0;i<=n-1;i++){
		printf(" \na[%d]=  ", i+1);
		scanf("%d", &a[i]);
	}
	for (i=0;i<=n-1;i++)
		if(a[i]<0)
			dem++;
			
	printf("\n So luong so nguyen am co trong mang la: %d", dem);
	return 0;		
		
	
	
}
