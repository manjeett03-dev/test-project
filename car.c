#include <stdio.h>
int main(void)
{
    int a, b;
    printf("enter 2 no. seperated by space :") ;
  if (scanf("%d %d", &a, &b) == 2) {
          printf("Sum: %d\n", a + b);
       } else {
    printf("Invalid input.\n");
       }
    return 0;
}