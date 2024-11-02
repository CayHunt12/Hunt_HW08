#include "derek_LED.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <command>\n";
    std::cout << "Commands: on, off, flash, status\n";
    std::cout << "Example: " << argv[0] << " flash\n";
    return 1;
}

LED led;
std::string command = argv[1];

if (command == "on") {
        led.turnOn();
} else if (command == "off") {
        led.turnOff();
} else if (command == "flash") {
        led.flash();
} else if (command == "status") {
        led.getStatus();
} else {
        std::cout << "Invalid command!\n";
            }
 std::cout << "Finished the LED control program\n";
     return 0;
     }
