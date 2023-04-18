//function-Pointer
//Function-Pointer with Argument and without a return value 
#include<stdio.h>
void function(); //function-prototype 

int main()
{
    
    //Declaration of function-pointer
    void (*function_ptr)();
    
    //Assigning address of display fun to the display_fun_ptr
    function_ptr=&function;
    
    
    //Calling a function using function pointer
    (*function_ptr)();
    
    printf("\nAddress of addition function is %u",function);
    
}

void function()
{
   printf("This is function-pointer without arguments and without a return values");
}
