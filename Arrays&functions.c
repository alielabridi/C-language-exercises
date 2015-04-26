#include <stdio.h>
/*

	Author : Ali ELABRIDI 

	Question : Write a function that takes an array of characters and returns the characters that has the highest frequency of occurrence e.g:
	Array : a,b,a,c,b,d,I,o,a,d,c,n,l
		Will return the character ‘a’


	THINK ABOUT HOW TO SOLVE THE PROBLEM
		1. we need to know how many times a single character is repeated
		2. isolate the unique characters (create an array with characters not repeated)
		3. create a parralel array of integers that will put in front of each character how many times it was repeated
		4. loop through that parralel array of integer to see which index has the highest value
		5. extract from the array of unique-characters the character that has the same index
*/
int CheckCharInArray(char Uniqueletters[],int size, char CharToCheck){
	int i;
	for(i=0;i<size;i++)
		if(Uniqueletters[i] == CharToCheck)
			return 1;
	return 0;
}
void IsolateUniqueChar(char arr[],char Uniqueletters[],int size, int *CounterUniqueCharacters){
	int i;
	for(i=0;i<size;i++)
		if(CheckCharInArray(Uniqueletters,*CounterUniqueCharacters,arr[i]) == 0)
			Uniqueletters[(*CounterUniqueCharacters)++] = arr[i];

}
int NumberOfOccurence(char arr[],char CharToCheck,int size){
	int i;
	int Counter = 0;
	for(i=0;i<size;i++)
		if(arr[i] == CharToCheck)
			Counter++;
	return Counter;
	
}
int HighestCounterFrequency(int counterfrequency[],int CounterUniqueCharacters){
	/*will return the index of the cell that has the highest value*/
	int i;
	int MAX = counterfrequency[0];
	int MAX_index = 0;
	for(i=1;i<CounterUniqueCharacters;i++)
		if(counterfrequency[i]>MAX){
			MAX = counterfrequency[i];
			MAX_index = i;
		}
	return MAX_index;
}
char HighestFrequency(char arr[],int size){
	int i;
	int counterfrequency[size];
	char Uniqueletters[size];
	int CounterUniqueCharacters = 0;

	IsolateUniqueChar(arr,Uniqueletters,size,&CounterUniqueCharacters);

	for(i=0;i<CounterUniqueCharacters;i++)
		counterfrequency[i] = NumberOfOccurence(arr,Uniqueletters[i],size);

	return Uniqueletters[HighestCounterFrequency(counterfrequency,CounterUniqueCharacters)];
}

int main(void){
	char arr[]={'H','H','A','D','R','B','C'};
	
	printf("The character that has the highest occurence is %c\n",HighestFrequency(arr,7));
	
	return 0;

}
