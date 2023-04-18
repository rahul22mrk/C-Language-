// Online C compiler to run C program online
#include <stdio.h>
int add(int ,int);
int mul(int,int);
int sub(int,int);
int divide(int,int);
int remainder_(int,int);

int main() {
    // Write C code here
   int a=50,b=11;
   
   int (*fun_ptr_arr[])(int,int)={add,sub,mul,divide,remainder_};
   
  printf("\nMenu:");
  printf("\n1 for addition...");
  printf("\n2 for substraction...");
  printf("\n3 for muliplication...");
  printf("\n4 for division...");
  printf("\n5 for remainder...");
  int ch;
  printf("\nEnter your choice...");
  scanf("%d",&ch);
  int res=(*fun_ptr_arr[ch-1])(a,b);
  printf("result is %d",res);
  
}

int add(int a,int b)
{
    return a+b;
}

int mul(int a,int b)
{
    return a*b;
    
}

int sub(int a,int b)
{
    return a-b;
}

int divide(int a ,int b)
{
    return a/b;
}

int remainder_(int a,int b)
{
    return a%b;
}
