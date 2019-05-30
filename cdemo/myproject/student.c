#include <stdio.h>
#include "student.h"

void printStudent (struct Student *student)
 {
  printf("First name: %s\n", student->firstname);
  printf("Last name: %s\n", student->lastname);
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n", student->studentid);
  }

