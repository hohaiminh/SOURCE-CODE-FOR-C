# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include <stdio.h>
#include <math.h>
#include <conio.h>

/*Kiem tra ki tu nhap vao thuoc tap hop nao trong day sau*/
/*Bai 9 trang 10 SBT LTCBA*/
 
int main(){
	char ch;
	printf("nhap vao mot ki tu: ");
	scanf("%c",&ch);
	switch(ch){
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			printf("\n Ki tu thuoc tap hop cac chu hoa 'A'...'Z'");
		break;
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			printf("\n Ky tu thuoc tap hop day cac chu thuong 'a'...'z'");
		break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			printf("\n Ky tu thuoc day cac ky tu chu so '0'...'9'");
		break;
		default:
			printf("Cac ki tu khac");
	}
	return 0;
}
