# SOURCE-CODE-FOR-C
nguồn code dùng cho lập trình C căn bản

#include<stdio.h>

/* In ra N so nguyen to tu lon den be*/

bool kt(int n)
{
    int dem=0;
    for (int i=1;i<=n;i++)
        if (n%i==0)
            dem++;
    if (dem==2)
        return true;
    else
        return false;
}
int  main()
{
    printf("In ra n so nguyen to tu lon den be: ");
    int n,count=0;
    scanf("%d",&n);
    printf("Cac so nguyen to: ");
    for (int i=2;count<n;i++)
        if (kt(i))
        {
            printf("%d ",i);
            count++;
        }
}
