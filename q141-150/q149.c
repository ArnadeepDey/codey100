#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{ char name[100]; int roll; int marks; };
int main(){ struct Student *p=malloc(sizeof(*p)); scanf("%s %d %d", p->name, &p->roll, &p->marks); printf("Name: %s | Roll: %d | Marks: %d\n", p->name, p->roll, p->marks); free(p); return 0; }
