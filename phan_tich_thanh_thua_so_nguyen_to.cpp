#include <stdio.h>
#include <conio.h>
#include <math.h>

// Phan tich mot so thanh tich cac thua so nguyen to

int main(){
	int n,i=2;
	printf("Nhap vao so nguyen N:");
	scanf("%d",&n);
	printf("\n So nguyen %d bang tich cua: ",n);
	while( n!=1){		
		if(n%i==0){
			printf("%6d ", i);
			n = n/i;
		}
		else 
			i++;
	}
	return 0;
}
