# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>
/* Bai 8 trang 22 SBT LTCBA*/

int giaithua( int bac){
	int l,all = 1;
	for(l = 2;l <= bac; l++)
		all = all*l;
	return all;
}

int main(){
	int n,i;
	float x,sum=0;
printf("Cau a: \n \n \n"); //Tinh S= 1 + x^2 + x^3 ...+ X^n;

		printf("Nhap x: ");
			scanf("%f", &x);
		printf("\nNhap n: ");
			scanf("%d", &n);
				for(i = 0; i <= n; i++ )
				sum = sum + pow(x,i);
	
		printf("\nS= %2.f", sum);
	
printf("\n\n\nCau b: \n \n \n");	//Tinh S = 1 - x + x^2 - x^3 + ...+(-1)^n*x^n
	float tong = 0,y;
	int p,q;
		printf("Nhap y: ");
			scanf("%f", &y);
		printf("\nNhap p: ");
			scanf("%d", &p);
				for(q = 0; q <= p; q++)
				tong = tong + pow(-1,q)*pow(y,q);
		printf("\nS = %.2f", tong);	
printf("\n\n\nCau c: \n \n \n");	//Tinh S = 1 + x/1! + x^2/2! + x^3/3! ...+ x^n/n!
	int min,max;
	float total = 0,z;
		printf("Nhap z: ");
			scanf("%f", &z);
		printf("\nNhap max: ");
			scanf("%d", &max);
				for(min = 0; min <= max; min++)
				total = total + pow(z,min)/giaithua(min);
		printf("\nS = %.2f", total);
	
	
	
	getch();
	return 0;
	
}
