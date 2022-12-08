#include<stdio.h>
int fact(int);  //Function Declaration without Recursion
int factW(int);  //Function Declaration with Recursion

int main()
{
        int x;
        printf("x:");
        scanf("%d",&x);

        int a=fact(x);  //Function call
        printf("%d",a);

return 0;
}

int factW(int x)  //Function Definition Factorial with Recursion
{
        if(x==1)
                return 1;
        else
                return x*factW(x-1);
}

int fact(int x)  //Function Definition Factorial without Recursion
{
        int prod=1;
        for(int i=x;i>=1;i--)
        {
           prod=prod*i;
        }
        return prod;
}
