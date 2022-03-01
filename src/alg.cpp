// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double w = 1;
    while (n > 0) {
        w = w * value;
        n--;
    }
    return w;
}

uint64_t fact(uint16_t n) {
  uint64_t r = 1;
    while (n > 0) {
        r = r * n;
        n--;
    }
    return r;
}

double calcItem(double x, uint16_t n) {
  double t = pown(x, n) / fact(n);
    return t;
}

double expn(double x, uint16_t count) {
  double G = 1;
    int n = 1;
    while (count > n-1) {
        G = G + calcItem(x, n);
        n++;
    }
    return G;
}

double sinn(double x, uint16_t count) {
  double E = 0;
    int u = 0;
    while (count > u) {
        u = u + 1;
        E = E + pown(-1, u - 1) * calcItem(x, 2 * u - 1);
    }
    return E;
}

double cosn(double x, uint16_t count) {
  double E = 0;
    int u = 0;
    while (count > u) {
        u = u + 1;
        E = E + pown(-1, u - 1) * calcItem(x, 2 * u - 2);
    }
    return E;
}
