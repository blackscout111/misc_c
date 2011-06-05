// How to compile
/*  Open up cygwin
 *  cd to the folder where this file is saved
 *  type: "g++ -o exeName cfileName.c"
 */

#include<stdio.h>

int main()
{
    int x = 1;
    int y = 2;

    int *ptr = NULL;
    ptr = &x;

    printf("x= %d\n",x);
    printf("&x= %0X\n",&x);
    printf("y= %d\n",y);
    printf("&y= %0X\n",&y);
    printf("ptr= %0X\n",ptr);
    printf("&ptr= %0X\n",&ptr);
    printf("*ptr= %d\n",*ptr);
    
    return 0;
}
