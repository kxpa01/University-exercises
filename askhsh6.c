#include <stdio.h>
#include <stdlib.h>

#define upper 100
#define lower 0

int main(){
    int x, num, i, y ;
    
    x = (rand()%(upper - lower + 1)) + lower;

      y = 0;

      printf("Guess the number: ");
            
      do{
          scanf("%d", &num);
           y++;
      } while(num != x && y<5);
    
        if (num == x)
            printf("U found number nice gj. It took you %d tries", y);
        else if (y == 5)
            printf("u didn't find number. The number was: %d", x);
        
    return 0;
}