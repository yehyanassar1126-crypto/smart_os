#ifndef TASK_PREDICTOR_H
#define TASK_PREDICTOR_H

#include <iostream>
using namespace std;

class TaskPredictor {
private:
    int mode; // 0 = Worst (~30%), 1 = Average (~65%), 2 = Best (~92%)

public:
    TaskPredictor(int mode);
    int predictData(int processId);
};

#endif
