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

//endGame
void endGame()
{
    srand(time(0));
    //initialize variables
    bool forests = false, goodPlants = false, melt = false;
    bool goodRuins= false, scarcity = false, ;
    String wetness, atmosphere;
    int fateValue=0, tempResult;

    //Used to calculate the correct phrase for paragrapgh
    if(planet_Temp<0)
        tempResult =0;
    else if(planet_Temp>=0 && planet_Temp<=500)
        tempResult =1;
    else 
        tempResult =2;

    //Calculate the forest conditions
    if (planet_Water > 1 && planet_Water < 4)
        forests = true;

    //Random statement that determines good plants
    //Good plants implies that there are good animals too
    if(rand()%2 == 1)
        goodPlants = true;

    //Calculates the ruins conditions
    if(rand()%2 == 1)
        goodRuins = true;

    //Scarcity 
    if(tempResult == 0 || tempResult == 4 || planet_Water == 0 || planet_Water == 4)
        scarcity = true; 

    //Calculate if planet is wet or dry
    if(planet_Water >= 2)
        wetness = "wet";
    else wetness = "dry";

    //Calculate fate of colonists upon landing
    if(ship_Landing < 70) {
        fateValue = rand() % 100;
        ship_Colonists -= fateValue;
    }

    ship_Colonists = ship_Colonists - fateValue;

    //Calculate planet atmosphere
    if(planet_Atmosphere == 0)
        atmosphere = "very thin";
    else if(planet_Atmosphere == 1)
        atmosphere = "thin";
    else if(planet_Atmosphere == 2)
        atmosphere = "Earth-like";
    else if(planet_Atmosphere == 3)
        atmosphere = "toxic";
    else 
        atmosphere = "corrosive";

    //Temperature calculation
    if(planet_Temp >500)
        melt = true;

    //to see if we can live on a planet we look at 
    //construction, resoucrses, landing

    //Print out the first paragraph
    Serial.println("The Earthseed entered into the planet’s %s ", atmosphere);
    Serial.println("atmosphere and activated its landing gear as "); 
    Serial.print("soon as it approached the planet’s %s surface.", wetness);
    if(fateValue == 0) {
        Serial.println("Since the landing gear took very little damage, ");
        Serial.println("the ship managed to safely land and avoid any losses.");
    }
    else {
        Serial.println("Since the landing gear sustained great damage, ");
        Serial.println("the ship was not able to land smoothly "); 
        Serial.println("on the planet’s surface and %d colonists end up dying.", fateValue);
        Serial.println("Thankfully, engineers from the colony managed to patch ");
        Serial.println("up the damage and keep the ship afloat.");
    }
    if(melt) {
        Serial.println("Upon landing, the ship starts melting under the high");
        Serial.println("temperatures and kills everyone in the Earthseed.");
        Serial.println("Thanks for making humans extinct. ");
    }

    //Calculate the variables
    //Consider the variables
    //Display correct messages

}

//New Game
