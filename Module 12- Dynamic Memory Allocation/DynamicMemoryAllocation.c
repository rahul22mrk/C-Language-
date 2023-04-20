// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int* malloc_function(int *);
int* calloc_function(int *);
int* realloc_function(int *);
int* free_function(int *);

int main() {
    
    int *ptr;
    //use of malloc()
    ptr=malloc_function(ptr);
    //use of calloc()
    ptr=calloc_function(ptr);
    //use of realloc()
    ptr=realloc_function(ptr);
    //use of free()
    ptr=free_function(ptr);
    return 0;
}

int* malloc_function(int *ptr)
{
    printf("\nMalloc Function using...");
    int n;
    printf("\nEnter the size of the array you want to create ");
    scanf("%d",&n);
    
    ptr= (int *)malloc (n*sizeof(int));
    
    int i=0;
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("\nArray Elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    return ptr;
}

int* calloc_function(int *ptr)
{
    printf("\n\n\nCalloc Function is using...");
    int n;
    printf("\nEnter the size of array which you want to create ");
    scanf("%d",&n);
    ptr=NULL;
    
    ptr=(int*) calloc (n,sizeof(int));
    printf("\n\nSize of Current Array is %lu",sizeof(ptr)*n);
    
    int i;
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("\nArray Elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    return ptr;
}


int* realloc_function(int *ptr)
{
    printf("\n\n\nRealloc Function Using...");
    
    ptr=calloc_function(ptr);
    printf("\nEnter new size of array which you want to resize of current array ");
    int n;
    scanf("%d",&n);
    
    ptr=(int *)realloc(ptr,n*sizeof(int));
    printf("\nNew Size After resizing array is %lu",sizeof(ptr)*n);
  
    printf("\n\nEnter array elements...");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("\nArray Elements are... ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",ptr[i]);
    }
    
    return ptr;
}

int* free_function(int *ptr)
{
    printf("\n\n\nFree() function is using now....");
    // deallocating the memory
    free(ptr);
    printf("\n\nNow Memory Dealloaction is done");
    
    printf("\nnow ptr is storing garbage value like this \n");
    // ptr now contains a garbage value address 
    printf("\nptr = %d", ptr);

    // assigning NULL to escape the garbage value errors
    ptr = NULL;

    printf("\n\nMemory freed at runtime!");
    return ptr;
}
