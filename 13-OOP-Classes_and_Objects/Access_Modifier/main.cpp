#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    //* attributes
    string name {"Player"};
protected:
    double heath;
    double xp;
public:
    //* method
    void talk(string text_to_say)
    {
        cout << "\n" << name << " says" << text_to_say << endl;
    }
    bool is_dead();
};

int main()
{
    Player alphal;
    // alphal.name = "ALpha"; -> compile error
    // alphal.heath = 100; --> error compiling
    
    alphal.talk("Hello there");
    return 0;
}