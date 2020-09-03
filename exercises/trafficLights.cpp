/*
Traffic Lights. A procedure is needed to change all the traffic lights in a small town. Assume that you have a map showing the locations of the lights. Lights that are red must be changed to green, and lights that are green must be changed to red. (There are no yellow lights in the town, and also no lights that aren't working.) Your goal is to change the lights for one cycle only; you're not trying to control the lights continually day and night.

All the steps will be run in rapid succession. This means that if you have the step that turns a light green closely followed by the step that turns the light red, your light will momentarily turn green and then stay red. This will eventually turn all the lights in town red, and traffic will come to a standstill! (The “go to” statements will help you avoid ending up with all lights the same color.)

Test your result by creating a small map with seven traffic lights. Make three of them red, and the rest green. Does your solution successfully turn the red lights green, and the green lights red?
*/

#include <iostream>
using namespace std;
void turnLights(string lights[]);
const int MAX = 8;
int main()
{
   // string *lights[] = {"red", "green", "red", "green", "green", "green", "red", "green"};
   string lights[MAX];
   lights[0] = "red";
   lights[1] = "green";
   lights[2] = "red";
   lights[3] = "green";
   lights[4] = "green";
   lights[5] = "green";
   lights[6] = "green";
   lights[7] = "red";

   turnLights(lights);

   // turnLights(&lights);
   // int size = sizeof(lights) / 24;
   for (int i = 0; i < MAX; i++)
   {
      cout << lights[i] << endl;
   }

   return 0;
}

void turnLights(string lights[])
{
   // int size = sizeof(lights) / 24;
   for (int i = 0; i < MAX; i++)
   {
      if (lights[i] == "red")
      {
         lights[i] = "green";
      }
      else if (lights[i] == "green")
      {
         lights[i] = "red";
      }
   }
}