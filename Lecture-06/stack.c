/*
 * Author  : Saud Zahir
 * Date    : August 06, 2024
 * Contact : m.saud.zahir@gmail.com
*/

#include "stack.h"

void stackNew(stack *s) {
    s->logicallen = 0;
    s->alloclen = 4;
    s->elements = malloc(s->alloclen * sizeof(int));

    assert(s->elements != NULL);
}

void stackDispose(stack *s) {
    free(s->elements);
}

void stackPush(stack *s, int value) {
    if (s->logicallen == s->alloclen) {
        s->alloclen *= 2;
        s->elements = realloc(s->elements, s->alloclen * sizeof(int));

        assert(s->elements != NULL);
    }

    s->elements[s->logicallen] = value;
    s->logicallen++;
}

int stackPop(stack *s) {
    assert(s->logicallen > 0);

    s->logicallen--;
    return s->elements[s->logicallen];
}
