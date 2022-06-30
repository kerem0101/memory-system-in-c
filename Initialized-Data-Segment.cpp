#include <stdio.h>

int g_init=55; //global variable stored in Initialized Data Segment

int main() {
   
	static int l_init=69; //static variable stored in Initialized Data Segment
	
	return 0;
}

