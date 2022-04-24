/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d=4,e=5,ans,value,x;
    printf(" Enter the value of a :");
    scanf("%d",&a);
    printf(" Enter the value of b :");
    scanf("%d",&b);
   
    //arithmetic operators
    c=a+b;
    printf("a+b = %d\n",c);
    c=a-b;
    printf("a-b = %d\n",c);
    c=a*b;
    printf("a*b = %d\n",c);
    c=a/b;
    printf("a/b = %d\n",c);
    c=a%b;
    printf("amodb = %d\n",c);
   
    //increment and decrement operators
    printf("++a = %d\n",++a);
    printf("--a = %d\n",--a);
    printf("b++ = %d\n",b++);
    printf("b-- = %d\n",b--);
   
    // assignment operators
    e+=d;
    printf("e+=d is  %d\n", e);  /*d=4,e=5*/
    e-=d;     
    printf("e-=d is %d\n", e);
    c *=d;     
    printf("e*=d is %d\n", e);
    e/=d;     
    printf("e/=d is %d\n", e);
    e%=d;     
    printf("e mod=d is %d\n", e);
   
    //relational operators
     printf("a == b is %d \n",a == b);
     printf("a > b is %d \n", a > b);
    printf("a < b is %d \n",a < b);
    printf("a != b is %d \n",a != b);
   printf("a >= b is %d \n",a >= b);
   printf("a <= b is %d \n",a <= b);
   
   //logical operators
    ans = (a == b)&&(e > b);
    printf("(a == b)&&(e > b) is %d \n", ans);
    ans = (a == b)&&(e < b);
    printf("(a == b)&&(e < b) is %d \n", ans);
    ans = (a == b)||(e < b);
    printf("(a == b)||(e < b) is %d \n", ans);
    ans = (a != b)||(e < b);
    printf("(a != b)||(e < b) is %d \n", ans);
    
    //bitwise operators
    printf("a & b is %d\n ",a&b);
    printf("a | b is %d\n ",a|b);
    printf("a ^ b is %d\n ",a^b);
     printf("~a  is %d\n",~a);
     printf("a<<2 is %d\n",a<<2);
     printf("a>>2 is %d\n",a>>2);
     
     //size of operators
     printf("size of a = %ld \n",sizeof(a));
     
     //comma operator
     value=(a,b,a+b);
     printf("value = %d\n",value);
     
     //conditional operator
    x=(a>b?a:b);
    printf("x=%d\n",x);
     x=(a<b?a:b);
    printf("x=%d\n",x);
  

    return 0;
}
