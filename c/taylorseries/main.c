#include<stdio.h>
#include<math.h>
void main()
{
  int n,i;
  float sum,t,x,y;
  printf("Enter an angle in degrees:\n");
  scanf("%d",&n);
  x = n*(3.142/180);
  y = sin(x);
  printf("Using library function\nThe value of sin(%d) is %f\n",n,y);
  t=x;
  sum=x;
  for(i=1;i<=n;i++)
  {
    t=t*(-1)*x*x/(2*i*(2*i+1));
    sum = sum + t;
  }
  printf("Using taylors function value of sin(%d) is %f",n,sum);
}
