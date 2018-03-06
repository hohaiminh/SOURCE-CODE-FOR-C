# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>
/* Tinh chu vi va dien tich cua mot tam giac bat ki*/
/* Bai 1 trang 9 sach bai tap ltcbA */
int main(){
	float a,b,c,CV,S,p;
	printf("Nhap vao do dai cua 3 canh: ");
	scanf("%f %f %f", &a, &b, &c);
	CV = (a+b)/2;
	p = CV/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	if ((a+b)>c || (a+c)>b || (b+c)>a){
	
		printf("\nDien tich cua tam giac la: %.2f", S);
		printf("\nChu vi tam giac la: %.2f", CV);
		
	} else
		printf("Moi ban nhap lai");
	
	return 0;
	
	
	
}
