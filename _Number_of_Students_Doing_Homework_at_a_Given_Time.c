#include<stdio.h>
int busyStudent(int startTime[], int startTimeSize, int endTime[], int endTimeSize, int queryTime)
{
    startTimeSize=0;
    for(int i=0;i<endTimeSize;i++)
    {
        if(queryTime<=endTime[i]&&queryTime>=startTime[i])startTimeSize++;
    }
    return startTimeSize;
}
int main(){
    int m,n,i,arr1[100],arr2[100],q;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    scanf("%d",&q);
    printf("%d",busyStudent(arr1,m,arr2,n,q));
}