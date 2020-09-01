#include <stdio.h>

int main(void){
    float a,b, result;

    printf("Give me two float numbers \n");
    scanf("%f%f", &a, &b);

    if (a==0)
        printf("Error");
    else {
	 	result = (-b)/a;
    	printf("The result of the equation is: %f", result);
	}
       



    return 0;

}
