#include <stdio.h>

int main(){
    double success, fail, sum; 
    double sratio, fratio;
    
    printf("How many students succeeded? \n");
    scanf("%d", &success);

    printf("How many students failed? \n");
    scanf("%d", &fail);

    sum = success + fail;
    
    sratio = (success / sum) * 100;
   
    fratio = (fail / sum) * 100;

    printf("The success ratio is: %f %% \n", sratio);
    printf("The failed ratio is: %f %% \n", fratio);


    return 0;
}

