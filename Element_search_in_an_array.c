#include<stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key,flag = 0;
    scanf("%d",&key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
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