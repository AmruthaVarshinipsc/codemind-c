#include<stdio.h>
int sum_A_B(int a[],int n,int A,int B)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<A || a[i]>B){
            sum+=a[i];
        }
    }
    return sum;
}
int main()
{
    int n,i,arr[100],a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",sum_A_B(arr,n,a,b));
    return 0;
}