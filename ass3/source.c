#include<stdio.h>
#include"head.h"
//global is the only var which can be accessed in multiple tyms

//if the var can be accessed in multiple files is external linkage(Global var)
//if the var can be accessed in one file is internal linkage(static+global)
//auto var register var and static var local ==> (no linkage)


void f1()
{
    extern int a;//we are telling the compiler "a" 
    //is the var which is of int data type that is declared externally 

    // then linker will search this in global section then we get error
    a=100;
}

void f2()
{
    extern int b; //extern can be used to only for the variable
    //that is decalred outside of the block
    //and also u can't use this in another function
    //and also "in" the block

    b=90;
    printf("%d\n",b);
}

int b;