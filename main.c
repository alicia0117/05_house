#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   char c;
   int num = 0;
   
   printf("input a string: ");
   scanf("%c");
   
   while((c=getchar())!= '\n')
   {
        if (c >= '0' && c<= '9')
            num = num +1;
   }
  
  printf("no. of digits is %i\n", num);
  
  system("PAUSE");	
  return 0;
}
