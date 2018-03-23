#include <stdio.h>
#include <conio.h>

//Bai tap 7 trang 26 SBT LTCBA

void In(int n, int i, float a[]){
	for(i=0;i<n;i++){
	printf("\na[%d]= ", i+1);
	scanf("%f", &a[i]);
	}
}

void Gia_tri_max(int n, float a[]){
	float max = a[0];
	int i;
		for(i=1;i<n;i++){
		if(a[i]>max)
			max = a[i];
	}
	printf("\n Gia tri lon nhat la: %.2f", max);
}

int main(){
	float a[100],max;
	int n,i;
	printf("Nhap vao n phan tu: ");
	scanf("%d",&n);
	In(n,i,a);
	Gia_tri_max(n,a);
}
