#ifndef IDISKSCHEDULINGALGORITHM_H
#define IDISKSCHEDULINGALGORITHM_H

#include <vector>
#include "DiskRequest.h"

class IDiskSchedulingAlgorithm{
    public:
        virtual void addRequest(DiskRequest request) = 0;
        virtual std::vector<DiskRequest> getProcessingSequence() = 0;
        virtual void setHeadPosition(unsigned int position) = 0;
        virtual unsigned int getHeadPosition() = 0;
        virtual unsigned long getHeadMovments() = 0;
};

#endif
