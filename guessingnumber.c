#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{
    int randnum,num;
    bool condit=true; 
    char ch='y';
    printf("\n\t\t\tWelcome to number guessing game\n\n\n");
    
    
    srand(time(NULL));
    randnum=rand()%1000;
    printf("Guess the number between 1 to 1000!!!\n");
    while(condit)
    {
    scanf("%d",&num);
     if (randnum == num)
     {
         printf("Congratualion You Guessed number correctly!!!\n");
         printf("do you wanna guess again? (y/n):");
         scanf(" %c",&ch);
         if (ch=='y')
         {
           randnum=rand()%1000;
           printf("Guess the number between 1 to 1000!!!\n");  
           condit=true;
         }
         else if (ch=='n')
         {
             printf("Thanks for playing\n");
             condit=false;
         }
     }
     else if (randnum > num)
     {
         printf("Your Choosen Number is lower number, Choose something higher.\n");
     }
     else if (randnum < num)
     {
         printf("Your Choosen Number Is Higher number, Choose Something lower.\n");
     }
     
     }return 0;

}