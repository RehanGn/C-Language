// #include <stdio.h>
// void bubble_sort(int a[], int n) {
//     int i = 0, j = 0, tmp;
//     for (i = 0; i < n; i++) {   // loop n times - 1 per element
//         for (j = 0; j < n - i - 1; j++) { // last i elements are sorted already
//             if (a[j] > a[j + 1]) {  // swop if order is broken
//                 tmp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = tmp;
//             }
//         }
//     }
// }
// int main() {
//   int a[100], n, i, d, swap;
//   printf("Enter number of elements in the array:\n");
//   scanf("%d", &n); 
//   printf("Enter %d integers\n", n);
//   for (i = 0; i < n; i++)
//     scanf("%d", &a[i]);
//   bubble_sort(a, n);
//   printf("Printing the sorted array:\n");
//   for (i = 0; i < n; i++)
//      printf("%d\n", a[i]);
//   return 0;
// }


#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	

	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}


void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("n");
}

int main()
{
	int arr[] = {12,34,344,234,343,5464,3536,3536,353333535,36464 };
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
