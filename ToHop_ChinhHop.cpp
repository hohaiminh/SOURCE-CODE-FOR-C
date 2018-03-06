# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include<stdio.h>
#include<math.h>
#include<conio.h>

/* Tinh to hop va chinh hop */
/* Bai 10 trang 22 SBT LTCBA*/

unsigned int giaithua(int n){
	if (n==0)
		return 1;
	else 
		return n*giaithua(n-1);
}
unsigned int tohop(int n,int k){
	if(n<k )
		printf("\nMoi nhap lai");
	else	if(n==k)
		return 1;
	else	
		return (giaithua(n)) /(giaithua(k)*giaithua(n-k));
			
}

unsigned int chinhhop(int n, int k){
	if(n < k)
		printf("\nMoi nhap lai");
	else
		return (giaithua(n))/(giaithua(n-k));
}

	
int main(){
	int n,k;
	printf("\nXin moi nhap k: ");
	scanf("%d", &k);
	printf("\nXin moi nhap n: ");
	scanf("%d", &n);

	
	if(k == 0 || k == n){
	
		printf("\nTo hop chap k cua n: 1");
		printf("\nChinh hop: %d", chinhhop(n,k));
	}
	else if(k>1 && k< n){	
	
		printf("\nTo hop chap k cua n: %d", tohop(n-1,k-1)+tohop(n-1,k));
		printf("\nChinh hop: %d", chinhhop(n,k));
	}
	else 
		printf("\nNhap sai");
	getch();
	return 0;
}
