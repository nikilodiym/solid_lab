#ifndef L_H
#define L_H

namespace LiskovSubstitution
{
    class IWorker
    {
    public:
        virtual void work() = 0;
        virtual void makeDocument() = 0;
        virtual void eat() = 0;
        virtual void sleep() = 0;
    };

    class Worker : public IWorker
    {
    public:
        void work() override
        {
            cout << "Worker is working" << endl;
        }
        void makeDocument() override
        {
            cout << "Worker is making a document" << endl;
        }
        void eat() override
        {
            cout << "Worker is eating" << endl;
        }
        void sleep() override
        {
            cout << "Worker is sleeping" << endl;
        }
    };

    class TeamLead : public Worker
    {
    public:
        void makeMeeting()
        {
            cout << "TeamLead is making a meeting" << endl;
        }
    };
}

#endif // L_H
