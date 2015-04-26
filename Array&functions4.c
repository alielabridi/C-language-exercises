/*
	Author : Ali ELABRIDI 
	Level: 1/3 (1 lowest & 3 highest)
	Question: Write a function that takes an array of characters and given size of the array and 
	return(using pointers) the number of upper and lower case letter in the array


*/
#include <stdio.h>
void CounterUpperLower(char arr[5],int size,int *CounterUpper, int *CounterLower){
	int i;
	for(i=0;i<size;i++){
		if( arr[i]>= 'A' && arr[i]<='Z')
			(*CounterUpper)++;
		else if(arr[i]>= 'a' && arr[i]<='z')
			(*CounterLower)++;
	}
}

int main(void){
	char arr[5]={'c','H','A','/','*'};
	int CounterUpper = 0, CounterLower = 0;
	CounterUpperLower(arr,5,&CounterUpper,&CounterLower);
	printf("the number of odd uppercases in the array is %d, and lowercases %d\n",CounterUpper,CounterLower);
	return 0;

}