#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int month;
    int day;
}Birth;

void randomize(int list[], int n);
void makeReadable(int days, Birth* Ghana);
