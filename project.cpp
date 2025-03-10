#include <iostream>
#include <string>
using namespace std;

class Truck {
public:
    string numberPlate, driverName, driverPhone, driverAddress, model, checkInTime, checkOutTime;
    int fuelRemaining;
    Truck(string numPlate, string dName, string dPhone, string dAddress, string m, int fuel)
        : numberPlate(numPlate), driverName(dName), driverPhone(dPhone), driverAddress(dAddress), model(m), fuelRemaining(fuel) {}

    void displayTruckInfo() {
        cout << "Plate: " << numberPlate << "\nDriver: " << driverName << "\nPhone: " << driverPhone
             << "\nAddress: " << driverAddress << "\nModel: " << model << "\nFuel: " << fuelRemaining << " liters\n";
    }

    void checkInOut(string& time, const string& label) {
        cout << label << " (YYYY-MM-DD HH:MM:SS): ";
        cin >> time;
    }

    string getNumberPlate() const { return numberPlate; }
};

void sortTrucks(Truck* trucks[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (trucks[i]->getNumberPlate() > trucks[j]->getNumberPlate())
                swap(trucks[i], trucks[j]);
}

int main() {
    Truck* trucks[5];
    int truckCount = 0;
    while (truckCount < 5) {
        string numPlate, dName, dPhone, dAddress, model;
        int fuel;
        cout << "\nTruck Plate: "; cin >> numPlate;
        if (numPlate == "stop") break;
        cout << "Driver Name: "; cin.ignore(); getline(cin, dName);
        cout << "Phone: "; cin >> dPhone;
        cout << "Address: "; cin.ignore(); getline(cin, dAddress);
        cout << "Model: "; cin >> model;
        cout << "Fuel (out of 2000L): "; cin >> fuel;
        trucks[truckCount++] = new Truck(numPlate, dName, dPhone, dAddress, model, fuel);
    }

    sortTrucks(trucks, truckCount);

    string searchPlate, checkTime;
    cout << "\nEnter truck plate to search: "; cin >> searchPlate;
    for (int i = 0; i < truckCount; i++) {
        if (trucks[i]->getNumberPlate() == searchPlate) {
            trucks[i]->displayTruckInfo();
            trucks[i]->checkInOut(checkTime, "Check-in");
            trucks[i]->checkInOut(checkTime, "Check-out");
            break;
        }
    }

    for (int i = 0; i < truckCount; i++) delete trucks[i];
    return 0;
}

