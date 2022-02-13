#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter first and second number: \n");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else if(x<y)
    {
        printf("%d is greater than %d",y,x);
    }
    else if(x==y)
    {
        printf("Both numbers are equal.");
    }
    return 0;
}