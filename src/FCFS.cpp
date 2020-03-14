#include "FCFS.h"
#include <math.h>

void FCFS::addRequest(DiskRequest request){
    this->list.push_back(request);
}

std::vector<DiskRequest> FCFS::getProcessingSequence(){
    return std::vector<DiskRequest> (this->list.begin(), this->list.end());
}

void FCFS::setHeadPosition(unsigned int position){
    this->head = position;
}

unsigned int FCFS::getHeadPosition(){
    return this->head;
}

unsigned long FCFS::getHeadMovements(){
    unsigned int current = this->head;
    unsigned long movement = 0;
    for(DiskRequest request : this->list){
        movement += std::abs(request.getCylinder() - (long) current);
        current = request.getCylinder();
    }
    return movement;
}
