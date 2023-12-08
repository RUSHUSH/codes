#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    float x,y,res;
    int choice;
    printf("enter the vslue of x and y");
    scanf("%f %f",&x,&y);
    printf("Enter your choice\n");
    printf("your choices are:\n1)Addition \n2)subtraction \n3)multiplication \n4)division");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: res=x+y;
                printf("The sum of the values is: %f",res);
                break;
        case 2: res=x-y;
                printf("The value after the subtraction is: %f",res);
                break;
        case 3: res=x*y;
                printf("The product of the values is: %f",res);
                break;
        case 4:  res=x/y;
                printf("The value after division is: %f",res);
                break;
        default: printf("invalid input");

    }
    getch();
}
    
