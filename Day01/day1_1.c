#include<stdio.h>
#define SIZE 9

int linear_search(int arr [], int key);
int comparisons;

int main()
{
    int arr[SIZE] = {33,55,88,77,44,11,66,22,99};
	int key;

	// step 1 : Accept the key from thee user
	printf("Enter the key to search :");
	scanf("%d", &key);

	int index = linear_search(arr,key);

	if(index == -1)
	      printf("key not found !\n");
	else
	      printf("Key is found at index %d\n",index);
	
	printf("Comparisons = %d\n", comparisons);
	return 0;
}

int linear_search(int arr[], int key)
{
    //step 2: start the traversal from 0th index

	for(int i =0;i<SIZE;i++)
	{
       comparisons++;
	   //  step3: compare the key with each element
	   if(key == arr[i])
	   {
           // if key is found ,return the index
		   return i;

	   }
	}
    return -1; // key not found
}
