#include <stdlib.h>
#include <stdio.h>

/*
void *calloc(size_t nmemb, size_t size);
void free(void *ptr);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
*/

typedef struct Memory {
	int member;
} Memory;

// Constructor Function
void constructor(Memory *this, int x) {
	this->member = x;
}

// Destructor Function
void destructor(Memory *this) {
	this->member = 0;
}

// Create Function
Memory *create(int m) {
	printf("Creating object...\n");
	Memory *x = 0;
	x = malloc(sizeof(Memory));
	if (x == 0)
		abort(); /* no memory */
	constructor(x, m);
	return x;
}

// Destroy Function
void destroy(Memory *this) {
	printf("Destroying object...\n");
	destructor(this);
	free(this);
}

// Declare obj in mem, create and initialize it, then destroy it
int main(void) {
	Memory *obj;
	obj = create(10);
	printf("Object exists at: %p\n", obj);
	destroy(obj);
	return 0;
}
