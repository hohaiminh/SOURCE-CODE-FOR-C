// Chuong trinh nhap vao N dien tich HCN, in ra chieu dai va chieu rong cua HCN co S lon nhat

#include <stdio.h>
#include <conio.h>
#include <math.h>



int main(){
	unsigned int n,dem;
	float rong[1000],dai[1000],S[1000],max=0,dai_max,rong_max,dai_min,rong_min,min;
	printf("Nhap vao so hinh chu nhat muon tinh dien tich: ");
	scanf("%d",&n);
	
	for(dem=1;dem<=n;dem++){
		printf("\nChieu dai S%d: ", dem);
		scanf("%f",&dai[dem]);
		printf("\nChieu rong S%d: ",dem);
		scanf("%f",&rong[dem]);
		if(dai[dem]<0 || rong[dem] <0)
			printf("\nBan da nhap sai gia tri ,xin hay xem lai");
		else{
		
		S[dem ]= dai[dem]*rong[dem];
		printf("\nDien tich hinh chu nhat thu %d: %.3f",dem,S[dem]);	
			if(S[dem]>max){
				max=S[dem];
				dai_max = dai[dem];
				rong_max=rong[dem];
				}
			}
		
	}
	dai_min = dai[1];
	rong_min = rong[1];
	min = S[1];
	for(dem=1; dem<=n;dem++){
		if(	min>S[dem]){
			min = S[dem];
			dai_min = dai[dem];
			rong_min = rong[dem];
		}
	}
	
	
	printf("\n\n Dien tich HCN lon nhat la: %.3f",max );
	printf("\n\n Chieu dai va chieu rong cua HCN lon nhat la: %.2f va %.2f", dai_max,rong_max);
	
	printf("\n\n Dien tich HCN nho nhat la: %.3f", min);
	printf("\n\n Chieu dai va rong cua HCN be nhat la: %.2f va %.2f", dai_min,rong_min);
	getch();
	return 0;
}
