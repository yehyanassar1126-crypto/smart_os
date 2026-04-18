#ifndef MEMORY_MANAGER_H
#define MEMORY_MANAGER_H

#include <vector>
#include <iostream>
using namespace std;

class MemoryManager {
private:
    vector<int> DRAM;
    vector<int> NVM;

public:
    MemoryManager();

    bool inDRAM(int data);
    void moveToDRAM(int data);
    void requestData(int data);
};

#endif
