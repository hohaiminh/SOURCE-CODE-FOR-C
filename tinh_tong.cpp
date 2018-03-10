#include <stdio.h>
#include <conio.h>
#include <math.h>

// Tinh cac tong sau day:

int main(){
	int S1,p,i,n;	
	float S2,S3;
	printf("Nhap vao so phan tu trong day: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		S1 = S1 + i;	//S1 = 1+ 2+ 3+...+n;
	}
	printf("\n Tong cua S1 la: %d",S1);
	
	for(i=1;i<=n;i++){
		S2 = S2 + (float)i/(i+1);
	}
	printf("\n Tong cua S2 la: %.4f", S2);	//S2 = 1/2+ 2/3+...+ n/(n+1)
	
	
	for(i=1;i<=n;i++){
		S3 = S3 + pow(-1,i)*i;	//S3 = -1 + 2 -3 +4 -...+ (-1)^n*n
		
	}
	printf("\n Tong cua S3 la: %.2f", S3);
	return 0;
	
}
