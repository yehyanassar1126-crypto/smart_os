#include "MemoryManager.h"
#include <algorithm>

MemoryManager::MemoryManager() {
    NVM = {1,2,3,4,5};
}

bool MemoryManager::inDRAM(int data) {
    return find(DRAM.begin(), DRAM.end(), data) != DRAM.end();
}

void MemoryManager::moveToDRAM(int data) {
    cout << "Moving data " << data << " to DRAM...\n";
    DRAM.push_back(data);
}

void MemoryManager::requestData(int data) {
    if (inDRAM(data)) {
        cout << "Data " << data << " found in DRAM (FAST)\n";
    } else {
        cout << "Data " << data << " in NVM (SLOW)\n";
        moveToDRAM(data);
    }
}
