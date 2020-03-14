#include "Optimized.h"
#include <math.h>

void Optimized::addRequest(DiskRequest request){
    this->list.insert(request);
}

std::vector<DiskRequest> Optimized::getProcessingSequence(){
    return std::vector<DiskRequest> (this->list.begin(), this->list.end());
}

void Optimized::setHeadPosition(unsigned int position){
    this->head = position;
}

unsigned int Optimized::getHeadPosition(){
    return this->head;
}

unsigned long Optimized::getHeadMovements(){
    unsigned int current = 0;
    unsigned long movement = this->head;
    for(DiskRequest request : this->list){
        movement += std::abs(request.getCylinder() - (long) current);
        current = request.getCylinder();
    }
    return movement;
}
