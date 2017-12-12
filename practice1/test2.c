#include <stdio.h>

const int w = 12;
const int h = 12;

int f(int x,int y){
	return x <= y;
}

int main(){
	int x, y;
	for(y = 0; y < h; y++){
		for(x = 0; x < w; x++)
			printf(f(x,y)?"* ":"  ");
		puts("");
	}
}

