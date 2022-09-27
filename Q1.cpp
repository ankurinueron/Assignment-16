#include<stdio.h>                   //sum of matrices 3X3
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
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
            c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
