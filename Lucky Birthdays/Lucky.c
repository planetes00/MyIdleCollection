/* made by planetes00 
 * 2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define year 2019

typedef struct{
    int month;
    int day;
}Birth;

void randomize(int list[], int n);
void makeReadable(int days, Birth* Ghana);

int main(void){
    int y=year;
    printf("%d년 운좋은 생일 순위\n",y);
    int days[366];
    int num=sizeof(days)/sizeof(int);
    for(int i=0;i<num;i++)
        days[i]=i+1;
    
    srand((unsigned)time(NULL));
    randomize(days,num);

    Birth* Ghana[366];
    for(int i=0;i<100;i++){
        for(int j=0;j<=300;j+=100){
            if((i+j)<num){
                Ghana[i+j]=(Birth *)malloc(sizeof(Birth)); 
                makeReadable(days[i+j], Ghana[i+j]);
                printf("%d위: %d월%d일\t\t",i+j+1,Ghana[i+j]->month+1,Ghana[i+j]->day);
                free(Ghana[i+j]);
            }
        }
        printf("\n");
    }
    return 0;
}

void randomize(int list[], int n) {
	int temp=0;
	int k;
	for (int i = 0; i < n; i++) {
		k=rand() % n;
		temp= list[i];
		list[i] = list[k];
		list[k]=temp;
	}
}

void makeReadable(int days, Birth* Ghana){
    int m[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int mo=0,da=0;
    while(1){
        if(days>m[mo]){
            days-=m[mo];
            mo++;
        }else{
            da=days;
            break;
        }
    }
    Ghana->day=da;
    Ghana->month=mo;
}