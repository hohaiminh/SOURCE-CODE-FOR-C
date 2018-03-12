/* Ho ten: Dang Quoc Dung
   Lop: 17Y9A1
   Ma SV: B1709272
   May so: 35
   De: 01
   	*/

// Chuong trinh nhap vao N dien tich HCN, in ra chieu dai va chieu rong cua HCN co S lon nhat

#include <stdio.h>
#include <conio.h>
#include <math.h>



int main(){
	unsigned int n,dem;
	float rong,dai,S,max=0,dai_max,rong_max;
	printf("Nhap vao so hinh chu nhat muon tinh dien tich: ");
	scanf("%d",&n);
	
	for(dem=1;dem<=n;dem++){
		printf("\nChieu dai S%d: ", dem);
		scanf("%f",&dai);
		printf("\nChieu rong S%d: ",dem);
		scanf("%f",&rong);
		if(dai<0 || rong <0)
			printf("\nBan da nhap sai gia tri ,xin hay xem lai");
		else{
		
		S = dai*rong;
		printf("\nDien tich hinh chu nhat thu %d: %.3f",dem,S);	
			if(S>max){
				max=S;
				dai_max = dai;
				rong_max=rong;
				}
			}
		
	}
	printf("\n\n Dien tich HCN lon nhat la: %.3f",max );
	printf("\n\n Chieu dai va chieu rong lon nhat cua HCN lon nhat la: %.2f va %.2f", dai_max,rong_max);
	getch();
	return 0;
}
