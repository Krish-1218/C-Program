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

    total=sub1,sub2,sub3;
    percent=total/3;

    printf("\n\t Student Name \t:\t %s\n",student_name);
    printf("\n\t Student Roll No \t:\t %d\n",Stud_rollno);
    printf("\n\t Sub1 Marks  \t:\t %d\n",sub1);
    printf("\n\t Sub2 Marks  \t:\t %d\n",sub2);
    printf("\n\t Sub3 Marks  \t:\t %d\n",sub3);
    printf("\n\t Total Marks  \t:\t %d\n",total);
    printf("\n\t percentage  \t:\t %f\n",percent);

}