#include "lucky.h"

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
