#include <stdio.h>
#include <conio.h>

// Doi 1 so nguyen ra so nhi phan, kiem tra xem do la so LE hay CHAN


int main(){
	unsigned int n,i=1,so_du,so_nhi_phan=0;
	printf("Nhap vao so nguyen dunog N: ");
	scanf("%d", &n);
	while (n!=0)
    {
        so_du = n%2;
        n /= 2;
        so_nhi_phan = so_nhi_phan + so_du*i;
        i = i*10;
    }
    printf("\n Doi ra so nhi phan la: %d",so_nhi_phan );
    if(so_nhi_phan%2==0){
    	printf("\n\n\nCHAN");
	}
	else
		printf("\n\n\nLE");
		
	getch();	
	return 0;
    
}
