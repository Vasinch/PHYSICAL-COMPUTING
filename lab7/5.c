#include <stdio.h>

double getValues();
double findmin(double array[], int n);
double findmax(double array[], int n);
double findavg(double array[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    double array[n];
    for (int i = 0; i < n; ++i)
    {
        array[i] = getValues();
    }

    double min, max, avg;
    min = findmin(array, n);
    max = findmax(array, n);
    avg = findavg(array, n);

    printf("%d Values\n", n);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.3lf\n", avg);

    return 0;
}

double getValues()
{
    double value;
    scanf("%lf", &value);
    return value;
}

double findmin(double array[], int n)
{
    double min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

double findmax(double array[], int n)
{
    double max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

double findavg(double array[], int n)
{
    double avg = 0;
    for (int i = 0; i < n; i++)
    {
        avg += array[i];
    }
    return avg / n;
}