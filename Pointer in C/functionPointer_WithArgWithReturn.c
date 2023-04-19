//function-Pointer
//Function-Pointer with Argument and without a return value 
#include<stdio.h>
int addition(int,int); //function-prototype 

int main()
{
    int num1,num2;
    printf("Enter the value of num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    
    //Declaration of function-pointer
    int (*addFunction_ptr)(int,int);
    
    //Assigning address of display fun to the display_fun_ptr
    addFunction_ptr=&addition;
    
    
    //Calling a function using function pointer
    int res=(*addFunction_ptr)(num1,num2);
    
    printf("\nAddition of num1 and num2 is %d",res);
    
}

int addition(int a,int b)
{
   return a+b;
}
