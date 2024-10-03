#ifndef I_H
#define I_H

namespace InterfaceSegregation
{
    class IPrinter
    {
    public:
        virtual void print() = 0;
    };

    class IScanner
    {
    public:
        virtual void scan() = 0;
    };

    class Printer : public IPrinter
    {
    public:
        void print() override
        {
            cout << "Printing document..." << endl;
        }
    };

    class Scanner : public IScanner
    {
    public:
        void scan() override
        {
            cout << "Scanning document..." << endl;
        }
    };
}

#endif // I_H
