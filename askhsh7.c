#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int dig;
    char x;
    float a, b, y = 0.0F;

    printf("Give me two numbers: ");

    scanf("%d%d", &a, &b);
    
    fflush(stdin); // clears buffer
    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&x);

    switch(x){
        case '+':
            printf("The sum is: %d", a+b);
            break;
        case '-':
            printf("The difference is: %d", a-b);
            break;
        case '/':
            printf("How many digits do you want your result to be?: ");
            scanf("%d", &dig);
            y = a/b;
            printf("y = %.*f\n", dig, y);
            break;
         case '*':
            printf("The result of the multiplication is: %d", a*b);
            break;
        default: 
            printf("Invalid operator\n");
        
        exit(0);

    }
    
    return 0;
}