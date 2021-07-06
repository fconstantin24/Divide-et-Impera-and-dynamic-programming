//Fibonacci cu memoizare
//merge pentru n>=0
#include<stdio.h>

int fib(int n, int memo[]){
    if ((n==0) || (n==1)) return n;
    if (memo[n]==0) memo[n] = fib(n-1,memo) + fib(n-2,memo);
    return memo[n];
}

int main(){
    int n;
    printf("n=");
    scanf("%d", &n);
    int v=(int)calloc(n+1,sizeof(int));
    int m = fib(n,v);
    printf("%d",m);

    return 0;
}
