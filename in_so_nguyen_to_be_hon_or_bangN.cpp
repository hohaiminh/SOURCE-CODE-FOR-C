# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>
// chuong trinh in ra man hinh so nguyen to <= n


int main() {
	int p,q,n,dem=0;
	printf("Nhap vao mot so nguyen N: \n");
	scanf("%d", &n);		//Nhap vao mot so nguyen N 
	for(p=2; p <= n; p++){  //Tao vong lap "for" voi so nguyen to nho nhat la 2
		for(q=1; q<=p; q++){
			if(p%q==0)
			dem++;
		}
	if(dem==2)
	
	printf("so nguyen to:  %d \n", p);
	dem=0;
	
	}
	getch();
	return 0;
}
