#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void printArray(ostream& out, const string data[], int valueUsed);

void sortArray(string data[], int valueUsed);

void main()
{
    const int values = 32;
    string  names[values] =
    { "Guzman, Miguel Angel",
     "Minacapelli, Marley Nicole",
     "Sorrels, Nichole Yvonne",
     "Huyhn, Nguyen Dinh Trung",
     "Brown, Jazinea C.S.",
     "Mora, Salvador",
     "Rodgers, Allan",
     "Wright, Marquis Leniel",
     "Nguyen, Thien Tu T",
     "Collazo, Juan",
     "Henderson, Kathy",
     "Asadpoursiahgolvandani, Ali",
     "Johnson, Chloe",
     "Thompson, Alexa Trinity",
     "Montoya, Matthew E",
     "Sun, Darkia Ashely",
     "Atkison Robert Dylan",
     "Hughes, Emily Lynn",
     "Broyles, Terry Jang",
     "Livengood, Eli Ryan",
     "Sloan, Lucas Garrett",
     "McDonald, Kaitlin Breann",
     "Fisher, Christian D",
     "Moradi, Audel",
     "Santos, Marco Antonio",
     "Lopez, Lisa Marie",
     "Neuding, Aaron",
     "Sanchez, Leonardo Fabian",
     "Carr, Brandon Ryan",
     "Faris, Jarred Anthony",
     "Alfaisal, Ali Faisal",
     "Eromosele, Joshua - Billy",
    };

    cout << "Here's the unsorted names: " << endl;
    cout << "---------------------------" << endl;
    printArray(cout, names, values);
    cout << endl;

    sortArray(names, values);

    cout << "Here's the sorted names: " << endl;
    cout << "-------------------------" << endl;
    printArray(cout, names, values);
    cout << endl;

}

void printArray(ostream& out, const string data[], int valueUsed)
{
    for (int i = 0; i < valueUsed; ++i)
    {
        out << data[i] << endl;
    }
}

void sortArray(string data[], int valueUsed)
{
    sort(data, data + valueUsed);

}