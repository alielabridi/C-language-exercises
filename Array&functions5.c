/*

	Author : Ali ELABRIDI
	Level: 2/3 (1 lowest & 3 highest)

	Question: Write a function that reverses the order of a given array. E.g:
	Array (at the beginning): 
	A	H	B	F	I	O	I	4	R
	Same array after reversing:
	R	4	I	O	I	F	B	H	A



*/
#include <stdio.h>
void ReverseArray(char arr[5],int size){
	int i;
	char temp;
	for(i=0;i<size/2;i++){
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp;
	}

	
}

int main(void){
	char arr[5]={'c','H','A','/','*'};
	int i;
	printf("the content of the array is: ");
	for(i=0;i<5;i++)
			printf("%c ",arr[i]);
	printf("\n");

	ReverseArray(arr,5);

	printf("the content of the array after reversing is: ");
	for(i=0;i<5;i++)
			printf("%c ",arr[i]);
	printf("\n");
	
	return 0;

}
