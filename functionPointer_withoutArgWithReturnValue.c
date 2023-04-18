//function-Pointer
//Function-Pointer with Argument and without a return value 
#include<stdio.h>
int function(); //function-prototype 

int main()
{
    
    //Declaration of function-pointer
    int (*function_ptr)();
    
    //Assigning address of display fun to the display_fun_ptr
    function_ptr=&function;
    
    
    //Calling a function using function pointer
   int success= (*function_ptr)();
   if(success==1)
   {
       printf("\nFunction executed Successfully");
       
   }else{
       printf("\nFunction not executed Successfully");
   }
    
    printf("\nAddress of addition function is %u",function);
    
}

int function()
{
   printf("This is function-pointer without arguments and without a return values");
}
