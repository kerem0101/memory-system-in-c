#include <stdio.h>

int g_init; //global variable stored in Uninitialized Data Segment

int main() {
   
	static int l_init; //static variable stored in Uninitialized Data Segment
	
	return 0;
}

