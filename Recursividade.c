#include <stdio.h>

int factorial (int number);

int factorial (int number)
{
    if(number<=1){
        return 1;
    }
    return number*factorial(number-1);
}

int main(){
    int x = 5;
    int result = 0;

    result = factorial(x);
    printf("%d", result);
}
