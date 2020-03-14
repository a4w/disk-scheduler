#ifndef FCFS_H
#define FCFS_F

#include "IDiskSchedulingAlgorithm.h"
#include <deque>

class FCFS : public IDiskSchedulingAlgorithm{
    private:
        unsigned int head;
        std::deque<DiskRequest> list;
    public:
        void addRequest(DiskRequest request);
        std::vector<DiskRequest> getProcessingSequence();
        void setHeadPosition(unsigned int position);
        unsigned int getHeadPosition();
        unsigned long getHeadMovements();
};

#endif
