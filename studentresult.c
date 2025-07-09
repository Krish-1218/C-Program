#include<stdio.h>

int main(){

    char student_name[10];
    int Stud_rollno;
    int sub1,sub2,sub3,total;
    float percent;

    printf("Enter Student Name : ");
    scanf("%s",student_name);

    printf("Enter Roll No :");
    scanf("%d",&Stud_rollno);

    printf("Enter Subject marks");
    scanf("%d%d%d",&sub1,&sub2,&sub3);

    total=sub1+sub2+sub3;
    percent=total/3;

    printf("\n\t\t Student Name \t\t:\t %s",student_name);
    printf("\n\t\t Student Roll No :\t %d",Stud_rollno);
    printf("\n\t\t Sub1 Marks  \t\t:\t %d",sub1);
    printf("\n\t\t Sub2 Marks  \t\t:\t %d",sub2);
    printf("\n\t\t Sub3 Marks  \t\t:\t %d",sub3);
    printf("\n\t\t Total Marks  \t\t:\t %d",total);
    printf("\n\t\t percentage  \t\t:\t %f",percent);

    if ((sub1>=40)&&(sub2>=40)&&(sub3>=40))
    {
        printf("\n\t\t Student is Pass");

        if (percent>=40&&percent<=60)
        {
             printf("\n\t\t Grade is C");
        }
        else if (percent>=60&&percent<=75)
        {
             printf("\n\t\t Grade is B");
        }
        else{
             printf("\n\t\t Grade is A");
        }        
    }
    else{
        printf("\n\t\tStudent is Fail");
    }
    
}