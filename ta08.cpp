#include <iostream>
#include "circle.h"

using namespace std;

/***********************************************************
 * Function: Main
 * Prompts for a circle and displays it. 
 ***********************************************************/
int main()
{
   Circle circle;

   circle.promptForCircle();

   cout << "Your circle is:\n";
   circle.display();

   cout << "\n\n";

   cout << "The x-coordinate of your circle is: " << circle.getX() << endl;

   return 0;
}


