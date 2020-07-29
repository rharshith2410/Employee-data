#include<stdio.h>
struct employee {
  char name[50];
  int phno,age;
  int salary;
};

void display(struct employee emp [], int n)
{
  int i;
  printf ("Name\tage\tphno\tsalary\n");
  for(i=0;i<n;i++)
   {
     printf("%s \t %d \t %d\t %d", emp[i].name,emp[i].phno,emp[i].age,emp[i].salary);
   }

int main()
{
  int i, n=20;
  struct employee emp;

 for(i=0;i<n;i++)
  { 
    gets(emp[i].name)
    scanf(" %d %d %d",&emp[i].phno,&emp[i].age,&emp[i].salary);
  }

 void display ();
 return 0;
}


