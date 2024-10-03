#ifndef I_H

#define I_H

namespace InterfaceSegregation
{
	class IReadable abstract
	{
	public:
		virtual void read() = 0;
	};

	class IWritable abstract
	{
	public:
		virtual void write() = 0;
	};

	class IPrinter abstract : public IReadable, public IWritable
	{
	public:
		virtual void print() = 0;
	};

	class Printer : public IPrinter
	{
	public:
		void read() override
		{
			cout << "Reading..." << endl;
		}
		void write() override
		{
			cout << "Writing..." << endl;
		}
		void print() override
		{
			cout << "Printing..." << endl;
		}
	};
}


#endif