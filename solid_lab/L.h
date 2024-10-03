#ifndef L_H
#define L_H

namespace LiskovSubstitution
{
	class IWorker abstract
	{
	public:
		virtual void work() = 0;
		virtual void makeDocument() = 0;
		virtual void eat() = 0;
		virtual void sleep() = 0;
	};

	class ITeamLead abstract
	{
	public:
		virtual void makeMeeting() = 0;
	};

	class Worker : public IWorker
	{
	public:
		void makeDocument() override
		{
			cout << "Worker is making a document" << endl;
		}
		void work() override
		{
			cout << "Worker is working" << endl;
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
	class TeamLead : public Worker, private ITeamLead
	{
	public:
		void makeDocument() override
		{
			cout << "TeamLead is making a document" << endl;
		}
		void makeMeeting() override
		{
			cout << "TeamLead is making a meeting" << endl;
		}
	};


	class WorkingDay {
	public:
		static void GetDailyDoc(IWorker * worker)
		{
			worker->makeDocument();
		}
	};
}

#endif // !L_H

