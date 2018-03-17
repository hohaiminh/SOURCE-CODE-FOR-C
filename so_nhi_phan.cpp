#include<stdio.h>  
#include<conio.h>  

// Chuong trinh chuyen mot so nguyen sang he nhi phan

// Tim xem trong he nhi phan co bao nhiu bit 1

// Neu so bit 1 = chan thi in ra CHAN, nguoc lai in ra LE


main()  {
	int n,i,a[1000],dem=0;
	printf("Nhap vao mot so nguyen N: ");
	scanf("%d", &n);
	while(n>0){
		a[i] = n%2;
		n = n/2;
		i++;
	}
	printf("\n Gia tri cua N khi doi sang he nhi phan la: ");
	for(i = i-1; i>=0;i--){
		printf("%d", a[i]);
		if(a[i]==1)
			dem++;
		
	}
	printf("\n So bit 1 co trong he nhi phan la: %d", dem);
	if(dem%2==0)
		printf("\n\n\t CHAN");
	else
		printf("\n\n\t LE");
	getch();
	return 0;
		
	
}
