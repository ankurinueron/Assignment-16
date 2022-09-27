#include<stdio.h>           //upper triangle of a matrice
int main()
{
    int a[3][3],i,j;
    printf("Enter elements of the matrice : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(j<i)
            a[i][j]=0;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
