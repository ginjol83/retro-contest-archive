#include <stdio.h>

const char *d[] = {
	" ",
	"          *",
    	"        * * *",
    	"         ***",
    	"   * * *  *  * * *",
    	"    **  * * *  **",
	"   ***   ***   ***",
	"      *   *   *",
	"       *  *  *",
	"  *  *  * * *  *  *", 
	"   *  *  ***  *  *",
	" *******************"
};

int main(){
	unsigned char i;

	for (i = 0; i < 11; i++) {
		printf("%s\n", d[i]);
	}
	for (i = 11; i > 0; i--) {
		printf("%s\n", d[i]);
	}
	return 0;
}