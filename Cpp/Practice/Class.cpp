#include <iostream>
#include <string>

class ECU {

private:
    std::string name;
    double vehicleSpeed;
    double batteryVoltage;
    double temperature;

public:
    // Member initializer list: initializes members directly before the constructor body.
    // This is preferred over assigning values inside the constructor.
    ECU(std::string ecuName)
        :   name(ecuName),
            vehicleSpeed(0.0),
            batteryVoltage(12.5), 
            temperature(25.0)
    { 
    }

    // Setters
    void setVehicleSpeed(double speed){
        vehicleSpeed = speed;
    }

    void setBatteryVoltage(double voltage){
        batteryVoltage = voltage;
    }

    void setTemperature(double temp){
        temperature = temp;
    }

    // Getters
    // This member function promises not to modify the object.
    double getVehicleSpeed() const{
        return vehicleSpeed;
    }

    double getBatteryVoltage() const {
        return batteryVoltage;
    }

    double getTemperature() const {
        return temperature;
    }

    // ECU logic
    bool isBatteryVoltageOK() const {
        return batteryVoltage >= 11.0 && batteryVoltage <= 15.0;
    }

    bool isTemperatureOK() const {
        return temperature >= -40.0 && temperature <= 125.0;
    }

    void printStatus() const {
        std::cout << "ECU: " << name << "\n";
        std::cout << "Vehicle Speed: " << vehicleSpeed << "km/h\n";
    }
};

int main()
{

    ECU absEcu("ABS ECU");
    absEcu.setVehicleSpeed(80.0);
    absEcu.setBatteryVoltage(12.0);
    absEcu.setTemperature(75.0);

    absEcu.printStatus();

    if (absEcu.isBatteryVoltageOK()){
        std::cout << "Battery Voltage: OK\n";
    }
    return 0;
}