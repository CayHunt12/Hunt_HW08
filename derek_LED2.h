
#include <string>

class LED {
private:
    const std::string LED_PATH;
    void writeLED(const std::string& filename, const std::string& value);
    void removeTrigger();

public:
    LED(int ledNumber);
        void turnOn();
        void turnOff();
        void flash();
        void getStatus();
        virtual void blink(int num);
};        
