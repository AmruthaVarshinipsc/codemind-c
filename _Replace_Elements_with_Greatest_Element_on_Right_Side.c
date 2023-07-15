#include <stdio.h>
void nextGreatest(int arr[], int size)
{
int max_from_right = arr[size-1];
arr[size-1] = -1;
for(int i = size-2; i >= 0; i--)
{
	int temp = arr[i];
	arr[i] = max_from_right;
	if(max_from_right < temp)
	max_from_right = temp;
}
}

void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);

}

int main()
{
int arr[100];
	int size,i;
	scanf("%d",&size);
	for(i=0;i<size;i++){
	    scanf("%d",&arr[i]);
	}
nextGreatest (arr, size);
printArray (arr, size);
return 0;
}

