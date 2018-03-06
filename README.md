# SOURCE-CODE-FOR-C
Bài toán họ nhà thỏ bằng đệ quy trong C

#include<stdio.h>  
#include<conio.h>  

// khai bao ham indayFibonacci
int  F(int n) {
	if(n == 0)
		return 0;
	else if (n==1)
		return 1;
	else 
		return F(n-1) + F(n-2);
		
}
int main() {
	int n,i;
	printf("Nhap vao so phan tu trong day fibonacci: ");
	scanf("%d", &n);
	for (i =0 ; i<= n; i++) {
		printf("\n so thu %d la: %d",i, F(i));
	}
	getch();
	return 0;
}
