/*
	Author : Ali ELABRIDI 
	Level: 1/3 (1 lowest & 3 highest)
	Question: Write a function that takes an array of integers and 
	a given size of the array and return the number of prime numbers in that array
*/
#include <stdio.h>
int isPrime(int N){
	for(i=2;i<N/2;i++)
		if( N%i == 0 )
			return 0;
	return 1;
}
int PrimeCounter(int arr[5],int size){
	int count = 0;
	int i;
	for(i=0;i<size;i++)
		if(isPrime(i))
			count++;
	return count;
}

int main(void){
	int arr[5]={3,4,1,2,5};
	printf("the number of odd number in the array is %d\n",PrimeCounter(arr,5));
	return 0;

}