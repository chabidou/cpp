#include <iostream>
#include <vector>

using namespace std;

void memoryLoop();

int main()
{
    string var;
    vector<int> tableau(5, 3);
    tableau.push_back(10);

    cin >> var;
    cout << "Hello world!" << var <<  endl;
    cout << "Display Memory => " << endl;

    memoryLoop();
    cout << "The End !" << endl;

    return 0;
}

void memoryLoop()
{
    string value = "ma changre chaine";
    string *adrValue = &value;

int compteur = 0;
    do {
        cout << *adrValue ;
        compteur++;
        cin;
    } while (compteur < value.size() + 20);

}

