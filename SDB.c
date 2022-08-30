#include <stdio.h> // Needed to use IO functions
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "SDB.h"
#define TRUE 1
#define FALSE 0


//globale const
int i;
int n;
int counter;
int count ;
int j;
int k;
typedef uint8;
////////////////////////////////////////////////////////////////////////
struct s_d {
int id;
int year;

char CRN_1[10];
float grade_1 ;

char CRN_2[10];
float grade_2 ;

char CRN_3[10];
float grade_3 ;

char courses[10];
float grades;


};
struct s_d stu_data[10];     //structure variable



void Menu()      //Main Menu to select option
{
    int n;
    printf("\n**********************************************");
    printf("\Enter the number of the operation you want to performe");
    printf("\n**********************************************");
    printf("\n1. Add New Student Profile");
    printf("\n2. Delete Student Profile");
    printf("\n3. Show All Student ID ");
    printf("\n4. Searching For ID");
    printf("\n**********************************************");
    printf("\nPlease enter your option< 1 / 2 / 3 / 4 >: ");
    scanf("%d", &n);

    switch(n){

        uint8 student_id;
        uint8 student_year;
        uint8 student_courses;
        uint8 student_grades;

    case 1:
    printf("\n===Add New Student Entry===");
    printf("\n\nPlease enter the following student information:");

        system("cls");
        printf("Information of student: %d\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &ptr->id);

        printf("Enter The Year: ");
        scanf("%d", &ptr->year);

            for (j=0;j<3;j++)
    {
    printf("select your courses:");
    printf("course %d\n", j+1);
    scanf("%s", &ptr[j]->courses);
    printf("your grades for each course:\n");
    printf("Enter The grade of coures %s :  ",ptr[j]->courses);
    scanf("%f", &ptr[j]->grades);


        SDB_AddEntry(uint8 id, uint8 year, uint8* subjects, uint8* grades);
        break;
    case 2:
        SDB_DeleteEntry(uint8 id);
        break;
    case 3:
        SDB_GetIdList(uint8* count, uint8* list);
        break;
    case 4:
        SDB_IsIdExist(uint8 ID);
        break;
    default:
        printf("\nError! Wrong Number is Entered\nPlease Try Again");
        break;
    }
}
bool SDB_IsFull(void)
{
int s_s;
for (i=0; i<s_s;i++)
{
    if(strcmp(stu_data[i],"")==0)
        return 0;

}
return 1;
}


uint8 SDB_GetUsedSize(void)
{
counter=0;
for (i=0;i,10;i++)
{

    if (strcmp(stu_data[i],"")!=0)
         counter++;
}
return counter;
}


bool SDB_AddEntry(uint8 id, uint8 year, uint8* subjects, uint8* grades)  //Add New student Profile
{
    struct s_d *ptr ;   //pointer to student structure
    ptr= &stu_data ;   //assigning value of structure variable


    if (SDB_IsFull()!=0){


    printf("\n===Add New Student Entry===");
    printf("\n\nPlease enter the following student information:");

    printf("\nSYSTEM: New Student Entry Is Added Successfully.");
    return 1;
}
    return 0;
}
}
void SDB_DeleteEntry(uint8 id)
{
    for (i=0;i<counter;i++)
    {
        if (id==stu_data[i].id)
        {
            for(j=i;j<counter-1;j++)
            {
                stu_data[j]=stu_data[j+1];
            }
            counter--;
        }
    }
    return;
}
bool SDB_ReadEntry(uint8 id, uint8* year, uint8* subjects, uint8* grades)
{
    i=0;
    uint8 *l=malloc(currentsize * sizeof(uint8));
    for(i=0;i<SDB_GetUsedSize();i++)
    {
        if (id==stu_data[i].id)
        {
            *year=stu_data[i].year;
            subjects=stu_data[i].courses;
            grades=stu_data[i].grades;
            return TRUE;
        }
    }
    return FALSE;
    */

void SDB_GetIdList(uint8* count, uint8* list)
{

for(i=0;i<counter;i++)
{
    printf("ID = %d\n",stu_data[i].id);
}
}

