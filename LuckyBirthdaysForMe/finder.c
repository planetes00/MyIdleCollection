#include "lucky.h"
void finder(int list[],int yours){
	int temp=list[yours];
	list[yours]=list[0];
	list[0]=temp;
}
