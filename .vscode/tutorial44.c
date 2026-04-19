#include <stdio.h>
#include <string.h>
struct driver {
    char name[100];
    int driving_license_number;
    char vehicle_number[20];
    char route[100];
    int KMS_driven;
};
int main() {
    struct driver d1,d2,d3;
    strcpy(d1.name, "Mausam");
    strcpy(d2.name, "Hardik");
    strcpy(d3.name, "Harry");
    d1.driving_license_number=1234;
    d2.driving_license_number=5678;
    d3.driving_license_number=9101;
    strcpy(d1.vehicle_number, "BR01AB1234");
    strcpy(d2.vehicle_number, "BR02CD5678");
    strcpy(d3.vehicle_number, "BR03EF9101");
    strcpy(d1.route, "Patna to Delhi");
    strcpy(d2.route, "Patna to Mumbai");
    strcpy(d3.route, "Patna to Kolkata");
    d1.KMS_driven=500;
    d2.KMS_driven=800;
    d3.KMS_driven=600;
    printf("Driver 1:\nName: %s \nDriving License Number: %d \nVehicle Number: %s \nRoute: %s \nKMS Driven: %d\n", d1.name, d1.driving_license_number, d1.vehicle_number, d1.route, d1.KMS_driven);
    printf("Driver 2:\nName: %s \nDriving License Number: %d \nVehicle Number: %s \nRoute: %s \nKMS Driven: %d\n", d2.name, d2.driving_license_number, d2.vehicle_number, d2.route, d2.KMS_driven);
    printf("Driver 3:\nName: %s \nDriving License Number: %d \nVehicle Number: %s \nRoute: %s \nKMS Driven: %d\n", d3.name, d3.driving_license_number, d3.vehicle_number, d3.route, d3.KMS_driven);
return 0;

}