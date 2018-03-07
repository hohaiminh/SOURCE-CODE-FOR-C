# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Giai he  phuong trinh co x va y*/

int main()
{
      float a1,b1,c1,a2,b2,c2,x,y,d;
      printf("\nNhap vao a1, b1, c1: \n");
      
      scanf("%f%f%f", &a1, &b1, &c1);
      
      printf("\nPhuong trinh (1) se co dang: %.2fx + %.2fy = %.2f", a1, b1, c1);
      
      printf("\nNhap vao a2, b2, c2: \n");
      
      scanf("%f%f%f", &a2, &b2, &c2);
      
      printf("\nPhuong trinh (2) se co dang: %.2fx + %.2fy = %.2f", a2, b2, c2);
      
      d= a1*b2 - b1*a2;
      
      if (d != 0) {
      		x = (c1*b2 - b1*c2)/d;
      		y = (a1*c2- a2*c1)/d;
      		printf("\n\nHe co nghiem duy nhat voi: \nx= %.2f ; y = %.2f",x,y);   		
	  		} 
	  else if (d == 0) {
	  		
			  printf("\nHe co vo so nghiem");	
	  } 
	  else 
	  		printf("He vo nghiem");
     
       getch();
       return 1;    
             }
