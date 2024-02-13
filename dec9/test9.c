#include <stdio.h>
void foo(int **k)// here we are considering the rows and column values dynamically
//so we don't even know the column size so we are considering as **k;
{

}
int main()
{
    int a[2][3];
    int r = 3, c = 4;
    int **p = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        p[i] = (int *)malloc(c * sizeof(int));
    }
    //int p[r][c]

    foo(p);
}