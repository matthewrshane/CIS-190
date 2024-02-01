#include <stdio.h>

struct rectangle {
    int length, width;
};

int getPerimeter(struct rectangle r) {
    return (2 * r.length) + (2 * r.width);
}

int getArea(struct rectangle r) {
    return (r.length * r.width);
}

void printRect(struct rectangle r) {
    printf("length = %d, width = %d, area = %d, perimeter = %d\n",
            r.length, r.width, getArea(r), getPerimeter(r));
}

int main() {
    printf("Creating r = 4 x 8...\n");
    struct rectangle r = {4, 8};
    printf("getPerimeter(r) = %d\n", getPerimeter(r));
    printf("getArea(r) = %d\n\n", getArea(r));

    struct rectangle rectArr[5];
    for(int i = 0; i < 5; i++) {
        printf("Creating rectArr[%d] = %d x %d: ", i, i, i*2);
        rectArr[i].length = i;
        rectArr[i].width = i*2;
        printRect(rectArr[i]);
    }

    return 0;
}