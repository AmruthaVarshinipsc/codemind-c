#include<stdio.h>
int main()
{
    int n,i,arr[1000],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+arr[i];
        }
        
    }
    printf("%d",s);
    return 0;
}