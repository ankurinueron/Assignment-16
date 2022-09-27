#include<stdio.h>           //sum of right diagonal/trace/principle diagonal of a matrice
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter elements of the matrice : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(j==i)
            sum=sum+a[i][j];
    }
   printf("Sum is %d",sum);

    return 0;

}
