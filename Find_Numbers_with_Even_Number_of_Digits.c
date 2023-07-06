#include<stdio.h>
int findNumbers(int nums[], int numsSize){
     int digit=0,count=0;
     for(int i=0;i<numsSize;i++)
     {  
          digit=0;
             while(nums[i]>0)
             {
              int r=nums[i]%10;
              digit++;
              nums[i]=nums[i]/10;
             }
              if(digit%2==0)
                  count++;
     }
     return count;
}
int main(){
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("%d",findNumbers(arr,n));
}