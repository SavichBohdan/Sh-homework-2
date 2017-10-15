#include "string.h"

typedef enum {false, true} bool;

int main(){
    srand(time(NULL));
    int min, max, n, a, i=0;
    printf("Enter the lower border: ");
    scanf("%d", &min);
    printf("Enter the upper border: ");
    scanf("%d", &max);
    a = rand() % (max-min)+min;
    bool attempt_to_guess = false;
    do{
        printf("Guess the number: ");
        scanf("%d", &n);
        if(a>n){
            printf("Too few\n");
            attempt_to_guess = false;
            i++;
        }
        if(a<n){
            printf("Too much\n");
            attempt_to_guess = false;
            i++;
        }
        if(a==n){
        printf("you win\n");
        attempt_to_guess = true;
        }

    if (i == 3){
        attempt_to_guess = true;
    }
    }while(!attempt_to_guess);

    return 0;
}
