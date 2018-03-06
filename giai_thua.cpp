# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản


#include <stdio.h>
#include <conio.h>

/* tính n! bang de quy */
unsigned int giaithua_dequy(int n){
	if (n==0)
		return 1;
	else 
		return n*giaithua_dequy(n-1);
} 


int main() {
	int n;
	
	printf("\n Nhap vao so  giai thua: ");
	scanf("%d", &n);
	printf("\nGia tri cua %d! la: %u",n, giaithua_dequy(n) );
	getch();
	return 0;
	
}
