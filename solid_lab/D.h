#ifndef D_H
#define D_H

namespace DependencyInversion
{
    class IGame
    {
    public:
        virtual void start() = 0;
        virtual void play() = 0;
        virtual void exit() = 0;
        virtual ~IGame() = default;
        std::string name;
    };

    class Steam : public IGameLibrary
    {
    public:
        void buy_game(IGame* game) override
        {
            cout << "Game bought in Steam -> " << game->name << endl;
        }
    };

    class EpicGames : public IGameLibrary
    {
    public:
        void buy_game(IGame* game) override
        {
            cout << "Game bought in EpicGames -> " << game->name << endl;
        }
    };
}

#endif
