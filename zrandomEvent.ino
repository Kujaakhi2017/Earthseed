//Random event
void randomEvent()
{
    int instance =0;
    int store =0;
    
    srand(analogRead(A7));
    instance = rand() % 100;
    String output = "";
    
    if(instance <25) //good happens
        {
                    int repair = rand() %12;
        //go through and randomly mess up one of the user comp
        //one less because we can't bring people back to life.
        switch(repair)
        {
            default:
                    store = (rand() % (35 - 16)) + 15;
                    landing += store;
                    //digitalWrite(led2, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("LANDING GEAR FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 1:
                    store = (rand() % (35 - 16)) + 15;
                    construction += store;
                    //digitalWrite(led2, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("CNSTRCT PODS FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 3:
                    store = (rand() % (25 - 6)) + 5;
                    liveStock -= store;
                    //digitalWrite(led3, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("LIVE STOCK HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 4:
                    store = (rand() % (35 - 16)) + 15;
                    supplies += store;
                    //digitalWrite(led3, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("SUPPLY FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 5:
                    store = (rand() % (35 - 16)) + 15;
                    science += store;
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("SCINTIFIC DB FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 6:
                    store = (rand() % (35 - 16)) + 15;
                    culture += store;
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("CULTURE DB FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 7:
                    probes += 1;
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("PROBES FOUND");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    lcd.print("+1");
                    delay(3000);
                    break;
            case 8:
                    store = (rand() % (35 - 16)) + 15;
                    tempScan += store;
                    //digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("TEMP SCANNER FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 9:
                    store = (rand() % (35 - 16)) + 15;
                    atmosScan += store;
                    //digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("ATMO SCANNER FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 10:
                    store = (rand() % (35 - 16)) + 15;
                    gravScan += store;
                    //digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("GRAV SCANNER FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 11:
                    store = (rand() % (35 - 16)) + 15;
                    waterScan = store;
                    //digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("WATR SCANNER FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 12:
                    store = (rand() % (35 - 16)) + 15;
                    resScan += store;
                    //digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("RESC SCANNER FIX");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
        }
        }
    else if(instance >25 && instance <51)
    {
        //nothing happens
    }
    else
    {
        //something bad happens
        int damage = rand() %13;
        //go through and randomly mess up one of the user comp
        switch(damage)
        {
            default:
                    store = (rand() % (25 - 6)) + 5;
                    landing -= store;
                    digitalWrite(led2, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("LANDING GEAR HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 1:
                    store = (rand() % (25 - 6)) + 5;
                    construction -= store;
                    digitalWrite(led2, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("CNSTRCT PODS HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 2:
                    store = (rand() % (25 - 6)) + 5;
                    colonists -= store;
                    digitalWrite(led1, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("LIFE PODS HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 3:
                    store = (rand() % (25 - 6)) + 5;
                    liveStock -= store;
                    digitalWrite(led2, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("LIVE STOCK HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 4:
                    store = (rand() % (25 - 6)) + 5;
                    supplies -= store;
                    digitalWrite(led2, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("SUPPLIES HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 5:
                    store = (rand() % (25 - 6)) + 5;
                    science -= store;
                    digitalWrite(led3, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("SCINTIFIC DB HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 6:
                    store = (rand() % (25 - 6)) + 5;
                    culture -= store;
                    digitalWrite(led3, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("CULTURE DB HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 7:
                    probes -= 1;
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("PROBES HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    lcd.print("-1");
                    delay(3000);
                    break;
            case 8:
                    store = (rand() % (25 - 6)) + 5;
                    tempScan -= store;
                    digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("TEMP SCANNER HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 9:
                    store = (rand() % (25 - 6)) + 5;
                    atmosScan -= store;
                    digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("ATMO SCANNER HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 10:
                    store = (rand() % (25 - 6)) + 5;
                    gravScan -= store;
                    digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("GRAV SCANNER HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 11:
                    store = (rand() % (25 - 6)) + 5;
                    waterScan -= store;
                    digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("WATR SCANNER HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
                    delay(3000);
                    break;
            case 12:
                    store = (rand() % (25 - 6)) + 5;
                    resScan -= store;
                    digitalWrite(led4, HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("                ");
                    lcd.setCursor(0,0);
                    lcd.print("RESC SCANNER HIT");
                    lcd.setCursor(0,1);
                    lcd.print("                ");
                    lcd.setCursor(0,1);
                    output = "-" + store;
                    lcd.print(output);
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