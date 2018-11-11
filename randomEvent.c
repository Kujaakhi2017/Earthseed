
//Random event
void randomEvent()
{
    int instance =0;
    int store =0;
    
    srand(analogRead(A6));
    instance = rand() % 100;

    if(instance <25) //good happens
        {
                    instance = rand() %12;
        //go through and randomly mess up one of the user comp
        //one less because we can't bring people back to life.
        switch(instance)
        {
            default:
                    store = (rand() % (35 - 16)) + 15;
                    landing += store;
                    digitalWrite(led2, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("LANDING GEAR FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 1:
                    store = (rand() % (35 - 16)) + 15;
                    construction += store;
                    digitalWrite(led2, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("CNSTRCT PODS FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 3:
                    store = (rand() % (25 - 6)) + 5;
                    liveStock -= store;
                    digitalWrite(led3, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("LIVE STOCK HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 4:
                    store = (rand() % (35 - 16)) + 15;
                    supplies += store;
                    digitalWrite(led3, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("SUPPLY FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 5:
                    store = (rand() % (35 - 16)) + 15;
                    science += store;
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("SCINTIFIC DB FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 6:
                    store = (rand() % (35 - 16)) + 15;
                    culture += store;
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("CULTURE DB FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 7:
                    probes += 1;
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("PROBES FOUND");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+1");
                    delay(3000);
                    break;
            case 8:
                    store = (rand() % (35 - 16)) + 15;
                    tempScan += store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("TEMP SCANNER FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 9:
                    store = (rand() % (35 - 16)) + 15;
                    atmosScan += store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("ATMO SCANNER FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 10:
                    store = (rand() % (35 - 16)) + 15;
                    gravScan += store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("GRAV SCANNER FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 11:
                    store = (rand() % (35 - 16)) + 15;
                    waterScan = store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("WATR SCANNER FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
            case 12:
                    store = (rand() % (35 - 16)) + 15;
                    resScan += store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("RESC SCANNER FIX");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("+" +store);
                    delay(3000);
                    break;
        }
        }
    else if(instace >25 && instance <51)
        //nothing happens

    else
    {
        //something bad happens
        instance = rand() %13;
        //go through and randomly mess up one of the user comp
        switch(instance)
        {
            default:
                    store = (rand() % (25 - 6)) + 5;
                    landing -= store;
                    digitalWrite(led2, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("LANDING GEAR HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 1:
                    store = (rand() % (25 - 6)) + 5;
                    construction -= store;
                    digitalWrite(led2, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("CNSTRCT PODS HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 2:
                    store = (rand() % (25 - 6)) + 5;
                    colonists -= store;
                    digitalWrite(led1, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("LIFE PODS HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 3:
                    store = (rand() % (25 - 6)) + 5;
                    liveStock -= store;
                    digitalWrite(led3, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("LIVE STOCK HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 4:
                    store = (rand() % (25 - 6)) + 5;
                    supplies -= store;
                    digitalWrite(led3, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("SUPPLIES HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 5:
                    store = (rand() % (25 - 6)) + 5;
                    science -= store;
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("SCINTIFIC DB HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 6:
                    store = (rand() % (25 - 6)) + 5;
                    culture -= store;
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("CULTURE DB HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 7:
                    probes -= 1;
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("PROBES HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-1");
                    delay(3000);
                    break;
            case 8:
                    store = (rand() % (25 - 6)) + 5;
                    tempScan -= store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("TEMP SCANNER HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 9:
                    store = (rand() % (25 - 6)) + 5;
                    atmosScan -= store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("ATMO SCANNER HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 10:
                    store = (rand() % (25 - 6)) + 5;
                    gravScan -= store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("GRAV SCANNER HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 11:
                    store = (rand() % (25 - 6)) + 5;
                    waterScan -= store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("WATR SCANNER HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
            case 12:
                    store = (rand() % (25 - 6)) + 5;
                    resScan -= store;
                    digitalWrite(led4, HIGH);
                    setCursor(0,0);
                    lcd.print("                ");
                    setCursor(0,0);
                    lcd.print("RESC SCANNER HIT");
                    setCursor(0,1);
                    lcd.print("                ");
                    setCursor(0,1);
                    lcd.print("-" +store);
                    delay(3000);
                    break;
        }
    }
    //reset variables as we go to the next planet
    uranusProbed = false;
    generatePlanetStats();
    mainNum = 0;
    menuNum = 0;
    //50% bad
    //25% good
    //25% nothing
    //Handle if it happens or not
    
    //randomly improve or repair something
    //30% nothing happens
    //print something, do the delay and do the main menu
    //25%
    //5-25
}