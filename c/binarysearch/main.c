#include<stdio.h>
#include<string.h>
void main()
{
  int i,n,low,mid,high,found;
  char key[100],name[100][100];
  printf("Enter the number of names:\n");
  scanf("%d",&n);
  printf("Enter the names in alphabetical order\n");
  for(i=0;i<n;i++)
  {
    printf("Name %d]:",i);
    scanf("%s",name[i]);
  }
  printf("Enter the name to be searched:\n");
  scanf("%s",key);
  low=0;
  high=n-1;
  while(low<=high)
  {
    mid = (low + high)/2;
    if(strcmp(key,name[mid])==0)
    {
      printf("Name found");
      break;
    }
    else if(strcmp(key,name[mid])>0)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }

  }
}
