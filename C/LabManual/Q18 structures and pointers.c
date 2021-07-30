#include <stdio.h>
 
struct student 
{
     int id;
     char name[30];
     float percentage;

 
int main() 
{
     int i;
     struct student record1 = {2, "Lionel", 58.4};
     struct student *ptr;
 
     ptr = &record1;     
 
         printf("Records of STUDENT 2: \n");
         printf("Id: %d \n", ptr->id);
         printf("Name: %s \n", ptr->name);
         printf("Percentage: %.2f \n\n", ptr->percentage);
 
     return 0;
}
