/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(MANUAL);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);

// setup() runs once, when the device is first turned on
void setup() {
  // Put initialization like pinMode and begin functions here
  EEPROM.put(8, 1);   //Mode (0 = Demo, 1 = LED Sight Glass)
  EEPROM.put(10, 0);  //LevelSns_Type (0 = Submersible, 1 = Ultrasonic)
  EEPROM.put(12, 38); //LevelSns_TankHeight (Default to 1:1 mapping from LED to Tank Height)
  EEPROM.put(14, 0);  //LevelSns_SnsOffset 
  EEPROM.put(20, 38); //LED_Length
  EEPROM.put(22, 60); //LED_Cnt
  EEPROM.put(24, 25); //LED_AlrtLowPerc
  EEPROM.put(26, 75); //LED_AlrtHighPerc
  EEPROM.put(28, 520); //convMulti
  EEPROM.put(30, 50); //LED Brightness
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

  // Example: Publish event to cloud every 10 seconds. Uncomment the next 3 lines to try it!
  // Log.info("Sending Hello World to the cloud!");
  // Particle.publish("Hello world!");
  // delay( 10 * 1000 ); // milliseconds and blocking - see docs for more info!
}
