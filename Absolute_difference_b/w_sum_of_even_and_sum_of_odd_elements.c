#include<stdio.h>
int main()
{
    int n,i,arr[1000],s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            s1=s1+arr[i];
        }
        else{
            s2=s2+arr[i];
        }
    }
   if(s2>s1)
      printf("%d",s2-s1);
    else
      printf("%d",s1-s2);
      
   return 0;
}