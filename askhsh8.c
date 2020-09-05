#include <stdio.h>

int main(){

    int a, b, c;
    
    printf("Give me first number: ");
    scanf("%d",&a);

    do{
        printf("Give me second number: ");
        scanf("%d",&b);
    }while( a <= b);

    do{
        printf("Give me third number: ");
        scanf("%d",&c);
    }while( b <= c);
    

    printf("%d%d%d", a, b, c);

    return 0;
}