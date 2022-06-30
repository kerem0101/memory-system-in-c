## memory-system-in-c

![alt text](https://github.com/kerem0101/memory-system-in-c/blob/main/memory-layout-in-c.png)

### 1. Text Segment:
This segment contains the binary code of the compiled system. Unchangeable, read-only. It is located under the Heap and Stack regions. Functions and strings are in this region.
### 2. Initialized Data Segment:
The initial value is the assigned data section. Initialized data including global and static variables are stored in this part of memory.
```c
#include <stdio.h>

int g_init=55; //global variable stored in Initialized Data Segment

int main() {
   
	static int l_init=69; //static variable stored in Initialized Data Segment
	
	return 0;
}
```
### 3. Uninitialized Data Segment(BSS): 
Uninitialized global and static variables are kept in this memory area. Variables in this zone are assigned a value of 0 before the program starts.
```c
#include <stdio.h>

int g_init; //global variable stored in Uninitialized Data Segment

int main() {
   
	static int l_init; //static variable stored in Uninitialized Data Segment
	
	return 0;
}
```
### 4. Stack:
The stack section contains the local address of the function, the parameters entered into the function, and the return address of the function.
```c
#include <stdio.h>

int g_init; //global variable stored in Uninitialized Data Segment

int main() {
   
	static int l_init; //static variable stored in Uninitialized Data Segment
	
	return 0;
}
```
### 5. Heap:
It is the area where dynamic memory is kept.
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr;
	int n;

	ptr = (int*)malloc(n * sizeof(int)); //stored in Heap

	return 0;
}
```
