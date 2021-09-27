
#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
	
	if (n == 1)
		return;

	
	for (int i=0; i<n-1; i++)
		if (arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);

	
	bubbleSort(arr, n-1);
}


void printArray(int arr[], int n)
{
	for (int i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{   int t;
    cin>>t;
	int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    } 
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array : \n");
	printArray(arr, n);
	return 0;
}
