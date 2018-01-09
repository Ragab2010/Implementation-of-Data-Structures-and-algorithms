/*
 * selection_sort.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */
#include <stdio.h>
#define N 5


void fun_seleSort(int *a , int size){
	int i,j,temp,min,min_order;
	min=a[0];
	min_order=0;
	for(i=0;i < size;i++){
		for(j=i+1 ; j < size ;j++){
			if(a[j]<min){
				min=a[j];
				min_order=j;
			}

		}
		temp = a[i];
		a[i] = min;
		a[min_order] = temp;
		min =a[i+1];
		min_order=i+1;
	}

}

void fun_sel(int *array ,int n){
	for(int x=0; x<n; x++)

		{

			int index_of_min = x;

			for(int y=x; y<n; y++)

			{

				if(array[index_of_min]>array[y])

				{

					index_of_min = y;

				}

			}

			int temp = array[x];

			array[x] = array[index_of_min];

			array[index_of_min] = temp;

		}

}

void bubbleSort(int arr[], int n)
{
   int i, j,temp;
   char isSorted;
   for (i = 0; i < n-1; i++)
   {
     isSorted = 1;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           temp = arr[j+1];
           arr[j+1] = arr[j];
           arr[j] = temp;
           isSorted = 0;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (isSorted)
        break;
   }
}
void fun_bubllSort(int *a , int size){
	int i,j,temp, isSorted=1;
	for(i =0 ; i < size ;i++){
		for(j=size-1; j > i ;j--){
			if(a[j-1] > a[j]){
				temp = a[j-1];
			   a[j-1] = a[j];
			   a[j] = temp;
			   isSorted = 0;
			}
		}
		if(isSorted)
			break;
	}
}

void fun_insetSort(int *a ,int size){
	int i,j,temp;
	for(i=1; i< size ;i++){
		for(j = i ; a[j]<a[j-1];j--){
			temp = a[j-1];
		    a[j-1] = a[j];
		    a[j] = temp;
		}
	}

}

/****************merge sort*****************/
void merge(int *l , int *r , int *a, int nl , int nr ){
	int i , j , k;// make counter for every arr (left - right -orginal a)
	i =0; j =0;k = 0; //make it count from zero
	while(i<nl && j<nr){
		/*
		 * while  i and j (left and right arr ) has element
		 * */
		if(l[i] < r[j]){
			a[k++] = l[i++];

		}else{
			a[k++] = r[j++];

		}
	}
	while(i<nl){/*
	while left arr still has element only and right is finished */
		a[k++] = l[i++];

	}
	while(j<nr){/*
	while right arr still has element only and left  is finished */
		a[k++] = r[j++];

	}
}

void mergesort(int *a , int n){
	int mid,i,nl,nr;
	if( n <2){//this is the base condition for stop and return recursive
		return;
	}
	mid = n/2;//calc the midel of a
	nl=mid; //size of left arr
	nr=n-mid;//size of right arr
	int left[nl];//create arr for left arr by size of it nl
	int right[nr];//create arr for right arr by size of it nr
	for(i=0 ; i<mid ;i++){//copy elemnt from 0 to mid to left arr
		left[i] = a[i];
	}
	for(i=mid; i<n; i++){//copy elemnt from mid to n to right arr
		right[i-mid] = a[i];
	}
	mergesort(left , nl);// recursive call for sort left arr
	mergesort(right , nr);// recursive call for sort right arr
	merge(left , right , a ,nl , nr);// cal merge fun to merge the left and right arr in the orginal arr a
}

/***************quick sort*******************/

int partition(int *a , int start , int end){
	int i, temp; // i for loop and temp for swap
	int pivot = a[end];//make pivot the last element in arr
	int partitionIndex = start;/**
	*for place all elment that's is small than pivot in the frist arr
	*pefor the pivot
	*/
	for(i=start ; i < end;i++){//count from 0 to end-1 before pivot
		if(a[i] <= pivot){
			/*for swap all the small than pivot in the frist arr*/
			temp = a[i];
			a[i] = a[partitionIndex];
			a[partitionIndex]=temp;
			partitionIndex++;// increment the position that will place in head of arr
		}
	}
	/*then swap the pivot with the frist large element than pivot*/
	temp = a[end];
	a[end] = a[partitionIndex];
	a[partitionIndex]=temp;
	return partitionIndex;//return the position of pivot for send right arr and left arr

}
void quicksort(int *a , int start, int end){

	if(start < end){//conditon for return if the arr is 1 element
	int partionIndex = partition(a, start , end);
	quicksort(a ,start ,  partionIndex -1);//recursive the left arr to sort and make partition
	quicksort(a , partionIndex +1 ,end );//recursive the right arr to sort and make partition
	}

}
#define pi 3.14
void printCir(int n){
	int i ,j , ss;
	for(i=1 ; i<n;i++){
		ss= 2 * pi *i;
		for(j=1;i<ss;j++){
			printf("*");
		}
	}
}
int main(){
	int i,a[N] ={3,5,6,8,1};
	quicksort(a ,0,4);
		for(i=0 ; i<N ; i++){
			printf("%d\t",a[i] );
		}



return 0;
}
