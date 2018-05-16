#include<stdio.h>
void main()
{
  int i,n,j,temp,a[10];
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nElements before sorting");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  printf("\nAfter sorting");
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }

}
