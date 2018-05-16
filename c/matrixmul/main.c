#include<stdio.h>
void main()
{
  int i,j,k,m,n,p,q;
  int a[5][5],b[5][5],c[5][5];
  printf("Enter the size of matrix A:\n");
  scanf("%d%d",&m,&n);
  printf("Enter the size of matrix B:\n");
  scanf("%d%d",&p,&q);
  if(n!=p)
  {
    printf("Matrix multiplication is not possible");
  }
  else
  {
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("Enter the elements of matrix B:\n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
      {
        c[i][j]=0;
        for(k=0;k<n;k++)
        {
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
      }
    }
    printf("The matrix A is:\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%4d",a[i][j]);
      }
      printf("\n");
    }
    printf("The matrix B is: \n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("%4d",b[i][j]);
      }
      printf("\n");
    }
    printf("The resultant matrix is:\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("%4d",c[i][j]);
      }
      printf("\n");
    }
  }
}
