#include<stdio.h>
int main(){
int n,i,arr[100],sum=0,avg,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    for(i = 0; i < n; i++)
    {
        if(arr[i] ==avg)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}