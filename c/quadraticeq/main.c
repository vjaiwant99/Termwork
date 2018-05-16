#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,d,x1,x2;
  printf("Enter the values for\na:");
  scanf("%f",&a);
  printf("\nb:");
  scanf("%f",&b);
  printf("\nc:");
  scanf("%f",&c);
  d = (b * b)-(4 * a *c);
  if(d==0)
  {
    printf("Roots are equal\n");
    x1 = ((-b) + sqrt(d))/2*a;
    x2 = ((-b) - sqrt(d))/2*a;
    printf("the roots are %f and %f ",x1,x2);
  }
  else if(d>0)
  {
    printf("Roots are distinct\n");
    x1 = b/2*a;
    x2 = x1;
    printf("The roots are %f and %f");
  }
  else
  {
    printf("Roots are imaginary\n");
    x1 = b /2 *a;
    x2= (sqrt(fabs(d)))/2*a;
    printf("\nThe roots are %f+i%f",x1,x2);
    printf("\nand %f-i%f",x1,x2);
  }
}
