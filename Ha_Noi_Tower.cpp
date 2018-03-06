# SOURCE-CODE-FOR-C
Bài toán Hà Nội

 #include <conio.h>
 #include <stdio.h>

 int sobuoc(int n) {
 	if (n== 1)
 		return 1;
 	else 
 		return 2*sobuoc(n-1) + 1;	
 }
 
 void dich_chuyen(int n, char cotA, char cotB, char cotC) {
 	if(n == 1) 
 		printf("chuyen dia tu %c sang %c\n", cotA, cotB);
 	else {
	 
 		dich_chuyen(n-1, cotA, cotC, cotB);
 		printf("chuyen dia thu %d tu %c sang %c\n",n, cotA, cotB);
 		dich_chuyen(n-1,cotC, cotB, cotA);
 	}
 }
 
 int main() {
 	int n;
 	printf("Nhap vao so dia: ");
 	scanf("%d", &n);
 	char cotA= 'A', cotB = 'B', cotC = 'C';
 	dich_chuyen(n, cotA, cotB, cotC);
 	
 	int count = sobuoc(n);
 	printf("\n So buoc chuyen %d dia la %d ",n, count);
 	getch();
 	return 0;
 }
