#include <stdio.h>
#include <time.h>

double function1(double, int);
double function2(double, int);

int main()
{
    clock_t start, end, time;
    double result, x;
    int n;

    scanf("%lf, %d", &x, &n);

    start = clock();
    result = function1(x,n);
    end = clock();
    time=((double)(start-end))/CLOCKS_PER_SEC;
    printf("%lf", time);

    start = clock();
    result = function2(x,n);
    end = clock();
    time=((double)(start-end))/CLOCKS_PER_SEC;
    printf("%lf", time);

    return 0;
}


double function1(double x, int n)
{
    
}

double function2(double x, int n)
{

}