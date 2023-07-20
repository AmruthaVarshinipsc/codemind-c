#include<stdio.h>
int printAboveAvg(int arr[],int n)
{
    double avg=0;
    for(int i=0; i<n; i++)
    {
        
            avg+=arr[i];
        
    }
    avg=avg/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=avg){
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("%d",printAboveAvg(arr,n));
    return 0;
}