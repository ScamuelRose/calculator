

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // std::cout << "calculate the average of 3 numbers!\n";
     // write variabes that will be calculated, the 3 different numebr variable, and the result variable of the function that will be shown.
    // char liczba1;
    // liczba1 == 1;
    // singed a;
   //  a == 1;

    // int result;
    // float mojaliczba;
    // char liczba4, liczba5, liczba6;
     // dziwne czym są sign unsign numbers, negatywne liczby po co to komu?, ale nie zawsze musze to pisać że jest signed jeżeli dodatnia, ale można
    // char liczba2;
    //char liczba3;
     //liczba2 = 2;
    // liuczba3 = 3;
     //result == liczba1 + liczba2 + liczba3;
 //cout << result;

    //int a, b;  int result; a = 0; b = 2; a = a + 1;result = a - b; cout << result; // normalnie wychodzi ujemna liczba jak ma wyjść//A CO JAK UŻYJE CZAR ZAMIAST INT?
    //A co jak zapisze result jako short int jaka bedzie maks i min liczba?
    // int a, b; short int result; a = 327673414; b = 2; a = a + 1; result = a - b; cout << result; //  W WYŻSZYCH LICZBACH SIĘ PSUJE
    //int a, b;  int result; a = 327673414; b = 2; a = a + 1; result = a - b; cout << result; //bez short normalnie wychodzi
    // nadal nwm jak char użyć
    //char a, b; char result; a = 10; b = 6; a = a + 1;   result = a - b;   cout << result;    // lol jak jest ujemna wartość to się coś psuje

        //DOBRA ROBISZ TEN KALKULATOR
   // int liczba1, liczba2, liczba3;  int result, suma; 
   // cin >> liczba1;
    //suma = liczba1 + liczba2 + liczba3; cout << suma;
    //int a, b(2);  int result; a = 10;b = 3; a = a + 1; result = a - b; cout << result; // można zobaczyć że wartość b może być nadpisana i jest, ta dwójka wcześniej nie liczy się jak
    // zeby używać string musze mieć std namespace
    //string mystring = "This is a string";
    //cout << mystring;
    // COśtam w podeczniku true false, cośtam bloom
    // trzeba pamiętać o kolejności, i że te zmienne, mogą zostać zmienione dowolną ilość razy, albo wogule, b=2; a = b; b=5; wtedy b rowna sie 5, a a nie równa się b bo to późniejsze działanie tylko 2
       // tutorial operacje arytmetyczne. value += increase; value = value + increase;
    //a -= 5; a = a - 5;
  //  a /= b; a = a / b;
   // price *= units + 1; price = price * (units + 1);
    // dobra czyli już napewno umiem zapisać sume i działanie
  //  int a, b, c, suma, result; a = 1; b = 2; c = 3; suma = a + b + c; result = suma; result /= 3; cout << result; // teraz trzeba tylko zrobić tak żebym ja wpisyłał wartości w konsoli
    // modulo daje reszte  z dzielenia chyba.
    //Shortening even more some expressions, the increase operator (++) and the decrease operator (--) increase or 
    //reduce by one the value stored in a variable.They are equivalent to += 1 and to -= 1, respectively.Thus:
   // c++;
   // c += 1;
    //c = c + 1;

   // == Equal to
  //      != Not equal to
//> Greater than
//< Less than
  //  >= Greater than or equal to
  //      <= Less than or equal to
    // boże ile operacji logistycznych
    // dobra zapytam chat gtp jak wpisać dane
       // Read user input into myVariable
   // powiedział coś takiego,  std::cin >> myVariable; nwm co to std ale 
    //int a, b, c, suma, result; cout << "Enter a new value for myVariable: "; std:cin>>a; b=2; c=3; suma = a + b + c; result = suma; result /= 3; cout << result;
    // ja std nadal nie rozumiem, a kilka liczb to też dziwnie działa

    // DIBRA W TUTORIALU DOSZEDLEM DO INPUT
    //int a; cin >> a; cout << a;\ kurwa działa umiem cin zrobić ale łatwe
    // teraz zrobie to z pamięci nie patrząc na nic
    //int a, b, c, suma, result; cout << "Wpisz a: "; cin >> a; cout << "Wpisz b: "; cin >> b; cout << "Wpisz c: "; cin >> c; suma = a + b + c; result = suma; result /= 3; cout << result;
    int a, b, c, d, choice, suma, average, multi, division, subtraction, reszta;
    string answer; 
    cout << "Witam wpisz liczbe: "; cin >> a; 
    
    while (choice!=5)
    {

        cout << "wybierz dzialanie(1 suma, 2 odejmowanie, 3 mnozenie, 4 dzielenie) "; cin >> choice;
        if (choice == 1)
        {
            cout << "Witam wpisz druga liczbe: ";
            cin >> b; suma = a + b;
            cout << suma; a = suma;
        }
        else if (choice == 2)
        {
            cout << "Witam wpisz druga liczbe: ";
            cin >> b; cout << ".\n";
            subtraction = a - b;
            cout << subtraction; a = subtraction;

        }
        else if (choice == 3)
        {
            cout << "Witam wpisz druga liczbe: ";
            cin >> b; cout << ".\n";
            multi = a * b;
            cout << multi; a = multi;

        }
        else if (choice == 4)
        {
            cout << "Witam wpisz druga liczbe: ";
            cin >> b; cout << ".\n";
            division = a / b; reszta = a % b;
            cout << division << " a reszta tego dzielenia to: " << reszta; a = division;
        }
        //else
       // {
            //cout << "Czy chcesz liczyć dalej"; getline(cin, answer);
           // if (answer == tak)
            //{
           // }
            //esle
            //{
            //}
       // }
    }
         return 0;
    //jak wogule napisać żeby coś obliczyło coś?
};




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file