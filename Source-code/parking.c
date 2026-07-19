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

