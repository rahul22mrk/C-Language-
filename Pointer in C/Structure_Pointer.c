#include <stdio.h>  
#include<string.h>
// create a structure Subject using the struct keyword  
 
struct student{
    // declare the member of the Student structure  
    int roll_no;
    char name[50];
    char sub[50];
    int std;
    int marks;
};
    
   
  
int main()  
{  
    // declare the Subject variable 
    struct student s1;
    
    // create a pointer variable (*ptr)  
    struct student *struct_ptr;
  
  /* ptr variable pointing to the address of the structure variable sub */  
      struct_ptr=&s1;
      
      s1.roll_no=1;
      strcpy(s1.name,"Ramesh");
      strcpy(s1.sub,"Hindi");
      s1.std=10;
      s1.marks=95;
      
  
  
    // print the details of the Subject;  
    printf("\nStudent Roll_no is %d",(*struct_ptr).roll_no);
    printf("\nStudent name is %s",(*struct_ptr).name);
    printf("\nStudent Sub is %s",(*struct_ptr).sub);
    printf("\nStudent class is %d",(*struct_ptr).std);
    printf("\nstudent marks is %d",(*struct_ptr).marks);
   
  
    return 0;  
      
}  
