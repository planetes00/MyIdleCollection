#include "lucky.h"
void randomize (int list[], int n) {
	int temp=0;
	int k;
	for (int i = 0; i < n; i++) {
		k=rand() % n;
		temp= list[i];
		list[i] = list[k];
		list[k]=temp;
	}
}
