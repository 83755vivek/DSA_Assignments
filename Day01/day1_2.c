// Binary Search

#include<stdio.h>
#define SIZE 9

int binary_search(int arr[],int key);
int rec_binary_search(int arr[],int key, int left,int right);

int comparisons;

int main()
{
     int arr[SIZE] = {11,22,33,44,55,66,77,88,99};

     int key;
	 //step 1: get the key from the user
	 printf("enter the key to search :");
	 scanf("%d",&key);

	 int index = binary_search(arr,key);

	 if(index == -1)
	      printf("Key not found !\n");
	 else
	     printf("Key is found at index = %d\n", index);

	printf("comparisons = %d\n", comparisons);

	index = rec_binary_search(arr,key,0,SIZE-1);

	if(index== -1)
	    printf("Recursion : Key not Found !\n");
	else
	    printf("Recursion : Key found at index = %d\n", index);
    return 0;
}

int binary_search(int arr[], int key)

{
    //step 2: calculate left, right and mid

	int left = 0, right = SIZE-1, mid;

while( left <= right)
{
    comparisons++;
	mid = (left + right) / 2;

	// step3: compare the key with mid element

	if(key == arr[mid])
	   return mid;

	   if(key < arr[mid])
	     right = mid - 1;

	  else
	      left = mid + 1;
}

return -1 ;

}

int rec_binary_search(int arr [],int key, int left,int right)
{
   if ( left > right)
      return -1;

	  int result, mid;

	  mid = (left + right) / 2;

	  if(key == arr[mid])
	     return mid;

	  if(key < arr[mid])
	  {
         result = rec_binary_search(arr,key,left,mid-1);
	  }

     else
	 {
      result = rec_binary_search(arr,key,mid+1,right);

	 }
    return result;

}
