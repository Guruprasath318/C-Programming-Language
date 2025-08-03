#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int i,j,n,m;
    printf("\nEnter a row size     :");
    scanf("%d",&n);
    printf("\nEnter a column size  :");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) // Fixed: changed ',' to ';'
        {
            printf("\nThe elements of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]); // Fixed: added '&'
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) // Fixed: changed ',' to ';'
        {
            printf("\nThe elements of b[%d][%d]: ",i,j); // Fixed: changed 'a' to 'b'
            scanf("%d",&b[i][j]); // Fixed: added '&'
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) // Fixed: changed ',' to ';'
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    
}