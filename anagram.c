#include<stdio.h>
#include<string.h>

int factorial(int n);
int  flipSecLast(char *c,int l, int v);
int strrev(char *s,int l);
int iter(char *s,int l,int v, int *it);

int main(int argc, char *argv[])
{
    int sLength=strlen(argv[1]);
    int iterations;
 
    char secLast;
    char first;
    int variations;
    int it=0;
    char buff[sLength];
    iterations = factorial(sLength);
    strcpy(buff,argv[1]);
    variations=iterations/sLength;
    for(it=0;it<iterations;it++)
    {
        iter(buff,sLength,variations,&it);

    }
    printf("%i\n",it);
    
    //flipSecLast(argv[1],sLength,variations);

    
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
int strrev(char *s, int l){
    char buff[l+1];
    l--;
    for(int i=0;i<=l+1;i++)
    {
        buff[i]=s[l-i];
    }
    buff[l+1]='\0';
    strcpy(s,buff);
}

int flipSecLast(char *s,int l,int v)
{
    char buff[l+1];
    buff[0]=s[l-2];
    int count=0;
    for(int i=0;i<l+1;i++)
    {
        if(i!=l-2)
        {
            buff[count+1]=s[i];
            count++;
        }
    }
    strcpy(s,buff);
}

 int iter(char *s,int l,int v,int *it)
{
    char buff[l];
    strcpy(buff,s);
    for(int i=1;i<v;i++)
    {
        strrev(buff,l);
        printf("%s\n",buff);
        flipSecLast(buff,l,v);
        printf("%s\n",buff);
        (*it)+=1;
        i++;
    }
    printf("=============================\n");
    strcpy(s,buff);
}