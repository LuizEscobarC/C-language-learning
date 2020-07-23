#include <stdio.h>
#include <stdlib>
int fibRec(int n){
    if(n < 2){
        return n;
    }else{
        return fibRec(n-1)+fibRec(n-2);
    }
}
//retorna o o fibonacci na do numero
int fibIter(int n){
    int i, j, k, fib;
    k = 1;
    fib = 0;
    for(i = 0; i < n; i++){
        j = fib + k;
        fib = k;
        k = j;
    }
    return fib;
}
int main(){
    printf("Recurssivamente: %d\nInterativamente: %d\n",fibRec(4),fibIter(4));
}
 