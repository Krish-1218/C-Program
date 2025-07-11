#include<stdio.h>
int main()
{
    float height,base,area,radius;
    int lenght, width,choice;

    printf("Enter The Choice :");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the height :");
        scanf("%f",&height);

        printf("Enter the base :");
        scanf("%f",&base);

        area=0.5*height*base;
        printf("Area of triangle : %f",area);
        break;

    case 2:
        printf("Enter the length :");
        scanf("%d",&lenght);

        printf("Enter the width :");
        scanf("%d",&width);

        area=lenght*width;
        printf(" \n Area of Reactangle is : %f",area);
        break;
    
    case 3:
        printf("Enter the Radius :");
        scanf("%f",&radius);

        area=3.14*radius*radius;
        printf("Area of circle is : %f",area);
        break;
    
    default:
    printf("Invalid Choice");
        break;
    }



}