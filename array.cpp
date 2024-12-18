#pragma once
#include "array.h"
int max(int left, int right) {
    if (left > right)
        return left;
    else
        return right;
}

int min(int left, int right) {
    if (left < right)
        return left;
    else
        return right;
}

int min_index(int* massive, int size) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (massive[i] < massive[index])
            index = i;
    }
    return index;
}

int max_index(int* massive, int size) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (massive[i] > massive[index])
            index = i;
    }
    return index;
}