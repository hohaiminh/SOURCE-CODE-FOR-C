# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản


 #include <stdio.h>
 #include <conio.h>
 
 // Chuong trinh in ra so dao nguoc cua so nguyen duong N
 
 int so_dao_nguoc(int n){
 	unsigned int p;
 	while(n){
 		p= n%10;
 		printf("%d",p);
 		n=n/10;
	 } 
	 
 }
 int main(){
 	unsigned int n;
 	printf("Nhap vao so nguyen n: ");
 	scanf("%d", &n);
 	printf("\nSo dao nguoc cua n la: ");
 	so_dao_nguoc(n);
 	getch();
 	return 0;
 }
