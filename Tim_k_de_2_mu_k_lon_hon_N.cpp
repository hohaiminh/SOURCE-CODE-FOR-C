# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	unsigned int n,k;
	printf("\n Nhap vao mot so nguyen duong N: ");
	scanf("%d", &n);
	k = 0;
	while (pow(2,k) < n){
		k++;
	}
	printf("\nSo k nho nhat de 2^k > %d la: %d", n , k);
	getch();
	return 0;
	
}
