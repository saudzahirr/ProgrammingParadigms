#pragma once

#include <stdlib.h>
#include <assert.h>

typedef struct {
    int *elements;
    int logicallen;
    int alloclen;
} stack;

// Constructor
void stackNew(stack *s);

// Destructor
void stackDispose(stack *s);

// Methods
void stackPush(stack *s, int value);
int stackPop(stack *s);
