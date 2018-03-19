#include <stdio.h>
#include <conio.h>


// Nhap vao N so phan tu, sap xep thu tu cac gioa tri tu be den lon


void Nhap(int a[], int N){
	int i;
	for(i=0;i<=N-1;i++){
	
		printf("\nPhan tu thu %d la: ", i+1);
		scanf("%d", &a[i]);
		}
}

void InMang(int a[], int N){
	int i;
	for(i=0; i<=N-1;i++){
		printf("%4d",a[i]);
	}
}

void SapXep(int a[], int N){
	int t,i,j;
	for(i = 0; i<=N-2;i++){
		for(j = i+1;j<=N-1;j++){
			if(a[i]> a[j]){
				t= a[i];
				a[i]= a[j];
				a[j]=t;
			}
		}
	}
	
}


int main(){
	int n, a[100];
	printf("Nhap vao so phan tu N: ");
	scanf("%d", &n);
	Nhap(a,n);
	printf("\n Cac gia tri ma ban nhap vao la:  ");
	InMang(a,n);
	SapXep(a,n);
	printf("\n Sau khi sap xep: ");
	InMang(a,n);
	return 0;
	
}

		


