#include<stdio.h>  
#include<stdlib.h>  
#include<unistd.h>  
#include<string.h>  
int main()  
{  
int i;  
void *shared_memory;  
char buff[100];   
printf("Key of shared memory is %d\n");  
shared_memory=shmat(NULL,0);    
printf("Process attached at %p\n",shared_memory); 
printf("Enter some data to write to shared memory\n");  
read(0,buff,100); 
strcpy(shared_memory,buff); 
printf("You wrote : %s\n",(char *)shared_memory);  
}  

