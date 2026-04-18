#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MemoryManager.h"
#include "TaskPredictor.h"

using namespace std;

int main() {
    srand(time(0));

    MemoryManager mem;

    int mode;
    cout << "Choose Mode (0 = Worst, 1 = Average, 2 = Best): ";
    cin >> mode;

    TaskPredictor predictor(mode);

    int totalRequests = 1000;
    int correctPredictions = 0;

    double totalTimeWithout = 0;
    double totalTimeWith = 0;

    for (int i = 1; i <= totalRequests; i++) {

        int processId = rand() % 100;
        int realData = processId % 5 + 1;

        int predictedData = predictor.predictData(processId);

        // بدون prediction (دايمًا بطيء)
        totalTimeWithout += 100000;

        // مع prediction
        if (predictedData == realData) {
            correctPredictions++;
            totalTimeWith += 100; // سريع
        } else {
            totalTimeWith += 100000; // بطيء
        }
    }

    double accuracy = (double)correctPredictions / totalRequests * 100;

    double improvement =
        (totalTimeWithout - totalTimeWith) / totalTimeWithout * 100;

    cout << "\n--- Results ---\n";
    cout << "Prediction Accuracy: " << accuracy << "%\n";
    cout << "Performance Improvement: " << improvement << "%\n";

    return 0;
}
