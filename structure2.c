#include<stdio.h>

struct student
{
    int RollNo;
    char sName[20];
    float Marks;
};

int main(){

    int n;
    printf("How many students you want to add :");
    scanf("%d",&n);
    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Detail for %d student\n",i+1);
        printf("Enter The Roll No :");
        scanf("%d",&s[i].RollNo);

        printf("Enter The Name :");
        scanf("%s",s[i].sName);

        printf("Enter The Marks :");
        scanf("%f",&s[i].Marks);
    }

    printf("Data Added Successfully\n");

    printf("Student Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", s[i].RollNo);
        printf("Name: %s\n", s[i].sName);
        printf("Marks: %.2f\n", s[i].Marks);
    }

}
