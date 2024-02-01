#include <stdio.h>
#define STACK_CAP 5

struct stack {
    int arr[STACK_CAP];
    int n;
};

void printStack(struct stack s) {
    for(int i = 0; i < s.n; i++) printf("%5d", s.arr[i]);
    printf("\n");
}

int push(struct stack *s, int x) {
    if(s->n == STACK_CAP) return -1;

    s->arr[s->n] = x;
    s->n++;

    return x;
}

int pop(struct stack *s) {
    if(s->n == 0) return -1;

    int x = s->arr[s->n-1];
    s->n--;

    return x;
}

int main() {
    printf("Making stack...\n");
    struct stack s;
    s.n = 0;

    printf("Test 1: Single push+pop\n");
    push(&s, 5);
    printf("Pushed 5 onto the stack.\n");
    int popped = pop(&s);
    printf("Popped %d off the stack.\n\n", popped);

    printf("Test 2: Fill stack\n");
    int i = 0;
    while(push(&s, i) != -1) {
        printf("Successfully pushed %d!\n", i);
        i++;
    }
    printf("Stack full!\n\n");

    printf("Test 3: Empty stack\n");
    int result = pop(&s);
    while(result != -1) {
        printf("Successfully popped %d!\n", result);
        result = pop(&s);
    }
    printf("Stack empty!\n");

    return 0;
}