#include<stdio.h>           //sum of left diagonal of a matrice
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
            sum=a[2][0]+a[1][1]+a[0][2];

    }
            printf("%d\t",sum);


    return 0;

}
