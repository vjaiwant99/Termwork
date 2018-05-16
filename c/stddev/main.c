#include<stdio.h>
#include<math.h>
void main()
{
  float a[10],*ptr,mean,sum=0,sumstd=0;
  int i,n;
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  printf("Enter the elements of array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%f",&a[i]);
  }
  ptr=a;
  for(i=0;i<n;i++)
  {
    sum = sum + *ptr;
    ptr++;
  }
  mean=sum/n;
  ptr = a;
  for(i=0;i<n;i++)
  {
    sumstd=sumstd+pow((*ptr-mean),2);
    ptr++;
  }
  printf("Sum = %.3f\n",sum);
  printf("Mean= %.3f\n",mean);
  printf("Standard Deviation = %.3f\n",sumstd);
}
