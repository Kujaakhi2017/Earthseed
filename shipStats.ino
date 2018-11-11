// Variables
int landing = 100, construction = 100, colonists = 1000, liveStock = 100;
int supplies = 100, science = 100, culture = 100;
int tempScan = 100, atmosScan = 100, gravScan = 100, waterScan = 100, resScan = 100;
// Which ship stat to view
int statNum = 0;

void shipStats()
{
  String stat = "";
  int value = 0;
  bool percentage = true;
  switch(statNum)
  {
    case 1:
      stat = "Landing: ";
      value = landing;
      break;
    case 2:
      stat = "Construct: ";
      value = construction;
      break;
    case 3:
      stat = "Probes: ";
      value = probes;
      percentage = false;
      break;
    case 4:
      stat = "Livestock: ";
      value = liveStock;
      break;
    case 5:
      stat = "Supplies: ";
      value = supplies;
      break;
    case 6:
      stat = "Science DB: ";
      value = science;
      break;
    case 7:
      stat = "Culture DB: ";
      value = culture;
      break;
    case 8:
      stat = "TempScan: ";
      value = tempScan;
      break;
    case 9:
      stat = "AtmosScan: ";
      value = atmosScan;
      break;
    case 10:
      stat = "GravScan: ";
      value = gravScan;
      break;
    case 11:
      stat = "WaterScan: ";
      value = waterScan;
      break;
    case 12:
      stat = "ResScan: ";
      value = resScan;
      break;
    default:
      stat = "Colonists: ";
      value = colonists;
      percentage = false;
      break;
  }
  String output = stat + value;
  if(percentage)
    output += "%";
  
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
        statNum--;
        if(statNum < 0)
          statNum = 12;
        pressed = true;
        break;
      case 2:
        statNum++;
        if(statNum > 12)
          statNum = 0;
        pressed = true;
        break;
      case 5:
        // todo: call scan planet function
        menuNum = 0;
        pressed = true;
        break;
      default:
        break;
    }
  }
}