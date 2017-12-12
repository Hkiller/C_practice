#include <stdio.h>
#include <stdlib.h>

const int w = 23;
const int h = 12;

int f(int x,int y){
	return abs(x-11) <= y;
}

int main(){
	int x, y;
	for(y = 0; y < h; y++){
		for(x = 0; x < w; x++)
			printf(f(x,y)?"* ":"  ");
		puts("");
	}
}

