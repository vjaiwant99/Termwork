#include<stdio.h>
#include<math.h>
void main()
{
  int n,i,a[10],x;
  float sum;
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  printf("Enter the array elements:\n");
  for(i=0;i<n;i++)
  {
    printf("Enter the %d element",i);
    scanf("%d",&a[i]);
  }
  printf("Enter the value of x:\n");
  scanf("%d",&x);
  for(i=4;i<n;i--)
  {
    sum = sum + a[i]*pow(x,i);
  }
  sum = sum + a[0];
  printf("The value is %f",sum);
}
