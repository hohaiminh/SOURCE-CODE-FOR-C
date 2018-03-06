# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include<math.h>
#include <conio.h>

/* Nhap vao mot ki tu, xem no thuoc day nguyen am hay phu am*/
/* Bai 8 trang 9 SBT LTCBA*/
int main(){
	char ch;
	printf("Nhap vao mot ky tu: ");
	scanf("%c", &ch);
	
	switch(ch){
		case 'o':
		case 'a':
		case 'e':
		case 'u':
		case 'i':
			printf("\nKi tu thuoc day nguyen am");
		break;
	default:
		printf("\nKi tu thuoc day phu am");
	}
	return 0;
	
}
