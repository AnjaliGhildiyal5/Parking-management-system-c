#include <stdio.h>
#include <string.h>

#include "parking.h"
#include "queue.h"

Vehicle vehicles[MAX_VEHICLES];

int vehicleCount = 0;

int nextParkingID = 1001;

double totalRevenue = 0;

int totalVehiclesServed = 0;
int nextReceipt = 1;

Queue freeSlots;

void initializeParking()
{
    initializeQueue(&freeSlots);

    loadRecords();
}
int generateParkingID()
{
    return nextParkingID++;
}
int generateReceiptNo()
{
    return nextReceipt++;
}

int searchVehicle(char vehicleNumber[])
{
    int i;

    for(i=0;i<vehicleCount;i++)
    {
        if(strcmp(vehicles[i].vehicleNumber,vehicleNumber)==0
           && vehicles[i].isParked==1)
        {
            return i;
        }
    }

    return -1;
}

