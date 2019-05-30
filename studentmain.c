#include <stdio.h>
#include <string.h>
#include "student.h"

int main ()
{
 struct Student studentArr[50];
  
  int studentnumber;
  char input [300];
  printf("How many students?\n"); 
  fgets(input, 300, stdin);
  sscanf(input, "%d", &studentnumber);
  
  int count = 0;
  while (count < studentnumber)
  {
    char first[20];
    printf("Enter first name\n");
    fgets(input, 300, stdin);
    sscanf(input, "%s", first);
    strcpy(studentArr[count].firstname, first);
    
    char last[20];
    printf("Enter last name\n");
    fgets(input, 300, stdin);
    sscanf(input, "%s", last);
    strcpy(studentArr[count].lastname, first);
    
    int ageInput;
    printf("Enter student age:\n");
    fgets(input, 300, stdin);
    sscanf(input, "%d", &ageInput);
    studentArr[count].age = ageInput; 

    int idinput;
    printf("Enter student id:\n");
    fgets(input, 300, stdin);
    sscanf(input, "%d", &idinput); 
    studentArr[count].studentid = idinput;
    
    count++;
  }

for (int p = 0; p<studentnumber; p++)
{
  printStudent(&studentArr[p]);
}
  return 0;
}
