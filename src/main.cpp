#include<iostream>

#include "FCFS.h"

int main(int argc, char *argv[]){
    FCFS fs;
    fs.addRequest(DiskRequest(98));
    fs.addRequest(DiskRequest(183));
    fs.addRequest(DiskRequest(37));
    fs.addRequest(DiskRequest(122));
    fs.addRequest(DiskRequest(14));
    fs.addRequest(DiskRequest(124));
    fs.addRequest(DiskRequest(65));
    fs.addRequest(DiskRequest(67));

    fs.setHeadPosition(53);
    std::cout << fs.getHeadMovements() << std::endl;
    return 0;
}
