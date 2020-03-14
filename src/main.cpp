#include<iostream>

#include "FCFS.h"
#include "Optimized.h"

int main(int argc, char *argv[]){
    Optimized fs;
    fs.addRequest(DiskRequest(38));
    fs.addRequest(DiskRequest(180));
    fs.addRequest(DiskRequest(130));
    fs.addRequest(DiskRequest(10));
    fs.addRequest(DiskRequest(50));
    fs.addRequest(DiskRequest(15));
    fs.addRequest(DiskRequest(190));
    fs.addRequest(DiskRequest(90));
    fs.addRequest(DiskRequest(150));

    fs.setHeadPosition(20);
    std::cout << fs.getHeadMovements() << std::endl;
    return 0;
}
