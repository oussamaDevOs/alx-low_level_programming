#include <stdio.h>

int count_arguments(int argc) {
    return argc - 1;
}

int main(int argc, char *argv[]) {
    int num_args = count_arguments(argc);
    printf("%d\n", num_args);
    return 0;
}

