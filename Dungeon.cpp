#include <iostream>
#include <iomanip>

using namespace std;

class Character
{
    public:
        int max_hp, initial_hp, hp_regen, max_mana, initial_mana, mana_regen, punch_damage, punch_mana, kick_damage, kick_mana, ulti_damage, ulti_mana;
        Character(int max_hp, int hp_regen, int max_mana, int mana_regen, int punch_damage, int punch_mana, int kick_damage, int kick_mana, int ulti_damage, int ulti_mana)
        {
            this->max_hp        = max_hp;
            this->hp_regen      = hp_regen;
            this->max_mana      = max_mana;
            this->mana_regen    = mana_regen;
            this->punch_damage  = punch_damage;
            this->punch_mana    = punch_mana;
            this->kick_damage   = kick_damage;
            this->kick_mana     = kick_mana;
            this->ulti_damage   = ulti_damage;
            this->ulti_mana     = ulti_mana;
            this->initial_hp    = max_hp;
            this->initial_mana  = max_mana;
        }
};


class Enemy
{
    public:
        int max_hp;
        int initial_hp;
        int damage;
        Enemy(int max_hp, int damage)
        {
            this->max_hp     = max_hp;
            this->damage     = damage;
            this->initial_hp = max_hp;
        }
};


void Combat(int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int* ,int*, string, string, int*, bool*);

void item_choice(int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);

bool willContinue();

int main()
{
    system("cls");
    int level = 0;
    bool is_alive = true;
    Character Player1(100, 25, 100, 50, 6, 0, 17, 20, 28, 40);
    //Level 1
    Enemy Zombie1(40,20);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie1.max_hp, &Zombie1.initial_hp, &Zombie1.damage, "Zombie", "first", &level, &is_alive);

    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 2
    Enemy Skeleton1(36,40);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Skeleton1.max_hp, &Skeleton1.initial_hp, &Skeleton1.damage, "Skeleton", "second", &level, &is_alive);
    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 3
    Enemy Zombie2(40,34);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie2.max_hp, &Zombie2.initial_hp, &Zombie2.damage, "Zombie", "third", &level, &is_alive);

    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 4
    Enemy Zombie3(40,34);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie3.max_hp, &Zombie3.initial_hp, &Zombie3.damage, "Zombie", "fourth", &level, &is_alive);
            
    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 5
    Enemy Zombie4(40,38);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie4.max_hp, &Zombie4.initial_hp, &Zombie4.damage, "Zombie", "fifth", &level, &is_alive);

    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 6
    Enemy Zombie5(40,40);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie5.max_hp, &Zombie5.initial_hp, &Zombie5.damage, "Zombie", "sixth", &level, &is_alive);

    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 7
    Enemy Zombie6(40,40);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie6.max_hp, &Zombie6.initial_hp, &Zombie6.damage, "Zombie", "seventh", &level, &is_alive);

    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 8
    Enemy Zombie7(40,40);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie7.max_hp, &Zombie7.initial_hp, &Zombie7.damage, "Zombie", "eighth", &level, &is_alive);

    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 9
    Enemy Zombie8(40,40);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &Zombie8.max_hp, &Zombie8.initial_hp, &Zombie8.damage, "Zombie", "ninth", &level, &is_alive);

    if(is_alive && willContinue())
        system("cls");
    else
        return 0;
    //Level 10
    Enemy UKBey(130,50);
    Combat( &Player1.max_hp, &Player1.initial_hp, &Player1.hp_regen, &Player1.max_mana, &Player1.initial_mana, &Player1.mana_regen, &Player1.punch_damage, &Player1.punch_mana, &Player1.kick_damage, &Player1.kick_mana, &Player1.ulti_damage, &Player1.ulti_mana, 
            &UKBey.max_hp, &UKBey.initial_hp, &UKBey.damage, "UKBey", "tenth", &level, &is_alive);
}





