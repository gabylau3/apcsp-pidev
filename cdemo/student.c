#include <stdio.h>
#include <string.h>

struct Student 
  {
    char firstname[50];
    char lastname[50];
    int age;
    int studentid;
  };

void printStudent (struct Student *student)
 {
  printf("First name: %s\n", student->firstname);
  printf("Last name: %s\n", student->lastname);
  printf("Age: %d\n", student->age);
  }

int main ()
{
 struct Student Astudent;
 struct Student *student;
 *student = Astudent;

 char strA[] = 
 {
   strcpy(Astudent.firstname, "Abby")};
   strcpy(Astudent.lastname, "Addams");
   Astudent.age = 16;
   Astudent.studentid = 1111111;


printStudent(Astudent);

}
