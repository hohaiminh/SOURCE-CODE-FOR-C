#include <stdio.h>
#include <conio.h>


// Su dung mang de doi tu co so 10 ==> co so 2

int main(){
	unsigned n,sodu[50];
	int k;
	printf("Nhap vao so nguyen duong N: ");
	scanf("%d", &n);
	for(k=0;n>0;k++){		
		sodu[k] = n%2;
		n = n/2;		
	}
	printf("\n Dang nhi phan cua so N la: ");
	for(k=k-1;k>=0;k--){
		printf("%d", sodu[k]);
	}
	return 0;
	
}
