#include<stdio.h>

int main()
{
   int r;
   printf("Enter the radius of circle:- ");
   scanf("%d",&r);
   printf("diameter of circle is %d\n", 2*r);
   printf("circumferrence of circle is %.2f\n",2*3.14*r);
   printf("area of circle is %.2f",3.14*r*r);
   
   return 0;
}
