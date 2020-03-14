#include "../include/DiskRequest.h"

DiskRequest::~DiskRequest(){};

DiskRequest::DiskRequest(unsigned int cylinder){
    this->cylinder = cylinder;
}

void DiskRequest::setCylinder(unsigned int cylinder){
    this->cylinder = cylinder;
}

unsigned int DiskRequest::getCylinder() const {
    return this->cylinder;
}

bool DiskRequest::operator<(const DiskRequest &rhs) const {
    return this->getCylinder() < rhs.getCylinder();
}
