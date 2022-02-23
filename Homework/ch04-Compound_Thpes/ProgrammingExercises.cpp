#include <iostream>
#include <string>

#include <cstring>

// 4.13.1
void grade()
{
    using namespace std;

    string firstName;
    string lastName;
    char grade;
    int age;

    cout << "What is your first name? ";
    getline(cin, firstName);
    cout << "What is your last name? ";
    getline(cin, lastName);
    cout << "What letter grade do you deserce? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lastName << ", " << lastName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
}

// 4.13.2
// Rewrite Listing 4.4, using the C++ string class instead of char arrays.
void instr2()
{
    using namespace std;

    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name);  // reads through newline
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
}

// 4.13.3
// Use char arrays and functions from the cstring header file.
void cstring()
{
    using namespace std;

    const int NAME_SIZE = 20;
    char firstName[NAME_SIZE];
    char lastName[NAME_SIZE];
    char singleString[30];

    cout << "Enter your first name: ";
    cin.getline(firstName, NAME_SIZE);
    cout << "Enter your last name: ";
    cin.getline(lastName, NAME_SIZE);

    strcat(singleString, lastName);
    strcat(singleString, ", ");
    strcat(singleString, firstName);

    cout << "Here's the information in a single string: " << singleString << endl;
}

// 4.13.4
// Use string objects and methods from the string header file.
void stringHeader()
{
    using namespace std;

    string firstName;
    string lastName;
    string singleString;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    singleString = lastName + ", " + firstName;

    cout << "Here's the information in a single string: " << singleString << endl;
}

// 4.13.5
// CandyBar structure
struct CandyBar
{
    std::string brand;
    float weight;
    int kcal;
};

void structure()
{
    using namespace std;


    CandyBar snack{"Mocha Munch", 2.3f, 350};
    cout << "The " << snack.brand << " weight is " << snack.weight << " heat quantity is " << snack.kcal << " kcal." << endl;
}

// 4.13.6
// creates an array of three CandyBar structures
void candyBarArray()
{
    using namespace std;

    CandyBar candybars[3] = {{"Micha Munch", 2.3f, 350}, {"Hershey's Bar", 3.0f, 250}, {"Oh Henry!", 4.5f, 500}};
    for (size_t i = 0; i < sizeof(candybars)/sizeof(CandyBar); i++)
    {
        cout << "The " << candybars[i].brand << " weight is " << candybars[i].weight << " heat quantity is " << candybars[i].kcal << " kcal." << endl;
    }
}

// 4.13.7
// pizza-analysis service.
struct Pizza
{
    std::string company;
    float diameter;
    float weight;
};
void pizzaAnalysis()
{
    using namespace std;

    Pizza pizza;

    cout << "Enter name of the pizza company: ";
    getline(cin, pizza.company);
    cout << "Enter diameter of the pizza: ";
    cin >> pizza.diameter;
    cout << "Enter weight of the pizza: ";
    cin >> pizza.weight;

    cout << "The pizza company is " << pizza.company << " diameter is " << pizza.diameter << " weight is " << pizza.weight << endl;
}

// 4.13.8
// new Pizza
void newPizza()
{
    using namespace std;

    Pizza *pizza = new Pizza;
    cout << "Enter diameter of the pizza: ";
    cin >> pizza->diameter;
    cin.get();
    cout << "Enter name of the pizza company: ";
    getline(cin, pizza->company);
    cout << "Enter weight of the pizza: ";
    cin >> pizza->weight;

    cout << "The pizza company is " << pizza->company << " diameter is " << pizza->diameter << " weight is " << pizza->weight << endl;
}

int main()
{
    // grade();
    // instr2();
    // cstring();
    // stringHeader();
    // structure();
    // candyBarArray();
    // pizzaAnalysis();
    newPizza();
    return 0;
}