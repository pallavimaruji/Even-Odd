#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
        printf("Number is even");
    else
        printf("Number is odd");

    getch();
}
