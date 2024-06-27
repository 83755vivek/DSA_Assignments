// Selection sort

#include<stdio.h>
#define SIZE 6
#define Swap(a,b) { int t =a; a = b; b = t;}

void Selection_sort(int arr[SIZE]);
void display(int arr[SIZE]);

int main()
{
  int arr[SIZE] = {11,22,33,4,55,66};
     printf("\n Before Sort :\n");
	 display(arr);

	 return 0;
}

void Selection_sort(int arr[SIZE])
{
  int sel_pos,pos;
  //Iterations
  int iterations = 0, comparisons = 0;
  for(sel_pos = 0; sel_pos < SIZE-1;sel_pos++)
  {
      //comparisons
      iterations++;
	  for(pos = sel_pos+1; pos < SIZE; pos++)
	  {
            comparisons++;
			if(arr[sel_pos] > arr[pos])
			{
              //swap
			  Swap(arr[sel_pos],arr[pos]);

		}
    }
  }
  printf("\n Iterations = %d comparisons = %d\n",iterations,comparisons);
}

void display(int arr[SIZE])
{
    for(int i =0;i<SIZE ; i++)
	{
        printf("%4d",arr[i]);

	}

}
