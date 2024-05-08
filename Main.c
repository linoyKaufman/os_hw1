#include <stdio.h>

void recusivecall (int n)
{
    printf("%d", n);
    recusivecall(n+1);
}

int divisionbyzero (int n)
{
    int a=0;
    int division = n/a;
    return division;
}

void memoryproblem (int n)
{
    int *pointer = NULL;
    printf("%d", pointer);
}
int main (){

    recusivecall(1);
    printf("%d",divisionbyzero(5));
    memoryproblem(8);



}