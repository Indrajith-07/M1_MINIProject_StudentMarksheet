#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void input();
int calculations();
void show();
void result();
void remark();
int r,sem,subjects,total,marks[20],temp;
float per;
char b[20],ch[20],a[50],d[30],c[20],grade,res[5],rem[16],sub[20][20];
char s[] = "pass";
char s1[] = "fail";
char s3[] = "Congratulations";
char s4[] = " ";

int main()
{
    input();
    calculations();
    result();
    remark();
    show();
    return 0;
}

void input()
{
    printf("Enter your name : ");
    gets(ch);
    printf("Enter place : ");
    gets(b);
    printf("Enter clg name : ");
    gets(a);
    printf("Enter DATE of Birth(dd/mm/yyyy) : ");
    gets(d);
    printf("Enter ROLL NO : ");
    scanf("%d",&r);
    printf("Enter Semester : ");
    scanf("%d",&sem);
    printf("Enter Course : ");
    scanf("%s",&c);
    printf("Enter Number of Subjects: ");
    scanf("%d",&subjects);
    if(subjects>10)
    {
        printf("Program Terminated\n");
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
    int i=0,i1=0,j=0,j1=0,k=0,k1=0,l=0,l1=0;
    while(i1<113)
    {
        printf("*");
        i1++;
    }
    printf("\n|");
    printf("\n| \t\t\t %s ",c);
    printf("\n|\n");
    printf("\n| \t\t\t %s ",a);
    printf("\n|\n");
    while(i<113)
    {
        printf("-");
        i++;
    }
    printf("\n| NAME : %s \t \t",ch);
    printf("\n| DATE OF BIRTH : %s \t\t\t\t\t\t PLACE : %s",d,b);
    printf("\n| CLG NAME : %s \t \t ",a);
    printf("\n| ROLL NO. : %d \t",r);
    printf("\n| Semester : %d \n",sem);
    while(j<113)
    {
        printf("-");
        j++;
    }
    printf("\n|\tSUBJECTS\t\t\t\t|obtained marks\t\t\t|Total\t\t\t\t|\n");
    while(k<113)
    {
        printf("-");
        k++;
    }
    for(int i=0;i<subjects;i++)
    {
    printf("\n|\t %s \t\t\t\t\t| %d\t\t\t\t| 100\t\t\t\t|\n",sub+1+i,marks[i]);
    }
    while(l<113)
    {
        printf("-");
        l++;
    }
    printf("\n|\tTotal marks obtained\t\t| \t Out of Marks\t | PERCENTAGE\t| \t Result | GRADE |\n");
    while(l1<113)
    {
        printf("-");
        l1++;
    }
    printf("\n|\t\t%d\t\t\t| \t %d\t\t | %.2f\t| \t %s\t| %c |\n",total,(subjects*100),per,res,grade);
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
    printf("\n\t\t\t\t\t\tMADE BY INDRAJITH :) \n");
//printf("\n\n\n");
/*while(z<113){
  printf("*");
  z++;}*/
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
    grade = 'A';
    else if(per>= 80)
    grade = 'B';
    else if(per>= 70)
    grade = 'C';
    else if(per>= 60)
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
