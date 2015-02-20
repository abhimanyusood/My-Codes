//sorts 2d array based on first item only(not second element)
#include<stdio.h>

void swap (int n, int a[n][2], int left, int right)
{
 int temp,temp1;
 temp=a[left][0];
 temp1=a[left][1];
 a[left][0]=a[right][0];
 a[left][1]=a[right][1];
 a[right][0]=temp; 
 a[right][1]=temp1; 
}//end swap

void quicksort( int n, int a[n][2], int low, int high )
{
 int pivot;
 // Termination condition! 
 if ( high > low )
 {
  pivot = partition( n,a, low, high );
  quicksort(n, a, low, pivot-1 );
  quicksort( n,a, pivot+1, high );
 }
} //end quicksort

int partition( int n,int a[n][2], int low, int high )
{
 int left, right;
 int pivot_item;
 int pivot = left = low; 
 pivot_item = a[low][0]; 
 int pivot_item_1 = a[low][1]; 
 right = high;
 while ( left < right ) 
 {
  // Move left while item < pivot 
  while( a[left][0] <= pivot_item ) 
   left++;
  // Move right while item > pivot 
  while( a[right][0] > pivot_item ) 
   right--;
  if ( left < right ) 
   swap(n,a,left,right);
 }
 // right is final position for the pivot 
 a[low][0] = a[right][0];
 a[low][1] = a[right][1];
 a[right][0] = pivot_item;
 a[right][1] = pivot_item_1;
 return right;
}//end partition

// void quicksort(int a[], int, int);

void printarray(int n,int a[n][2] );

int main()
{
 int a[5][2]={2,1,6,8,2,9,4,0,6,9}, i, n=5;
 //printf("\nEnter no. of elements: "); 
 //scanf("%d", &n);
 //printf("\nEnter the elements: \n");
 //for (i=0; i<n; i++)
  //scanf ("%d", &a[i]);
 printf("\nUnsorted elements: \n");
 printarray(n,a);
 quicksort(n,a,0,n-1);
 printf("\nSorted elements: \n");
 printarray(n,a);
 getch();

}//end main


void printarray(int n,int a[n][2])
{
 int i;
 for (i=0; i<n; i++)
  printf("%d %d   ", a[i][0],a[i][1]);
 printf("\n");
}//end printarray
