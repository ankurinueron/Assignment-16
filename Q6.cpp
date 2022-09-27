#include<stdio.h>               //sum of rows and columns of a matrice
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter elements of the matrice : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Sum of rows are : ");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
            sum=sum+a[i][j];
        printf("%d ",sum);
    }
    printf("Sum of columns are : ");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
            sum=sum+a[j][i];
        printf("%d ",sum);
    }
    return 0;
}
