// ZgadnijJakaLiczba.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL)); 

    unsigned short randomNumber = rand() % 100 + 1;
    unsigned short userNumber = 0;


    cout << "Zgadnij o jakiej liczbie mysle z zakresu od 1 do 100\n";
    cout << "Wpisanie 0 (zero) konczy program\n";
    
    cout << "Wylosowana liczba: " << randomNumber << "\n";
    
    while (1) {
       
        cout << "Zgadnij liczbe: ";
        cin >> userNumber;

        if (userNumber == 0) {
            cout << "Wpisales 0 (zero) - koncze program";
            break;
        }

        if (userNumber > randomNumber)
            cout << "Wylosowana liczba jest mniejsza od Twojej\n";

        if (userNumber < randomNumber)
            cout << "Wylosowana liczba jest wieksza od Twojej\n";

        if (userNumber == randomNumber) {
            cout << "Brawo zgałes !!!! wylosowana liczba to: " << randomNumber;
            break;
        }
    }
   
   

   // system("Pause");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
