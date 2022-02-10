#include<stdio.h>
#include "marksheet.h"

void input();
int calculations();
void show();
void result();
void remark();
int r,sem,subjects,total,marks[20],temp;
float per;
char ay[100],b[100],ch[100],a[100],d[100],c[100],grade,res[5],rem[16],sub[20][20];
char s[] = "pass";
char s1[] = "fail";
char s3[] = "Congratulations";
char s4[] = " ";


void input()
{
    printf("Enter your name : ");
    gets(ch);
    printf("Enter place : ");
    gets(b);
    printf("Enter clg name : ");
    gets(a);
    printf("Enter AcademicYear (yyyy-yy):");
    gets(ay);
    printf("Enter DATE of Birth(dd/mm/yyyy) : ");
    gets(d);
    printf("Enter ROLL NO : ");
    scanf("%d",&r);
    printf("Enter Semester : ");
    scanf("%d",&sem);
    if(sem>10)
    {
        printf("Program Terminated\nPlease enter correct number of semester");
        exit(1);
    }
    printf("Enter Course : ");
    scanf("%s",&c);
    printf("Enter Number of Subjects: ");
    scanf("%d",&subjects);
    if(subjects>10)
    {
        printf("Program Terminated\nPlease enter correct number of subjects");
        exit(1);
    }
    for(int i=0;i<subjects;i++)
    {
        printf("\n Enter the subject ");
        scanf("%s",&sub[i][20]);
        printf("\n Enter the marks ");
        scanf("%d",&marks[i]);
        if(marks[i]<0 || marks[i]>100)
        {
            printf("Renter correct marks : ");
            scanf("%d",&marks[i]);
        }
    }
}

void show()
{
    int i=0,i1=0,j=0,j1=0,j2=0,k=0,k1=0,l=0,l1=0;
    while(i1<113)
    {
        printf("*");
        i1++;
    }
    printf("\n|");
    printf("\n| \t\t\t COLLEGE NAME : %s",a);
    printf("\n|\n");
    printf("\n| \t\t\t COURSE :%s",c);
    printf("\n|\n");
    printf("\n| \t\t\t Academic Year :%s",ay);
    printf("\n|\n");
    while(i<113)
    {
        printf("-");
        i++;
    }
    printf("\n| NAME : %s",ch);
    printf("\n| DATE OF BIRTH : %s",d);
    printf("\n| CLG NAME : %s",a);
    printf("\n| PLACE : %s",b);
    printf("\n| ROLL NO. : %d",r);
    printf("\n| Semester : %d\n",sem);
    while(j<113)
    {
        printf("-");
        j++;
    }
    printf("\n|\tSUBJECTS\t\t\t\t|\tobtained marks\t\t|\tTotal\t\t\t|\n");
    while(k<113)
    {
        printf("-");
        k++;
    }
    for(int i=0;i<subjects;i++)
    {
    printf("\n|\t %s \t\t\t\t\t| \t%d\t\t\t|\t100\t\t\t|\n",sub+1+i,marks[i]);
    }
    while(l<113)
    {
        printf("-");
        l++;
    }
    printf("\n|\tTotal marks obtained\t\t| \t Out of Marks\t | PERCENTAGE\t| \t Result |   GRADE   |\n");
    while(l1<113)
    {
        printf("-");
        l1++;
    }
    printf("\n|\t\t%d\t\t\t| \t %d\t\t | %.2f\t| \t %s \t|     %c   |\n",total,(subjects*100),per,res,grade);
    while(k1<113)
    {
        printf("*");
        k1++;
    }
    printf("\n|");
    printf("\n|\t\t\t\t%s You are %sed !",rem,res);
    printf("\n| \n");
    while(j1<113)
    {
        printf("*");
        j1++;
    }
    printf("\n\n\n");
    printf("\n\t\tPrincipal      \t\t\t    Student\n");
     while(j2<113)
    {
        printf("*");
        j2++;
    }
    printf("\n\n\n");
    printf("\n\t\t\t\t\t\tMADE BY INDRAJITH :) \n");
}

int calculations()
{

    char res[5];
    int temp=0;
    for(int i=0;i<subjects;i++)
    {
       temp=temp+marks[i];
    }

    total = temp;
    per = total/subjects;


    if(per>= 90)
    grade = 'S';
    else if(per>= 80)
    grade = 'A';
    else if(per>= 70)
    grade = 'B';
    else if(per>= 60)
    grade = 'C';
    else if(per>= 50)
    grade = 'D';
    else if(per>= 40)
    grade = 'E';
    else
    grade = 'F';
}
void result()
{
    if(per>35)
    {
        strcpy(res,s);
    }
    else
        strcpy(res,s1);
}
void remark()
{
    if(per>35)
    {
        strcpy(rem,s3);
    }
    else
        strcpy(rem,s4);
}
