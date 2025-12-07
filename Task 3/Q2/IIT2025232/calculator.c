#include <stdio.h>

int main()
{
    printf("For addition press 1, for substraction press 2, for multiplication press 3, for division press 4\n");
    int a;
    int b; 
    int c;
    printf("Input the operation that you want too do . \n");
    scanf("%d",&a);
    printf("Enter the two numbers\n");
    scanf("%d %d",&b,&c);
    if(a == 1)
    {
        printf("%d",b+c);
    }
    if(a == 2)
    {
        printf("%d",b-c);
    }
     if(a == 3)
    {
        printf("%d",b*c);
    }
     if(a == 4)
    {
        printf("%d",b/c);
    }
    
}