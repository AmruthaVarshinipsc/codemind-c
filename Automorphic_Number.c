#include <stdio.h>

int checkAutomorphic(int num){
    
    int square = num * num;
    
    while(num != 0)
    {
        
        if(num % 10 != square % 10){
            return 0;
        }
        
        
        num /= 10;
        square /= 10;
    }
    
    return 1;
}

int main ()
{
    int num ;
    scanf("%d",&num);
    int square = num * num ;
    
    if(checkAutomorphic(num))
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");
    

}