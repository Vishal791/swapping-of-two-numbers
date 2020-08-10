#include<stdio.h>
main()
{
int x = 0,y= 0;
printf("Enter any two integer numbers\n");
scanf("%d%d", &x,&y);
x= x+y;
y= x-y;
x= x-y;
printf("After swapping the numbers are: %d %d", x,y);
return 0;
}
