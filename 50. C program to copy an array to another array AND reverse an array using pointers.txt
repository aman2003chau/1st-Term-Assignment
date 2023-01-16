#include <stdio.h>
#define maximumSize 100
void printArr(int *arr, int size);
int main()
{
    int arr[maximumSize];
    int size;
    int *left_num = arr; 
    int *right_num;
	printf("Enter size of array: ");
    scanf("%d", &size);
	right_num = &arr[size - 1]; 
	printf("Enter elements in array: ");
    while(left_num <= right_num)
    {
        scanf("%d", left_num++);
    }
	printf("\nArray before reverse: ");
    printArr(arr, size);
	left_num = arr;
	while(left_num < right_num) 
    {
        *left_num    ^= *right_num;
        *right_num   ^= *left_num;
        *left_num    ^= *right_num;
		left_num++;
        right_num--;
    }
	printf("\nArray after reverse: ");
    printArr(arr, size);
	return 0;
}
void printArr(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);
	while(arr <= arrEnd)
    {
        printf("%d, ", *arr);
		arr++;
    }
}
