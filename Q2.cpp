#include<stdio.h>                   //multiplication of matrices 3X3
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("Enter elements of first matrice : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter elements for second matrice : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
            sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
            sum=0;
        }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++){
                printf("%d\t",c[i][j]);
            }
             printf("\n");
        }
    return 0;
}
