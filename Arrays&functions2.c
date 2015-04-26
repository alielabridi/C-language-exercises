/*
	Author : Ali ELABRIDI
	Level: 1/3 (1 lowest & 3 highest)
	Question : Write a function that takes an array of integers and a given 
	size of the array and return the number of odd numbers in that array
*/
#include <stdio.h>
int OddsCounter(int arr[5],int size){
	int count = 0;
	int i;
	for(i=0;i<size;i++)
		if( arr[i]%2 == 1)
			count++;
	return count;
}

int main(void){
	int arr[5]={3,4,1,2,5};
	printf("the number of odd number in the array is %d\n",OddsCounter(arr,5));
	return 0;

}