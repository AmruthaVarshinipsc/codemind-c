#include <stdbool.h>
#include <stdio.h>
int firstMissingPos(int A[], int n)
{
	bool present[n + 1];
	for (int i = 0; i < n; i++)
		present[i] = false;
	for (int i = 0; i < n; i++) {
		if (A[i] > 0 && A[i] <= n)
			present[A[i]] = true;
	}

	for (int i = 1; i <= n; i++)
		if (!present[i])
			return i;
	return n + 1;
}

int main()
{

	int arr[100];
	int size,i;
	scanf("%d",&size);
	for(i=0;i<size;i++){
	    scanf("%d",&arr[i]);
	}
	printf("%d", firstMissingPos(arr, size));
}


