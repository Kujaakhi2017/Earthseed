// include the library code:
#include <LiquidCrystal.h>
#include <stdio.h> 
#include <stdlib.h>

//Declare ship stats as global variables
int ship_Landing = 100, ship_Construction = 100, ship_SciDB = 100, ship_CulDB = 100, ship_Colonists = 1000, ship_SurfaceProbes = 10;

//Declare stats for planet as global vairbales
int planet_Atmosphere = 0, planet_Water = 0, planet_Temp = 0, planet_Gravity = 0, planet_Resources = 0, planet_Civilization = 0;

//Function Prototype

//Decsion
//Scan Planet
void scanPlanet()
{
    
}
//Probe
//Land

//Generate new planet stats 
void generatePlanetStats()
{

    srand(time(0)); 

    //Update new planet stats
    planet_Atmosphere = (rand() % (5 - 1));     //(0-4)
    planet_Water = (rand() % (5 - 1));          //(0-4)
    planet_Temp = (rand() % (1000 +499)-500);   //(-500 to 1000) temp is in F 
    planet_Gravity = (rand() % (5 - 1));        //(0-4)
    planet_Resources = (rand() % (5 - 1));      //(0-4)
    planet_Civilization = (rand() % (5 - 1));   //(0-4)

    return; 
}
//Stat
//Choose System
//Random Event
//New Game