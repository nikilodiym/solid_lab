#ifndef D_H
#define D_H

#include <iostream>
using namespace std;

namespace DependencyInversion
{
	//Modul low level
	class IGame abstract
	{
	public:
		string name;
		virtual void start() = 0;
		virtual void play() = 0;
		virtual void exit() = 0;
	};

	//Modul high level
	class IGameLibrary abstract
	{
	public:
		virtual void start_game(IGame* game) = 0;
		virtual void exit_game(IGame* game) = 0;
		virtual void buy_game(IGame* game) = 0;
		virtual void download_game(IGame* game) = 0;
		virtual void show(IGame * game) = 0;
	};

	//Objects
	class GTA6 : public IGame
	{
	public:
		GTA6()
		{
			name = "GTA6";
		}
		void start() override
		{
			cout << "GTA6 started" << endl;
		}
		void play() override
		{
			cout << "GTA6 is playing" << endl;
		}
		void exit() override
		{
			cout << "GTA6 exited" << endl;
		}
	};

	class Cyberpunk2077 : public IGame
	{
	public:
		Cyberpunk2077()
		{
			name = "Cyberpunk2077";
		}
		void start() override
		{
			cout << "Cyberpunk2077 started" << endl;
		}
		void play() override
		{
			cout << "Cyberpunk2077 is playing" << endl;
		}
		void exit() override
		{
			cout << "Cyberpunk2077 exited" << endl;
		}
	};
	class RDR2 : public IGame
	{
	public:
		RDR2()
		{
			name = "RDR2";
		}
		void start() override
		{
			cout << "RDR2 started" << endl;
		}
		void play() override
		{
			cout << "RDR2 is playing" << endl;
		}
		void exit() override
		{
			cout << "RDR2 exited" << endl;
		}
	};

	class Steam : public IGameLibrary
	{
	public:
		void start_game(IGame* game) override
		{
			game->start();
		}
		void exit_game(IGame* game) override
		{
			game->exit();
		}
		void buy_game(IGame* game) override
		{
			cout << "Game bought in Steam -> " << game->name << endl;
		}
		void download_game(IGame* game) override
		{
			cout << "Game downloaded in Steam " << game->name << endl;
		}
		void show(IGame* game) override
		{
			cout << "Game showed in Steam " << game->name << endl;
			
		}
	};

	class EpicGames : public IGameLibrary
	{
		public:
			void start_game(IGame* game) override
			{
			game->start();
		}
			void exit_game(IGame* game) override
			{
			game->exit();
		}
			void buy_game(IGame* game) override
			{
			cout << "Game bought in EpicGames -> " << game->name << endl;
		}
			void download_game(IGame* game) override
			{
			cout << "Game downloaded in EpicGames " << game->name << endl;
		}
			void show(IGame* game) override
			{
			cout << "Game showed in EpicGames " << game->name << endl;
		}
	};
}

#endif
