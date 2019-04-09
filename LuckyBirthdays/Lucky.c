/* made by planetes00 
 * 2019 04 02
*/

#include "lucky.h"
#define year 2019

int main(void){
    int y=year;
    printf("%d년 운 좋은 생일 순위\n",y);
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


