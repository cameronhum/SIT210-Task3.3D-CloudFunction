// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
}

// The loop() method is called frequently.
void loop()
{
	

}


void myHandler(const char *event, const char *data)
{
	

	if (strcmp(data, "wave") == 0)
	{
	    for(int i = 0; i < 3;i++){
	        // Turn on the LED
	        digitalWrite(MY_LED, HIGH);

        	// Leave it on for one second
        	delay(500ms);
        
        	// Turn it off
        	digitalWrite(MY_LED, LOW);
        
        	// Wait one more second
        	delay(500ms);
	    }
	
	}
	
	if (strcmp(data, "pat") == 0)
	{
	    for(int i = 0; i < 2;i++){
	        // Turn on the LED
	        digitalWrite(MY_LED, HIGH);

        	// Leave it on for one second
        	delay(100ms);
        
        	// Turn it off
        	digitalWrite(MY_LED, LOW);
        
        	// Wait one more second
        	delay(100ms);
	    }
	
	}
	
}
