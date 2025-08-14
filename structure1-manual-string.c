#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char sname[20];
};

int main(){

    struct student s1;
    s1.rollno=1;
    strcpy(s1.sname,"krish");

    printf("Roll is %d\n",s1.rollno);
    printf("Name is %s\n",s1.sname);
}