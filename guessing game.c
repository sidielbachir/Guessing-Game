#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int chosen=0;
	
	int limit=20;
	
	int guess=0;
	int count=0;
	char another_game='y';
	printf("Hi,This is a guessing game!!!");
	printf("\n\nI've chosen a number between 1 and 20"
	              " ,which you must guess...");
	printf("\nPress Enter To Start: ");
	scanf("%c",&another_game);              
	do{
	srand(time(NULL));chosen=1+rand()%limit;
	
    for(count=3;count>0;--count)
    {
    	printf("\nEnter your %s guess :",
		            count==3 ? "first" :count==2? "second":"last");
		scanf("%d",&guess);
		if(guess==chosen)
		{
			printf("\n\tCongratulation,you guessed correctly *_*");
			break;
		}
		if(guess<1 || guess>20)printf("\tI said within this range"
		                                 " 0<guess<=20");
		else printf("\tSorry you guessed worng!!!");
		if(count==1) printf("\n\nYour last guess is worng too!!!"
			                        "the answer is %d",chosen);
	}
	printf("\n\n\tAnother round ?");scanf(" %c",&another_game);
	   
			                        
    }while(another_game=='y');
    return 0;
}
