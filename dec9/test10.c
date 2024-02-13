#include<stdio.h>
void display(int (*)[]);
int main()
{
    int arr[2][3] = {10,20,30,40,50}; // 10 20 30
    display(arr);                     // 40 50
}
void display(int (*b)[3]) //must to give the column size 
//this is the pointer notation for 2D array
//hiding the rows with * and showing the column with subscript
//by removing the () in (*b) --> it will print the addresses
{
    //b++;//this will increment by 3*4 = 12 bytes
    //it is expected to move by 1 row

    for(int i=0 ;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",b[i][j]); //*(*(b+i)+j)
        }
    }
}