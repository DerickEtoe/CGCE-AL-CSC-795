#include <stdio.h>

void Initialise(int *MaxNoOfStars, int *NoOfSpaces, int *NoOfStars);
void OutputLeadingSpaces(int nSpaces);
void OutputLineOfStars(int nStars);
void Adjust(int *NoOfSpaces, int *NoOfStars);
void AdjustDown(int *NoOfSpaces, int *NoOfStars);

int MaxNoOfStars = 11, NoOfSpaces, NoOfStars =1;

int main(){
		
	printf("\nPlease enter an odd number: ");
	scanf("%d", &MaxNoOfStars);
	
	Initialise(&MaxNoOfStars, &NoOfSpaces, &NoOfStars);
	
	do{
		OutputLeadingSpaces(NoOfSpaces);
		OutputLineOfStars(NoOfStars);
		Adjust(&NoOfSpaces, &NoOfStars);
		printf("\n");		
	}while(NoOfStars <= MaxNoOfStars);
	
	NoOfStars = NoOfStars - 2;
	NoOfSpaces = NoOfSpaces + 1;
	
	do{
		AdjustDown(&NoOfSpaces, &NoOfStars);
		OutputLeadingSpaces(NoOfSpaces);
		OutputLineOfStars(NoOfStars);		
		printf("\n");		
	}while(NoOfStars >= 1);
	
	return 0;
}

void Initialise(int *MaxNoOfStars, int *NoOfSpaces, int *NoOfStars){
	*MaxNoOfStars = *MaxNoOfStars;
	*NoOfSpaces = (*MaxNoOfStars - 1)/2;
	*NoOfStars = *NoOfStars;
}

void OutputLeadingSpaces(int nSpaces){
	int i;
	for(i=0; i<nSpaces; i++){
		printf(" ");
	}
}
void OutputLineOfStars(int nStars){
	int i;
	for(i=0; i<nStars; i++){
		printf("*");
	}
}
void Adjust(int *NoOfSpaces, int *NoOfStars){
	//printf("NoSpaces: %d\nNoStars: %d", *NoOfSpaces, *NoOfStars);
	*NoOfSpaces = *NoOfSpaces - 1;
	*NoOfStars = *NoOfStars + 2;
}
void AdjustDown(int *NoOfSpaces, int *NoOfStars){
	*NoOfSpaces = *NoOfSpaces + 1;
	*NoOfStars = *NoOfStars - 2;
}


