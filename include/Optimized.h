#ifndef OPTIMIZED_H
#define OPTIMIZED_H

#include "IDiskSchedulingAlgorithm.h"
#include <set>

class Optimized : public IDiskSchedulingAlgorithm{
    private:
        unsigned int head;
        std::set<DiskRequest> list;
    public:
        void addRequest(DiskRequest request);
        std::vector<DiskRequest> getProcessingSequence();
        void setHeadPosition(unsigned int position);
        unsigned int getHeadPosition();
        unsigned long getHeadMovements();
};

#endif
