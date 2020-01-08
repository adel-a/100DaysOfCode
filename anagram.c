#include<stdio.h>
#include<string.h>

int factorial(int n);
int printC(char arr[]);
int main(int argc, char *argv[])
{
    int sLength=strlen(argv[1]);
    int iterations;
    int i;
    char buff[sLength+1];
    char buff2[sLength+1];
    char buff3[sLength+1];
    char secLast;
    char first;
    strcpy(buff,argv[1]);
    iterations = factorial(sLength);
    for (i=0;i<iterations;i++)
    {
        secLast=buff[sLength-1];
        first=buff[0];
        printC(buff);
        printf("%s\n",buff);
    }
    
}

int factorial(int n)
{
    int result=n;
    for (int i = n-1;i > 0;i--)
    {
        result = result * i;
    }
    return result;
}

int printC(char *arr)
{
    
    arr[0]='Z';
 
}