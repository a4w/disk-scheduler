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
    if(this->list.size() == 0) return 0l;
    else return (*(this->list.rbegin())).getCylinder();
}
