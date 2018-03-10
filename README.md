# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản


#include <stdio.h>
#include <conio.h>
 
 // In ra man hinh cac so nguyen to <= N;
 
int main()
{
    int i,p,n,dem=0;
    printf("Nhap vao so nguyen duong N: ");;
    scanf("%d",&n);
    printf("\n Cac so nguyen to be hon hoac bang N la: ");
    for(p=2;p<=n;p++){
    	dem = 0;
    	for(i=1;i<=p;i++){
    		if(p%i==0)
    			dem++;
		}
		if(dem == 2)
			printf(" %d,", p);		
	}
 
    getch();
    return 0;
 
}
