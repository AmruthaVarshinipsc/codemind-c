#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     int min = arr[0];    
    for (int i = 0; i < n; i++) {     
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("%d", min);    
    return 0;  
    
}