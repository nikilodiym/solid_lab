#include "SOLID.h"

using namespace SingleResponsibility;
using namespace Opened_Closed;
using namespace LiskovSubstitution;
using namespace InterfaceSegregation;
using namespace DependencyInversion;

enum SOLID
{
	S,
	O,
	L,
	I,
	D
};

int main()
{
	SOLID solid = D;
	switch (solid)
	{
		case S:
		{
			cout << "SOLID::S" << endl;
			Pencil * pencil = new Pencil();
			pencil->draw();
			pencil->write();

			//WARNING: Fry is not a responsibility of a pencil
			pencil->fry();
		}break;
		case O:
		{
			cout << "SOLID::O" << endl;
			cout << "Coffee machine: " << endl;
			CoffeeMachine * coffeeMachine = new CoffeeMachine();
			cout << coffeeMachine->makeAmericano() << endl;

			cout << "Upgrading the coffee machine: " << endl;
			CoffeeMachineUpgrade * coffeeMachineUpgrade = new CoffeeMachineUpgrade();
			cout << coffeeMachineUpgrade->makeAmericano() << endl;
			cout << coffeeMachineUpgrade->makeLatte() << endl;

		}break;
		case L:
		{
			cout << "SOLID::L" << endl;
			IWorker * worker = new Worker();
			IWorker * teamLead = new TeamLead();

			WorkingDay::GetDailyDoc(worker);
			WorkingDay::GetDailyDoc(teamLead);
		}break;
		case I:
		{
			cout << "SOLID::I" << endl;
			Printer * printer = new Printer();
			printer->print();
		}break;
		case D:
		{
			cout << "SOLID::D" << endl;
			GTA6* gta6 = new GTA6();
			Cyberpunk2077* cyberpunk2077 = new Cyberpunk2077();
			RDR2* rdr2 = new RDR2();

			IGameLibrary * steam = new Steam();
			IGameLibrary* epicGames = new EpicGames();

			steam->buy_game(gta6);
			steam->buy_game(cyberpunk2077);
			epicGames->buy_game(rdr2);

		}break;
	}
}