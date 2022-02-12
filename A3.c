#include<stdio.h>

int main()
{
    int n;
    printf("n: \n");
    scanf("%d", &n);
    switch(n%2==0)
    {
    case 1:
    printf("your number is even");
    break;
    default:
    printf("your number is odd");
    break;
    }
return 0;
}