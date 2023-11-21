#include<stdio.h>
int main(){
    int a,b;
    float res;
    scanf("%d%d",&a,&b);
    res=(a+b)/2.0;
    printf("Average of %d and %d is: %0.2f",a,b,res);
}