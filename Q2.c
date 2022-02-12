#include <stdio.h> 

int main() 
{
    int a,b;
    printf("type two nos.\n");

    scanf("%d" , &a);
    scanf("%d" , &b);
    printf("you have entered two nos.\n");

    if (a>b){
        printf("yes, you are a good person");
    }

    else if(a<b) {
        printf("you are partially good person");
    }
    
    else{
        printf("you are not a good person");
    }

    return 0;
}