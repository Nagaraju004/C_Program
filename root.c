#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
  double a,b,c,discriminant,root1,root2,realPart,imaginaryPart;
  clrscr();
  printf("Enter coefficients of a,b and c:");
  scanf("%lf %lf %lf",&a,&b,&c);
  discriminant=b*b-4*a*c;
  if(discriminant>0)
  {
   root1=(-b+sqrt(discriminant))/(2*a);
   root2=(-b-sqrt(discriminant))/(2*a);
   printf("root1=%.2lf and root=%.2lf",root1,root2);
  }
  else if(discriminant==0)
  {
   root1=root2=-b/(2*a);
   printf("root1=%.2lf and root=%.2lf",root1,root2);
  }
  else
  {
   realPart=-b/(2*a);
   imaginaryPart=sqrt(-discriminant)/(2*a);
   printf("root1=%.2lf+%.2lfi and root2=%.2lf+%.2lfi",realPart,imaginaryPart,realPart,imaginaryPart);
  }
  getch();
}