#ifndef DISKREQUEST_H
#define DISKREQUEST_H

class DiskRequest{
    private:
        unsigned int cylinder;

    public:
        DiskRequest(unsigned int cylinder);
        virtual ~DiskRequest();
        unsigned int getCylinder();
        void setCylinder(unsigned int cylinder);
};

#endif
