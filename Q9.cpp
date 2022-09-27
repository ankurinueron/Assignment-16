#include<stdio.h>           //sparse martrice or not
int main()
{
    int a[3][3],i,j,count=0;
    printf("enter elements of the matrice : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if (a[i][j]==0)
            count++;
    }
    if(count>=5)
        printf("It is a sparse matrice");
    else
        printf("It is a dense matrice");
    return 0;
}
