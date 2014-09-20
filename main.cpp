#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Passanger 14c " << mystr << ".\n" << "Location unknown.\n" << "Date Unknown.\n";
  system("PAUSE");

  cout << "\nBlurred vision...head hurts...hair wet.\n";
  cout << " What would you like to do?\n"
          "  [T]ouch your hair\n"
          "  [C]heck your pockets\n";

  char s;
  cin >> s;

  switch (toupper( s ))
    {
    case 'T':;
       cout << "\nIt's blood...\n";
       cout << " *You whipe the blood off hand onto neighboring seat*\n ";
       cout << " *You unbuckle your belt*\n ";
       cout << "You get up and look around the room\n";
       cout << "By the light coming from the shattered windows,";
       cout << " you count 17 dead\n";
    break;

    case 'C':;
       cout << "Your pockets are empty.\n";
       cout << " *You unbuckle your belt*\n ";
       cout << "You get up and look around the room\n";
       cout << "By the light coming from the shattered windows,";
       cout << " you count 17 dead\n";

    break;
    }
    system("PAUSE");

  cout << "Luggage scattered over the floor of the wrecked aircraft...."
          "where are the survivors?\n";
  cout << " Decisions, decisions...\n"
          "   [L]ook out the shattered window\n"
          "   [S]earch the cabin\n";

  char b;
  cin >> b;

  switch (toupper( b ))
    {
    case 'L':;
       cout << " 
    break;

    case 'S':;
       cout << "Your pockets are empty.\n";
       cout << " *You unbuckle your belt*\n ";
       cout << "You get up and look around the room\n";
       cout << "By the light coming from the shattered windows,";
       cout << " you count 17 dead\n";

    break;
    }



  system("PAUSE");
  cout << "id just give up hope now\n";
  cout << "What would you like to do?\n"
          "  [G]ive up\n"
          "  [C]arry on\n";
        
  

  char c; //declare c to be of type char
  cin >> c;

  switch (toupper( c ))
    {
    case 'G':;
         cout << "Go back to sleep.";
    break;

    case 'C':;
         cout << "Brave one arent you?";
    break;
    }


  system("PAUSE");
}