void item_choice(int* p_max_hp, int* p_initial_hp, int* p_hp_regen, int* p_max_mana, int* p_initial_mana, int* p_mana_regen, int* p_punch_damage, int* p_punch_mana, int* p_kick_damage, int* p_kick_mana, int* p_ulti_damage, int* p_ulti_mana)
{
    int max_hp_increase = 20, hp_regen_increase = 10, max_mana_increase = 15, mana_regen_increase = 5, punch_damage_increase = 2, kick_damage_increase = 2, ulti_damage_increase = 4, ulti_mana_decrease = 4;
    char choice;
    while(true)
    {
        cout    << "You beat your enemy and there is your prize. Choose your buff:" << endl
                << "1: Max HP +"        << max_hp_increase          << endl
                << "2: HP Regen +"      << hp_regen_increase        << endl
                << "3: Max Mana +"      << max_mana_increase        << endl
                << "4: Mana Regen +"    << mana_regen_increase      << endl
                << "5: Punch Damage +"  << punch_damage_increase    << endl
                << "6: Kick Damage +"   << kick_damage_increase     << endl
                << "7: Ulti Damage +"   << ulti_damage_increase     << endl
                << "8: Ulti Mana Cost -"<< ulti_mana_decrease       << endl
                << "Your Choice: ";
        cin     >> choice;

        switch(choice)
        {
            case '1':
                *p_max_hp += max_hp_increase;
                break;
            case '2':
                *p_hp_regen += hp_regen_increase;
                break;
            case '3':
                *p_max_mana += max_mana_increase;
                break;
            case '4':
                *p_mana_regen += mana_regen_increase;
                break;
            case '5':
                *p_punch_damage += punch_damage_increase;
                break;
            case '6':
                *p_kick_damage += kick_damage_increase;
                break;
            case '7':
                *p_ulti_damage += ulti_damage_increase;
                break;
            case '8':
                if (*p_ulti_mana >= ulti_mana_decrease)
                {
                    *p_ulti_mana -= ulti_mana_decrease;
                    break;
                }
                else if (*p_ulti_mana = 0)
                {
                    cout    << "Ulti mana cost can't be lower than 0!!!"    << endl
                            << "You wasted your buff!!!"                    << endl;
                    break;
                }
                else
                {
                    *p_ulti_mana = 0;
                    cout    << "Ulti mana cost can't be lower than 0!!!"    << endl 
                            << "Ulti mana cost equalized to 0!"             << endl;
                    break;
                }
            case 'c':
                cout << "Emergency Stop!!!" << endl;
                return;
            default:
                cout    << "Please ONLY type one of the following characters!!!"    << endl
                        << string(50,'-')                                           << endl;
                continue;
        }
        break;
    }
}





