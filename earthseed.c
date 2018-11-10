/*

*/

void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.println("The year is 2036. Food and water scarcity has caused third world nations ");
    Serial.println("to wage war against each other, resulting in World War III. To ");
    Serial.println("save whatever was left of humanity, a group of smart scientists and engineers ");
    Serial.println("decided to build a spaceship and they called it the Earthseed. ");
    Serial.println("They filled the ship with a thousand humans from around the world, ");
    Serial.println("each with their own unique set of skills and knowledge.");
    Serial.println("The ship was been loaded with cultural databases, scientific databases, ");
    Serial.println("livestock and some emergency supplies. to ensure survival on an alien planet.");
    Serial.println("In addition, multiple scanners have been installed on the Earthseed to help ");
    Serial.println("identify the perfect planet to colonize and potentially strive in.");
    Serial.println("As the ship's captain, you will be periodically awoken and presented ");
    Serial.println("with some choices by the ship's AI. Your goal is to find a new home for ");
    Serial.println("humans to live in, a home that will have technologies, cultures, governments ");
    Serial.println("and resources better than that of Earth in 2018.");
    Serial.println();
    Serial.println("The future of humanity lies in your hands.");
    
    if (Serial.available() > 0) {
                // read the incoming string:
                String input = Serial.readString();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(input);
    }
    delay(1000);
}
