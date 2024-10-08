#ifndef O_H
#define O_H

namespace Opened_Closed
{
    class CoffeeMachine
    {
    public:
        const char* makeAmericano()
        {
            return "A cup of Americano";
        }
    };

    class CoffeeMachineUpgrade : public CoffeeMachine
    {
    public:
        const char* makeLatte()
        {
            return "A cup of Latte";
        }
    };

    class AdvancedCoffeeMachine : public CoffeeMachine
    {
    public:
        const char* makeEspresso()
        {
            return "A cup of Espresso";
        }
    };
}

#endif
