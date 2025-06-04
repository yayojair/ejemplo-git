#include <stdio.h>

int main(){
    print("hola mundo, como estas");
}

int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}