#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 printf("This is for half pramid *\n");
 for(i=0;i<5;i++)
 {
  for(j=0;j<=i;j++)
  {
   printf("*");
  }
  printf("\n");
 }
 getch();
}