#include <stdio.h>
#include "stack.h"


int main() {
    stack S;
    stackNew(&S);

    for (int i = 0; i < 10; i++) {
        stackPush(&S, i);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, stackPop(&S));
    }

    stackDispose(&S);

    return 0;
}
