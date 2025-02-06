#include <iostream>
#include <conio.h>
using namespace std;

struct Entries {
    string type;
    string input;
};



int main() {
    const int entry = 12;
    char Y = 'Y';
    char y = 'y';
    char answer;

    Entries entries[12] = {
        {"town", ""},
        {"first name", ""},
        {"last name", ""},
        {"small animal (Plural)", ""},
        {"job title", ""},
        {"job required item", ""},
        {"verb ending in ing", ""},
        {"body part", ""},
        {"verb", ""},
        {"place within a town", ""},
        {"body part #2", ""},
        {"body part #3", ""},
    };



    for (int i = 0; i < entry; i++) {
        cout << "Please enter a " << entries[i].type << ": ";
        cin >> entries[i].input;
    }

    cout << "\nThank you, these are your submissions:\n";

    for (int i = 0; i < entry; i++) {
        cout << (i + 1) << ". " << entries[i].input << "\n";
    }

    cout << "\nAre you happy with your choices?";
    cout << "\nPlease Enter Y or N: ";
    cin >> answer;

    while (answer != y && answer != Y) {
        cout << "\nPlease enter the number of the entry you'd like to change: ";
        int en;
        cin >> en;
        while ((en - 1) > 11 || 0 > (en - 1)) {
            cout << "\nSorry, you entered an invalid option number. Please enter the number of the entry you'd like to change: ";
            cin >> en;
        }
        cout << "\nWhat would you like to change " << entries[en - 1].input << " to? ";
        cin >> entries[en - 1].input;
        cout << "\nYour entries now look like this: \n";
        for (int i = 0; i < entry; i++) {
            cout << (i + 1) << ". " << entries[i].input << "\n";
        }
        cout << "\nAre you happy with your choices?";
        cout << "\nPlease Enter Y or N: ";
        cin >> answer;
    }
    cout << "\nYour Madlib Story";
    cout << "\nYou live in the town of " << entries[0].input << " and thank goodness you do.";
    cout << "\nThis town had a lot of problems with over grown " << entries[3].input << ".";
    cout << "\nWith a job like " << entries[4].input << ", no one thought that you would do much with your " << entries[5].input << ".";
    cout << "\nBut you know better than them.You have no problem using your " << entries[5].input << ", " << entries[6].input << "it over their " << entries[7].input << " with ease.";
    cout << "\nSoon you were hailed as the town hero.All of the people shouting your name, \"" << entries[1].input << " " << entries[2].input << "!\"";
    cout << "\nHowever, one day, you were " << entries[8].input << "ing through the " << entries[9].input << "when you were attacked by 12 of the giant " << entries[3].input << "!";
    cout << "\nWith your trusty " << entries[5].input << ", you ran forward charging the beasts.";
    cout << "\nYou lifted your " << entries[5].input << " into the air to attack when your " << entries[10].input << " was ripped off by one of the giant " << entries[3].input << " !";
    cout << "\nIt didn't matter how badly you bled out where your " << entries[10].input << " was. You kept charging at them. Knocking them down one by one until finally, none remained but you.";
    cout << "\n" << entries[0].input << " held a parade in your honor and offered to replace your " << entries[10].input << " free of charge but you declined having already gotten used to having to live with out it.";
    cout << "\nAs you stare at the statue made in your honor, it looks magnificent. Until you notice that they got your" << entries[11].input << " wrong.";
    cout << "\nWell, you can't win them all.";
    cout << "\nThe End.";


    (void)_getch();
}
