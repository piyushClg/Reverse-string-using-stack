#include <stdio.h>
#include <string.h>

#define MAX 100	

int top=-1;
int item;

char string[MAX];

void push(char item);

char pop(void);

int checkEmpty(void);

int checkFull(void);
 
int main()
{
    char str[MAX];
    
    int i;
    
    printf("Input a string: ");
    scanf("%[^\n]s",str);
    
    for(i=0;i<strlen(str);i++)
        push(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=pop();

    printf("Reversed String is: %s\n",str);
    
    return 0;
}
 
void push(char item)
{
    
    if(checkFull())
    {
        printf("\nStack is FULL !!!\n");
        return;
    }
    

    top=top+1;
    string[top]=item;
}
 

 char pop()
{

    if(checkEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }


    item = string[top];
    top=top-1;
    return item;
}
 

int checkEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

 
int checkFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
