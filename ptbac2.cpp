# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <math.h>
#include <conio.h>
#include <string.h>
/* Phuong trinh bac 2*/
/* Bai 11 trang 10 SBT LTCBA*/
main() {
	float a,b,c,d;
	printf("Nhap vao 3 so a,b,c: \n");
	scanf("%f %f %f", &a, &b, &c);
	if(a == 0) {
		if(b==0){
			if (c==0)
				printf("Phuong trinh co vo so nghiem");
			else
				printf("Phuong trinh khong co nghiem");
		}
		else
			printf("Phuong trinh co 1 nghiem duy nhat la: %.2f", -c/b);
	}
	else {
		d =  (b*b) - 4*a*c;
		if (d == 0)
			printf("Phuong trinh co nghiem kep la: %.2f", -b/(2*a));
		if(d < 0)
			printf("Phuong trinh vo nghiem !!");
		if (d > 0)
			printf("Phuong trinh co 2 nghiem phan biet la: %.2f va %.2f", (-b + sqrt(d))/(2*a), 
			(-b-sqrt(d))/(2*a)  );
		
	}
}
