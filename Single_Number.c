#include <stdio.h>
#include <stdlib.h>
int uniqueEle(int array[], int n){
   int i,j;
   int count = 1;
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(array[i] == array[j] && i != j)
         break;
      }
      if(j == n ){
         printf("%d ",array[i]);
         ++count;
      }
   }
   return -1;
}
int main(){
   int n,i;
   
   scanf("%d",&n);
   int array[n];
  
   for(i = 0; i < n; i++){
      scanf("%d",&array[i]);
   }
   uniqueEle(array, n);
   return 0;
}