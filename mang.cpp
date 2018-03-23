#include <stdio.h>
#include <conio.h>
#include <math.h>


// Bai tap 9 trang 26 SBT

bool nguyento(int n){
	if(n<2)
		return false;
	else{
	for(int i=2; i<=(int)sqrt(n);i++){
	if(n%i==0)
	return false;
		}
	
	}
	return true;
}

bool so_le(int n){
	if(n%2==0)
	return false;
	else 
	return true;
}

bool so_chan(int n){
	if(n%2==0)
	return true;
	else
	return false;
}

int main(){
	int n,i,p,a[100],dem_le=0,dem_chan=0;
	printf("Nhap vao n so tu nhien: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nSo thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n -Cac so le la:");
	for(i=0;i<n;i++){
		if(so_le(a[i])){
			printf("%3d,",a[i]);
			dem_le++;
		}
	}
	printf(" co %d so le trong mang",dem_le );
	printf("\n\n -Cac so chan la:");
	for(i=0; i<n;i++){
		if(so_chan(a[i])){
			printf("%3d,", a[i]);
			dem_chan++;
		}
			
	}
	printf(" co %d so chan trong mang",dem_chan);
	printf("\n\n -Cac so nguyen to:");
	for(i=0;i<n;i++){
		if(nguyento(a[i])){
			printf("%3d",a[i]);
		}
	}
	printf("\n\n -Ko phai so nguyen to:");
	for(i=0;i<n;i++){
			if(nguyento(a[i])==false)
				printf("%3d",a[i]);
	}
	return 0;
}




