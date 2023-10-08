#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int answer = 32;
   int num;
   int trial = 0;
   
   while (1)
   {
         printf("Guess a number: ");
         scanf("%d",&num);
         
         if (num > answer)
         {
                 printf("high!\n");
         }
         else if (num < answer)
         {
              printf("low!\n");
         }
         else
         {
             printf("congrtulation! trials:%d\n", trial);
             system("PAUSE");
             break;
         }
         
         
         trial++;
   }	
  return 0;
}
