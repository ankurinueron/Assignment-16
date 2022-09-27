#include<stdio.h>           //rows with max number of 1's
int main()
{
    int a[3][3],i,j,sum=0,max=0,index;
    printf("enter elements of the matrice : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (a[i][j]==1)
            sum=sum+a[i][j];
        }
    if(sum>max){}
        max=sum;
        index=i;
    }
    printf("%d row has maximum 1's ",index);
    return 0;
}
