const int ledPin = 13; // L LED pin

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // Display "RAVI" in Morse code
    morseCode("RAVI");
    delay(2000); // Wait for 2 seconds before repeating

    // You can replace "RAVI" with any other string
}

void morseCode(String message) {
    for (int i = 0; i < message.length(); i++) {
        char character = toupper(message[i]);
        switch (character) {
            case 'A':
                dot(); dash(); break;
            case 'B':
                dash(); dot(); dot(); dot(); break;
            case 'C':
                dash(); dot(); dash(); dot(); break;
            case 'D':
                dash(); dot(); dot(); break;
            case 'E':
                dot(); break;
            case 'F':
                dot(); dot(); dash(); dot(); break;
            case 'G':
                dash(); dash(); dot(); break;
            case 'H':
                dot(); dot(); dot(); dot(); break;
            case 'I':
                dot(); dot(); break;
            case 'J':
                dot(); dash(); dash(); dash(); break;
            case 'K':
                dash(); dot(); dash(); break;
            case 'L':
                dot(); dash(); dot(); dot(); break;
            case 'M':
                dash(); dash(); break;
            case 'N':
                dash(); dot(); break;
            case 'O':
                dash(); dash(); dash(); break;
            case 'P':
                dot(); dash(); dash(); dot(); break;
            case 'Q':
                dash(); dash(); dot(); dash(); break;
            case 'R':
                dot(); dash(); dot(); break;
            case 'S':
                dot(); dot(); dot(); break;
            case 'T':
                dash(); break;
            case 'U':
                dot(); dot(); dash(); break;
            case 'V':
                dot(); dot(); dot(); dash(); break;
            case 'W':
                dot(); dash(); dash(); break;
            case 'X':
                dash(); dot(); dot(); dash(); break;
            case 'Y':
                dash(); dot(); dash(); dash(); break;
            case 'Z':
                dash(); dash(); dot(); dot(); break;
            default:
                // If the character is not in the Morse code dictionary, ignore it
                break;
        }

        if (character != ' ') {
            // Add a short delay between letters
            delay(500);
        }
    }
}

void dot() {
    digitalWrite(ledPin, HIGH);
    delay(200); // Dot duration
    digitalWrite(ledPin, LOW);
    delay(200); // Inter-element gap
}

void dash() {
    digitalWrite(ledPin, HIGH);
    delay(600); // Dash duration
    digitalWrite(ledPin, LOW);
    delay(200); // Inter-element gap
}
