# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>


// Tim so lon nhat trong day

int main(){
	unsigned n,sothu,vitri;
	int a,max=0;
	printf("nhap vao so day: ");
	scanf("%d", &n);
	for(sothu = 1; sothu <= n; sothu++){
		printf("\nNhap vao so thu %d: ", sothu);
		scanf("%d", &a);
		
		if(a>max){
			max = a;
			vitri = sothu;
		}
	}
	
	printf("So lon nhat trong day la: %d o vi tri thu %d", max, vitri);
	return 0;
}
