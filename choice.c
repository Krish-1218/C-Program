#include<stdio.h>
int main(){

    int choice,base,height,lenght,breadth,repeat;
    float area,radius;
    
    menu:
    printf("\n 1-Area of Traingle \n 2-Area of Circle \n 3-Area of Reactangle");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("Enter base and height of the traingle : ");
        scanf("%d%d",&base,&height);
        area= 0.5*base*height;
        printf("Area of traingle is : %f",area); 
    }
    else if (choice==2)
    {
        printf("Enter the Radius of circle : ");
        scanf("%f",&radius);
        area= 3.14*radius*radius;
        printf("Area of Circle is : %f",area);
    }
    else if (choice==3)
    {
        printf("Enter lenght and breadth of reactangle ");
        scanf("%d%d",&lenght,&breadth);
        area=lenght*breadth;
        printf(" \n Area of Reactangle is : %f",area);
    }
    else{
        printf("Invaild choice");
    }

    printf(" \n You want to Continue press 1 ");
    scanf("%d",&repeat);
    if (repeat==1)
    {
        goto menu;
    }
    
    
}