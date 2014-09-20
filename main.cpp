#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string mystr;
  char TorC;
  char LorS;
  char GorC;
  char BorF;





  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Passanger 14c " << mystr << ".\n" << "Location unknown.\n" << "Date Unknown.\n";
  system("PAUSE");

  cout << "\nBlurred vision...head hurts...hair wet.\n";
  cout << " What would you like to do?\n"
          "  [T]ouch your hair\n"
          "  [C]heck your pockets\n";

  cin >> TorC;
  switch (toupper( TorC ))
    {
    case 'T':;
       cout << "\nIt's blood...\n";
       cout << " *You whipe the blood off hand onto neighboring seat*\n ";
       cout << " *You unbuckle your belt*\n ";
       cout << "You get up and look around the room\n";
       cout << "By the light coming from the hole in the roof and the shattered windows,";
       cout << " you count 17 bodies on the ground\n";
    break;

    case 'C':;
       cout << "Your pockets are empty.\n";
       cout << " *You unbuckle your belt*\n ";
       cout << "You get up and look around the room\n";
       cout << "By the light coming from the hole in the roof and the shattered windows,";
       cout << " you count 17 bodies on the ground\n";

    break;
    }
    system("PAUSE");

  cout << "Luggage scattered over the floor of the wrecked aircraft...."
          "where are the survivors?\n";
  cout << " What wpu;d you like to do\n"
          "   [L]ook out the shattered window\n"
          "   [S]earch the cabin\n";

  
  cin >> LorS;

  switch (toupper(LorS))
    {
    case 'L':;
       cout << "" 
    break;

    case 'S':;
        cout << "What part of the cabin would you like to search\n";
        cout << "[B]ack of the cabin\n"
                "[F]ront of the cabin\n";
                
                cin >> BorF
                switch (toupper(BorF))
                {
                  case 'B':;
                    cout << "y";
                  break;
                  
                  case 'F':;
                    cout << "You find that the front of the cabin is under water\n";
                    cout << "[C]ontinue searching the front\n"
                            "[H]ead to the back of the plane\n";
                  break;
                  
                }

    break;
    }



  system("PAUSE");
  cout << "id just give up hope now\n";
  cout << "What would you like to do?\n"
          "  [G]ive up\n"
          "  [C]arry on\n";
        
  

  
  cin >> GorC;

  switch (toupper( GorC ))
    {
    case 'G':;
         cout << "Go back to sleep, and die peacfully in your sleep";
    break;

    case 'C':;
         cout << "Pick your self up and carry on";
    break;
    }


  system("PAUSE");
}

