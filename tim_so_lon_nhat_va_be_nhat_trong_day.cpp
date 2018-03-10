# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>

// Tim so be nhat, lon nhat trong day

int main(){
	int n,sothu,a[1000],max=0,min,vitri_max,vitri_min;
	printf("Nhap vao N so nguyen: ");
	scanf("%d",&n);
	for(sothu = 1; sothu <= n; sothu++){
		printf("\nNhap vao so thu %d: ",sothu);
		scanf("%d", &a[sothu]);
	}
	for(sothu=1;sothu<=n;sothu++){
		if(a[sothu] > max){
			max = a[sothu];
			vitri_max = sothu;
		}
	}
	printf("\n\nGia tri lon nhat trong day so la %d ; o vi tri thu %d",max,vitri_max);
	min = a[0];
	for(sothu=1;sothu<=n;sothu++){
		if(min>a[sothu]){
			min = a[sothu];
			vitri_min = sothu;
		}	
	}
	printf("\n\nGia tri be nhat trong day la %d ; o vi tri thu %d", min,vitri_min);
	return 0;
	
}