void Combat(int* p_max_hp, int* p_initial_hp, int* p_hp_regen, int* p_max_mana, int* p_initial_mana, int* p_mana_regen, int* p_punch_damage, int* p_punch_mana, int* p_kick_damage, int* p_kick_mana, int* p_ulti_damage, int* p_ulti_mana, 
            int* e_max_hp, int* e_initial_hp ,int* e_damage, string e_name, string e_place, int* lvl, bool* is_alive)
{
    cout    << string(50, '-')                                                                  << endl
            << string(50, '-')                                                                  << endl
            << "Level " << ++(*lvl)                                                             << endl
            << string(50, '-')                                                                  << endl
            << string(50, '-')                                                                  << endl;
    cout    << "Your stats:"                                                                    << endl;

    cout    << string(50,'-') << endl
            << left << setw(7) << "HP:" << *p_initial_hp << "/" << *p_max_hp << "\t\tHP Regen(Per Level):\t" << *p_hp_regen             << endl
            << left << setw(7) << "Mana:" << *p_initial_mana << "/" << *p_max_mana << "\t\tMana Regen(Per Level):\t" << *p_mana_regen   << endl
            << string(50,'-') << endl
            << left << setw(12) << "Skill" << setw(12) << "Damage" << setw(12) << "Mana Cost"           << endl
            << left << setw(12) << "Punch" << setw(12) << *p_punch_damage << setw(12) << *p_punch_mana  << endl
            << left << setw(12) << "Kick" << setw(12) << *p_kick_damage << setw(12) << *p_kick_mana     << endl
            << left << setw(12) << "Ulti" << setw(12) << *p_ulti_damage << setw(12) << *p_ulti_mana     << endl;

    cout    << string(50,'-')                                                                   << endl
            << string(50,'-')                                                                   << endl;
    cout    << "Your "<< e_place <<" enemy is "     << e_name << ". " << e_name << "'s stats:"  << endl
            << string(50,'-')                                                                   << endl
            << "HP: " << *e_max_hp << "\tDamage: "  << *e_damage                                << endl;
    cout    << string(50, '-')                                                                  << endl
            << "Round 1"                                                                        << endl
            << string(50, '-')                                                                  << endl;
    
    int round =1;
    char choice;
    while (*p_initial_hp > 0 && *e_initial_hp > 0)
    {
        while(true)
        {
            cout    << "Choose Your Attack:"    << endl
                    << "1: Punch"               << endl
                    << "2: Kick"                << endl
                    << "3: Ulti"                << endl
                    << "Your Choice: ";
            cin     >> choice;
            cout    << string(50, '-')          << endl;

            switch(choice)
            {
                case '1':
                    if(*p_initial_mana >= *p_punch_mana)
                    {
                        *e_initial_hp -= *p_punch_damage;
                        *p_initial_mana -= *p_punch_mana;
                        cout << "You Punched " << e_name << "!!!" << endl;
                        break;
                    }
                    else
                    {
                        cout << "You don't have enough mana to use this skill!!! Try another!" << endl;
                        continue;
                    }
                case '2':
                    if(*p_initial_mana >= *p_kick_mana)
                    {
                        *e_initial_hp -= *p_kick_damage;
                        *p_initial_mana -= *p_kick_mana;
                        cout << "You Kicked " << e_name << "!!!" << endl;
                        break;
                    }
                    else
                    {
                        cout << "You don't have enough mana to use this skill!!! Try another!" << endl;
                        continue;
                    }
                case '3':
                    if(*p_initial_mana >= *p_ulti_mana)
                    {
                        *e_initial_hp -= *p_ulti_damage;
                        *p_initial_mana -= *p_ulti_mana;
                        cout << "You Ulted " << e_name << "!!!" << endl;
                        break;
                    }
                    else
                    {
                        cout << "You don't have enough mana to use this skill!!! Try another!" << endl;
                        continue;
                    }
                case 'c':
                    cout << "Emergency Stop!!!" << endl;
                    return;
                default:
                    cout    << "Please ONLY type one of the following characters!!!" << endl
                            << string(50,'-') << endl;
                    continue;
            }
            break;
        }
        cout << string(50, '-') << endl;
        if (*e_initial_hp > 0)
        {
            *p_initial_hp -= *e_damage;
            cout    << string(50, '-')                                                          << endl
                    << e_name <<" damaged you"                                                  << endl
                    << string(50, '-')                                                          << endl;
            cout    << e_name << "'s New Stats"                                                 << endl 
                    << "Hp: " << *e_initial_hp << "/" << *e_max_hp << "\tDamage: " << *e_damage << endl
                    << string(50, '-')                                                          << endl;
        }
        else
        {
            cout    << "You Killed The " << e_name                                                                          << endl
                    << string(50, '-')                                                                                      << endl
                    << "Your New Stats"                                                                                     << endl
                    << "Hp: " << *p_initial_hp << "/" << *p_max_hp << "\tMana: " << *p_initial_mana << "/" << *p_max_mana   << endl
                    << string(50, '-')                                                                                      << endl;
            break;
        }
        if(*p_initial_hp > 0) //if player is alive
        {
            cout    << "Your New Stats"                                                                                     << endl
                    << "Hp: " << *p_initial_hp << "/" << *p_max_hp << "\tMana: " << *p_initial_mana << "/" << *p_max_mana   << endl;
            cout    << string(50, '-')                                                                                      << endl
                    << "Round " << ++round                                                                                  << endl
                    << string(50, '-')                                                                                      << endl;
        }
        else //if player is dead
        {
            *p_initial_hp = 0;
            cout    << "Your New Stats"                                                                                     << endl
                    << "Hp: " << *p_initial_hp << "/" << *p_max_hp << "\tMana: " << *p_initial_mana << "/" << *p_max_mana   << endl
                    << string(50, '-')                                                                                      << endl;
            cout    << "You have died... GAME OVER!!!"                                                                      << endl;
            *is_alive = false;
            return;
        }
    }
    
    item_choice(p_max_hp, p_initial_hp, p_hp_regen, p_max_mana, p_initial_mana, p_mana_regen, p_punch_damage, p_punch_mana, p_kick_damage, p_kick_mana, p_ulti_damage, p_ulti_mana);
    
    *p_initial_mana+= *p_mana_regen;
    *p_initial_hp += *p_hp_regen;
    if(*p_initial_hp > *p_max_hp)
    {
        *p_initial_hp = *p_max_hp;
    }
    if(*p_initial_mana > *p_max_mana)
    {
        *p_initial_mana = *p_max_mana;
    }
    cout    << "Level " << *lvl << " Finished"                          << endl
            << "You regenerated your mana and hp. New Stats:"           << endl
            << "HP/Mana: " << *p_initial_hp << "/" << *p_initial_mana   << endl;
}





bool willContinue()
{
    char choice;
    while(true)
    {
        cout    << "Would you like to continue(Y/N): "; 
        cin     >> choice;
        switch(choice)
        {
            case 'Y':
            case 'y':
                return true;
            case 'N':
            case 'n':
            case 'c':
                return false;
            default:
                cout    << "Please ONLY type one of the following characters!!!" << endl;
                continue;
        }
    }
}
