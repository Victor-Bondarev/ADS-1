// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    // вставьте код функции
    bool checkPrime = true;
    if (value == 0 || value == 1) {
        checkPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (value % i == 0) {
                checkPrime = false;
                break;
            }
        }
    }
    return checkPrime;
}

uint64_t nPrime(uint64_t n) {
    // вставьте код функции
    int i = 2;
    while (n > 0) {
        if (checkPrime(i)) {
            n--;
        }
        i++;
    }
    i--;
    return i;
}

uint64_t nextPrime(uint64_t value) {
    // вставьте код функции
    if (value <= 1) {
        return 2;
    }

    int prime = value;
    bool found = false;

    while (!found) {
        prime++;
        if (checkPrime(prime)) {
            found = true;
        }
    }
    return prime;
}

uint64_t sumPrime(uint64_t hbound) {
    // вставьте код функции
    int sum = 0;
    for (int i = 0; i < hbound; i++) {
        sum += i;
    }
    return sum;
}
