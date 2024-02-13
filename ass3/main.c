#include<stdio.h>
#include"head.h"

int a;
static int p;//internal linkage 
//1. life tym entire prog
//2. accessibility is for a file
//it is the combination of global and static var and can't be used with extern
int main(int argc,char* argv[]) //implicit args for main
//argv[0] = 100;
//argument count =1;
//------
//OS ----> main(1,"100"); " " bcoz its chaar array so that u can store any value irrespective of int,string,char
{
    printf("%s",argv[0]); //to print 100
    return 0;
}
void f3()
{
    a=80;//no need to write  extern int a; coz i.e "a" it is present in the same file
}