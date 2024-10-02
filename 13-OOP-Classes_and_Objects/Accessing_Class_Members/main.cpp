#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
    //* attributes
    string name {"Player"};
    int health;
    int xp;

    //* method
    void talk(string text_to_say){ cout << name << "says" << text_to_say << endl;}
    bool is_dead();
};

class Account
{
public:
    //* attributes
    string name;
    double balance;
    
    //* method
    void deposit(double bal) {balance += bal; cout << "In desposit" << endl;}
    void withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;}
};
int main()
{
    Account alpha_account;
    alpha_account.name = "Alpha's account";
    alpha_account.balance = 5000.0;
    alpha_account.deposit(1000.0);
    alpha_account.withdraw(500.0);

    Player player_alpha;
    player_alpha.name = "Alpha";
    player_alpha.health = 100;
    player_alpha.xp = 12;
    player_alpha.talk("Hi, there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you");
    return 0;
}