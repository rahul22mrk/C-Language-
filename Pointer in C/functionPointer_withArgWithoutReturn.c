//function-Pointer
//Function-Pointer with Argument and without a return value 
#include<stdio.h>
void display(int,int); //function-prototype 

int main()
{
    int num1,num2;
    printf("Enter the value of num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    
    void (*display_fun_ptr)(int ,int);//Declaration of function-pointer
    display_fun_ptr=&display;//Assigning address of display fun to the display_fun_ptr
    (*display_fun_ptr)(num1,num2);//Calling a function using function pointer
    
}

void display(int a,int b)
{
    printf("\nValue of a and b is %d %d",a,b);
}
