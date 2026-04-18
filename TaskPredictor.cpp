#include "TaskPredictor.h"
#include <cstdlib>

TaskPredictor::TaskPredictor(int m) : mode(m) {}

int TaskPredictor::predictData(int processId) {
    int realData = processId % 5 + 1;
    int chance = rand() % 100;

    switch (mode) {
        case 0: // Worst Case ~30%
            if (chance < 30) return realData;
            else return (realData % 5) + 1;
        case 1: // Average Case ~65%
            if (chance < 65) return realData;
            else return (realData % 5) + 1;
        case 2: // Best Case ~92%
            if (chance < 92) return realData;
            else return (realData % 5) + 1;
        default:
            return realData;
    }
}
