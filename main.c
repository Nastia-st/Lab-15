#include <stdio.h>

int main() {
    system("chcp 65001");
    int array[] = {5, 0, 7, 12, 9, 93};
    int n = sizeof(array) / sizeof(array[0]);

    int max = array[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }

    printf("Максимальний елемент: %d\n", max);
    printf("Його індекс: %d\n", index);
    return 0;
}