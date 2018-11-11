// Variables
//Declare stats for planet as global vairbales
int planet_Atmosphere = 0, planet_Water = 0, planet_Temp = 0, planet_Gravity = 0, planet_Resources = 0, planet_Civilization = 0;
int planNum=0;
int luck1=0, luck2=0, luck3=0, luck4=0, luck5=0;

void generatePlanetStats()
{
  srand(analogRead(A7));

    //Update new planet stats
    planet_Atmosphere = rand() % 5;     //(0-4)
    planet_Water = rand() % 4;          //(0-3)
    planet_Temp = (rand() % 1501) - 500;   //(-500 to 1000) temp is in F 
    planet_Gravity = rand() % 5;        //(0-4)
    planet_Resources = rand() % 5;      //(0-4)
    if(planet_Temp > - 100 && planet_Temp < 300)
      planet_Civilization = rand() % 20;   //(0-19)

    luck1 = (rand() % 100) + 1;
    luck2 = (rand() % 100) + 1;
    luck3 = (rand() % 100) + 1;
    luck4 = (rand() % 100) + 1;
    luck5 = (rand() % 100) + 1;
}


void planetScan()
{
  String stat = "", wetness = "UNKNOWN", atmosphere = "UNKNOWN", tempReading ="UNKNOWN", gravReading="UNKNOWN", resReading="UNKNOWN", civReading="UNKNOWN";
  String value = "";

    //Calculate strings for the readings.
    
        //Temperature
        if(uranusProbed || luck1 <= tempScan)
        {
            tempReading = "";
            tempReading += planet_Temp;
            tempReading += " F";
        }

        //Atmosphere
        if(uranusProbed || luck2 <= atmosScan)
        {
            if(planet_Atmosphere == 0)
                atmosphere = "NONE";
            else if(planet_Atmosphere == 1)
                atmosphere = "THIN";
            else if(planet_Atmosphere == 2)
                atmosphere = "BRETHABLE";
            else if(planet_Atmosphere == 3)
                atmosphere = "TOXIC";
            else 
                atmosphere = "CORROSIVE";
        }

        //Water
        if(uranusProbed || luck3 <= waterScan)
        {
            if(planet_Water >= 2)
                wetness = "WET";
            else wetness = "DRY";
        }

        //Gravity
        if(uranusProbed || luck4 <= gravScan)
        {
            if(planet_Gravity < 2)
                gravReading = "LOW";
            else if(planet_Gravity == 2)
                gravReading = "NORMAL";
            else
                gravReading = "EXTREME";
        }

        //Resources
        if(uranusProbed || luck5 <= resScan)
        {
            if(planet_Resources < 2)
                resReading = "NONE";
            else if(planet_Resources == 2)
                resReading = "NORMAL";
            else
                resReading = "RICH";
        }

        //Civilization
        if(uranusProbed)
        {
          if(planet_Civilization < 12)
              civReading = "NONE";
          else if(planet_Civilization < 16)
              civReading = "PRIMATIVE";
          else if(planet_Civilization < 19)
              civReading = "MODERN";
          else
              civReading = "POST-MOD";
        }
          
  switch(planNum)
  {
    case 1:
      stat = "Water: ";
      value = wetness;
      break;
    case 2:
      stat = "Temp: ";
      value = tempReading;
      break;
    case 3:
      stat = "Grav: ";
      value = gravReading;
      break;
    case 4:
      stat = "Resource: ";
      value = resReading;
      break;
    case 5:
      stat = "Civ: ";
      value = civReading;
      break;
    default:
      stat = "Atmos: ";
      value = atmosphere;
      break;
  }
  String output = stat + value;
  
  //Wipe away any characters left behind  
  for(int i=16-output.length(); i > 0; i--)
  {
    output += " ";
  }
  
  lcd.setCursor(0, 0);
  lcd.print(output);
  lcd.setCursor(0, 1);
  lcd.print("<  >        Back");
  //int switchVal = analogRead(button);
  if(!pressed)
  {
    switch(switchToChoice())
    {
      case 1:
        planNum--;
        if(planNum < 0)
          planNum = 5;
        pressed = true;
        break;
      case 2:
        planNum++;
        if(planNum > 5)
          planNum = 0;
        pressed = true;
        break;
      case 5:
        menuNum = 0;
        pressed = true;
        break;
      default:
        break;
    }
  }
}