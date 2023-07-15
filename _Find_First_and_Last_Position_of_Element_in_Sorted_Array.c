#include <stdio.h>
void findFirstAndLast(int arr[], int n, int x)
{
	int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if (x != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		printf("%d %d",first, last);
	else
		printf("-1 -1");
}

int main()
{
	int arr[100],x;
	int size,i;
	scanf("%d",&size);
	for(i=0;i<size;i++){
	    scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	findFirstAndLast(arr, size, x);
	return 0;
}


