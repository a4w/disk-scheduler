#include<iostream>

#include "FCFS.h"
#include "Optimized.h"

int main(int argc, char *argv[]){
    FCFS fcfs;
    Optimized optimized;
    std::cout << "Please enter the initial head position: ";
    unsigned int initialHead;
    std::cin >> initialHead;
    fcfs.setHeadPosition(initialHead);
    optimized.setHeadPosition(initialHead);
    std::cout << "Please enter the number of disk requests: ";
    unsigned int nRequests;
    std::cin >> nRequests;
    for(unsigned int i = 0; i < nRequests; ++i){
        std::cout << "Please enter request #" << i << " required cylinder: ";
        unsigned int cylinder;
        std::cin >> cylinder;
        DiskRequest request(cylinder);
        fcfs.addRequest(request);
        optimized.addRequest(request);
    }

    std::cout << std::endl;

    std::cout << "FCFS algorithm processing sequence: ";
    auto fcfs_seq = fcfs.getProcessingSequence();
    for(DiskRequest req : fcfs_seq){
        std::cout << req.getCylinder() << ' ';
    }
    std::cout << std::endl;
    std::cout << "Total head movements: " << fcfs.getHeadMovements() << std::endl;

    std::cout << std::endl;

    std::cout << "Optimized algorithm processing sequence: ";
    auto optim_seq = optimized.getProcessingSequence();
    for(DiskRequest req : optim_seq){
        std::cout << req.getCylinder() << ' ';
    }
    std::cout << std::endl;

    std::cout << "Total head movements: " << optimized.getHeadMovements() << std::endl;

    return 0;
}
