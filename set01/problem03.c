#include<stdio.h>
int  input (){
int a;
printf("enter the number");
scanf("%d",&a);
return 0;
}

int add(int a,int b)
{
    int sum ;
    sum=a+b;
    return sum;
}
void output(int a,int b,int sum)
{
    printf("the sum of %d+%d=%d",a,b,sum);
}
int main(void)
{
    int a,b,sum;
    a= input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    retutn sum;
}