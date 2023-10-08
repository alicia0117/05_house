#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int input;
  printf("input an integer:");
  scanf("%d", &input);
  
  if(input > 0)
    printf("positive\n");
  else if (input < 0)
       printf("negative\n");
  else
       printf("zero\n");
  system("PAUSE");	
  return 0;
}
