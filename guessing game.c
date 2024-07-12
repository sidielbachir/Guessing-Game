#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int chosen=0;
	srand(time(NULL));
	int limit=20.0;
	chosen=1+rand()%limit;
	int guess=0;
	int count=0;
	
	printf("Hi,This is a guessing game!!!");
	printf("\n\nI've chosen a number between 1 and 20"
	              " ,which you must guess...");
    for(count=3;count>0;--count)
    {
    	printf("\nEnter your %s guess :",
		            count==3 ? "first" :count==2? "second":"last");
		scanf("%d",&guess);
		if(guess==chosen)
		{
			printf("\nCongratulation,you guessed correctly *_*");
			return 0;
		}
		if(guess<1 || guess>20)printf("\nI said within this range"
		                                 " 0<guess<=20");
		else printf("\nSorry you guessed worng!!!");
		
	}
	   printf("\nYour last guess is worng too!!!"
			                        "the answer is %d",chosen);
	
}