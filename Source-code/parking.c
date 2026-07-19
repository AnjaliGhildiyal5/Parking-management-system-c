#include <stdio.h>
#include <string.h>
#include <time.h>

#include "parking.h"
#include "queue.h"

//global variables(step 2)
Vehicle vehicles[MAX_VEHICLES];

int vehicleCount = 0;

int nextParkingID = 1001;

double totalRevenue = 0;

int totalVehiclesServed = 0;
int nextReceipt = 1;

Queue freeSlots;

//step3

void initializeParking()
{
    initializeQueue(&freeSlots);

    loadRecords();
}

//step 4
int generateParkingID()
{
    return nextParkingID++;
}
int generateReceiptNo()
{
    return nextReceipt++;
}


//step5
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

void displayVehicleDetails(int index)
{
    printf("\n================================================");
    printf("\n              VEHICLE DETAILS");
    printf("\n================================================\n");

    printf("Parking ID      : %d\n",
           vehicles[index].parkingID);

    printf("Vehicle Number  : %s\n",
           vehicles[index].vehicleNumber);

    printf("Owner Name      : %s\n",
           vehicles[index].ownerName);

    printf("Vehicle Type    : %s\n",
           getVehicleType(vehicles[index].type));

    printf("Parking Slot    : %d\n",
           vehicles[index].slotNumber);

    printf("Entry Time      : ");

    displayCurrentTime(vehicles[index].entryTime);

    printf("\n");

    if(vehicles[index].isParked)
    {
        printf("Status          : Currently Parked\n");
    }
    else
    {
        printf("Status          : Vehicle Exited\n");

        printf("Exit Time       : ");

        displayCurrentTime(vehicles[index].exitTime);

        printf("\n");

        printf("Charge Paid     : Rs %.2lf\n",
               vehicles[index].parkingCharge);
    }

    printf("================================================\n");
}

//step6 crrent time
void displayCurrentTime(time_t t)
{
    struct tm *timeInfo;

    timeInfo = localtime(&t);

    printf("%02d-%02d-%04d %02d:%02d:%02d",
            timeInfo->tm_mday,
            timeInfo->tm_mon + 1,
            timeInfo->tm_year + 1900,
            timeInfo->tm_hour,
            timeInfo->tm_min,
            timeInfo->tm_sec);
}

