#ifndef DISKREQUEST_H
#define DISKREQUEST_H

class DiskRequest{
    private:
        unsigned int cylinder;

    public:
        DiskRequest(unsigned int cylinder);
        virtual ~DiskRequest();
        unsigned int getCylinder() const;
        void setCylinder(unsigned int cylinder);
        bool operator<(const DiskRequest& rhs)const;
};

#endif
