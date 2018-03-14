#include<stdio.h>  
#include<conio.h>  

// Ham Fibonancy
int  Fibo(int n) {
	if(n == 0)
		return 0;
	else if (n==1)
		return 1;
	else 
		return Fibo(n-1) + Fibo(n-2);
		
}

// Tim n nho nhat sao cho tong F(1) + ... +F(n)> S
int main(){
	int total=0,i;
	float s;
	printf("Xin moi nhap S: ");
	scanf("%f", &s);
	for (i=0;total <= s;i++){
		total = total + Fibo(i);
	}
	printf("\nSo i nho nhat can tim la: %d",i-1);
	printf("\nTong day so fibo tu 1 => n la: %d", total);
	return 0;
}
