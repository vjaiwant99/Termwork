#include<stdio.h>
void main()
{
  FILE *fptr,*fptr1,*fptr2;
  char usn[50];
  char name[50];
  fptr = fopen("name.txt","r");
  fptr1 = fopen("usn.txt","r");
  fptr2 = fopen("output.txt","w");
  while(fscanf(fptr,"%s",name)!=EOF)
  {
    while(fscanf(fptr1,"%s",usn)!=EOF)
    {
      fprintf(fptr2,"%s\t%s\n",name,usn);
      break;
    }
  }
  fclose(fptr);
  fclose(fptr1);
  fclose(fptr2);
}
