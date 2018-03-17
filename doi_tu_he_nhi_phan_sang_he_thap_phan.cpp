#include <stdio.h>
#include <conio.h>
#include <math.h>

// Doi mot so tu he nhi phan sang he thap phan

int main(){
	int n,i=0,p,dem=0,a[1000],so_thap_phan=0,k;
	printf("Nhap vao do dai cua xau nhi phan: ");
	scanf("%d", &n);
	printf("\n Nhap vao cac gia tri: \n");
	while(i<=n-1){
		scanf("%d",&p);
		if(p==1 || p ==0){
			a[i] = p;
			i++;
		}
		else
			printf("\n He nhi phan ko co bit %d, moi nhap lai \n", p);
			
	}
	printf("\n He nhi phan co dang: ");
	for(i=0;i<=n-1;i++)
		printf("%d", a[i]);
	
		

	for(i=0;i<=n-1;i++){
		printf("\n Gia tri cua a[%d] la: %d", i, a[i]);
	}
	for(i=i-1;i>=0;i--){
		
		so_thap_phan = so_thap_phan + a[i]*pow(2,k);
		k++;
	}
	printf("\n\n\nDoi ra co so 10: %d", so_thap_phan);
	getch();
	return 0;
	
	
}
