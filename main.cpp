#include <iostream>
#include <iomanip>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    double temperature;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> temperature;
    cout << "Enter the unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    // Set precision for output
    cout << fixed << setprecision(2);

    if (unit == 'C' || unit == 'c') {
        double fahrenheit = celsiusToFahrenheit(temperature);
        double kelvin = celsiusToKelvin(temperature);
        cout << temperature << " °C = " << fahrenheit << " °F" << endl;
        cout << temperature << " °C = " << kelvin << " K" << endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = fahrenheitToCelsius(temperature);
        double kelvin = fahrenheitToKelvin(temperature);
        cout << temperature << " °F = " << celsius << " °C" << endl;
        cout << temperature << " °F = " << kelvin << " K" << endl;
    } else if (unit == 'K' || unit == 'k') {
        double celsius = kelvinToCelsius(temperature);
        double fahrenheit = kelvinToFahrenheit(temperature);
        cout << temperature << " K = " << celsius << " °C" << endl;
        cout << temperature << " K = " << fahrenheit << " °F" << endl;
    } else {
        cout << "Invalid unit! Please enter C, F, or K." << endl;
    }

    return 0;
}
