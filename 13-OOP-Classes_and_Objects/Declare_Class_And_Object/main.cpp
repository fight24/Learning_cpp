#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    //* attributes
    string name {"Player"};
    int health;
    int xp;

    //* method
    void talk(string);
    bool is_dead();
};

class Account
{
    //* attributes
    string name;
    double balance;
    
    //* method
    bool deposit(double);
    bool withdraw(double);
};
int main()
{
    Account alpha_account;
    Account beta_account;
    Player alpha;
    Player hero;

    Player players[] {alpha, hero};

    vector<Player> player_vec {alpha};
    player_vec.push_back(hero);
    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;
    return 0;
}