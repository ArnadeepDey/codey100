#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{ char name[100]; int roll; int marks; };
int main(){ struct Student s; struct Student *p=&s; scanf("%s %d %d", p->name, &p->roll, &p->marks); p->marks += 5; printf("Name: %s | Roll: %d | Marks: %d\n", p->name, p->roll, p->marks); return 0; }
