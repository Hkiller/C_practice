#include <stdio.h>

const int w = 20;
const int h = 20;

int f(int x, int y){
	return (x - 10) * (x - 10) + (y - 10) * (y - 10) <= 8 * 8;
}

int main(){
	int x,y;
	for(y = 0; y < h; y++){
		for(x = 0; x < w; x++){
			printf(f(x, y)? "* " : "  ");
		}
		puts("");
	}
}
