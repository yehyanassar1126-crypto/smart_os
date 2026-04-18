# Smart OS — Predictive Memory Management System

نظام ذكي لإدارة الذاكرة يعتمد على دمج **التنبؤ بالمهام (Task Prediction)** مع **إدارة الذاكرة (Memory Management)**.

## الفكرة
يتحول النظام من نموذج **تفاعلي (Reactive)** ينتظر الطلب ثم ينفذه، إلى نموذج **استباقي (Proactive)** يتوقع البيانات المطلوبة مسبقاً ويجهزها قبل الحاجة إليها.

## المكونات

| المكون | الوصف |
|--------|-------|
| **MemoryManager** | إدارة البيانات بين DRAM (سريعة) و NVM (بطيئة) |
| **TaskPredictor** | توقع البيانات المطلوبة بدقة تختلف حسب السيناريو |

## سيناريوهات التنبؤ

| Mode | الدقة | الوصف |
|------|-------|-------|
| 0 - Worst | ~30% | أسوأ حالة |
| 1 - Average | ~65% | حالة متوسطة |
| 2 - Best | ~92% | أفضل حالة |

## البناء والتشغيل

```bash
sudo apt install build-essential -y
make
./main
```

أو بدون Makefile:

```bash
g++ -o main main.cpp MemoryManager.cpp TaskPredictor.cpp
./main
```

## النتائج المتوقعة

```
Choose Mode (0 = Worst, 1 = Average, 2 = Best): 2

--- Results ---
Prediction Accuracy: 91.8%
Performance Improvement: 91.71%
```
