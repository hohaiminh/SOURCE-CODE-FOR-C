# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>
/* In ra cac so nguyen tu 1 den n*/
int main(){
	unsigned int n,i;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		printf("\n\t%d",i);
	}
	return 0;
	
}
