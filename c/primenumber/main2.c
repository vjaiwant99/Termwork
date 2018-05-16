#include<stdio.h>
int isPrime(int num);
void main()
{
  int i,n,m;
  printf("Enter the range");
  scanf("%d%d",&m,&n);
  for(i=m;i<n;i++)
  {
    if (isPrime(i)==0)
    {
      printf("%d\t",i);
    }
  }
}
int isPrime(int num)
{
  int i,flag=0;
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0)
    {
      flag=1;
    }
    else
    {
      flag=0;
    }
  }
  if(flag==0)
  {
    return 0;
  }
}
