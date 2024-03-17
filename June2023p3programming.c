#include <stdio.h>

void Initialise(int MaxNoOfStars, int NoOfSpaces, int NoOfStars);
void OutputLeadingSpaces(int nSpaces);
void OutputLineOfStars(int nStars);
void AdjustDown(int NoOfSpaces, int NoOfStars);
void AdjustDown(int NoOfSpaces, int NoOfStars);

int MaxNo_OfStars, No_OfSpaces, No_OfStars;

int main(){
	int base;
	
	printf("\nEnter the number of stars at the base: ");
	scanf("%d", &base);
	
	Initialise(base, 5, 1);
	
	do{
		OutputLeadingSpaces(No_OfSpaces);
		OutputLineOfStars(No_OfStars);
		Adjust(No_OfSpaces, No_OfStars);
		printf("\n");
	}while(No_OfStars <= MaxNo_OfStars);
	
	No_OfSpaces = 0;
	No_OfStars = MaxNo_OfStars;
	
	do{
		AdjustDown(No_OfSpaces, No_OfStars);
		OutputLeadingSpaces(No_OfSpaces);
		OutputLineOfStars(No_OfStars);		
		printf("\n");
	}while(No_OfStars > 1);
	
	return 0;
}
void AdjustDown(int NoOfSpaces, int NoOfStars){
	No_OfSpaces = NoOfSpaces + 1;
	No_OfStars = NoOfStars - 2;
}
void Adjust(int NoOfSpaces, int NoOfStars){	
	No_OfSpaces = NoOfSpaces - 1;
	No_OfStars = NoOfStars + 2;
}
void OutputLineOfStars(int nStars){
	int i;
	for(i=0; i<nStars; i++){
		printf("*");
	}
}
void OutputLeadingSpaces(int nSpaces){
	int i;
	for(i = 0; i<nSpaces; i++){
		printf(" ");
	}
}
void Initialise(int MaxNoOfStars, int NoOfSpaces, int NoOfStars){
	MaxNo_OfStars = MaxNoOfStars;
	No_OfSpaces = (MaxNo_OfStars - 1)/2;
	No_OfStars = NoOfStars;
}
