# Parking-management-system-c

Project Overview

The Car Parking Management System is a console-based application developed in C Programming that automates parking slot allocation, vehicle entry and exit management, parking charge calculation, and record maintenance.

The system helps parking operators efficiently manage available parking spaces, track parked vehicles, generate parking receipts, and maintain historical records using file handling.

 # Objectives
- Automate parking slot allocation
- Maintain vehicle entry and exit records
- Calculate parking charges based on parking duration
- Track available and occupied parking slots
- Generate parking receipts
- Store data permanently using file handling
- Provide parking reports and revenue details

 # Features
# Vehicle Management
- Add new vehicle records
- Store vehicle number and owner details
- Assign parking slots automatically
- Track vehicle entry and exit time
- Search currently parked vehicles

 --- 
 # Parking Slot Management
- Automatic slot allocation
- Circular queue-based free slot management
- Real-time available slot tracking
- Slot reuse after vehicle exit
- Synchronization of slots after program restart

---

 # Billing System
- Calculates parking duration
- Generates automatic parking charges
### Parking Rates

| Vehicle Type | Charge Per Hour |
|--------------|----------------|
| Bike | Rs 20 |
| Car | Rs 50 |
| Bus | Rs 80 |
| Truck | Rs 100 |

---
## Reports

The system provides:

- Current parked vehicle list
- Parking status report
- Revenue report
- Available slot display
---

# Technologies Used

| Technology | Purpose |
|------------|---------|
| C Programming | Core development |
| Structures | Vehicle data management |
| Circular Queue | Parking slot allocation |
| File Handling | Permanent data storage |
| Time Library | Entry and exit time calculation |
| Linear Search | Vehicle searching |

---

 # Project Structure
## System Workflow

```mermaid
flowchart TD

A[START] --> B[Load Previous Records]

B --> C[Initialize Parking Slots]

C --> D[Display Main Menu]

D --> E{Choose Operation}

E --> F[Park Vehicle]
F --> G[Allocate Slot]
G --> H[Save Record]

E --> I[Exit Vehicle]
I --> J[Calculate Charges]
J --> K[Release Slot]

E --> L[Search Vehicle]

E --> M[Display Reports]

H --> N[Save Data]
K --> N
L --> N
M --> N

N --> O[EXIT]

```

## Modules
# 1. Main Module

Responsible for:

User interaction
Menu display
Calling required functions
# 2. Parking Module

Handles:
 Vehicle entry
 Vehicle exit
 Searching
 Charge calculation
 Parking reports
 
# 3. Queue Module

Implements:
 Circular Queue

Used for:
 Managing free parking slots
 Efficient slot allocation
 
# 4. File Handling Module

Responsible for:

- Saving records
- Loading previous data
- Maintaining persistence

Sample Operations
Park Vehicle

Input:

Vehicle Number: UP16XY2003
Owner Name: Amit
Vehicle Type: Bike

Output:

Parking ID : 1004
Slot Number : 1
Entry Time : 19-07-2026 22:20:52
Vehicle Exit

Output:

# Parking Receipt

Receipt Number : R00001
Vehicle Number : UP16XY2003
Parking Duration : 2 Hours
Parking Charge : Rs 40
# Output Screenshots

Screenshots included in this repository demonstrate:

# Main dashboard
Vehicle parking ticket
Current parked vehicles
Parking status
Exit receipt
Revenue report
 How to Run
 
# Requirements
C Compiler
GCC recommended
IDE/Text Editor:
VS Code
CodeBlocks
Dev-C++

# Compilation

Using GCC:

gcc main.c parking.c queue.c file.c -o parking
Execution

Windows:

parking.exe

Linux:

./parking

---

# Challenges Faced
- Implementing circular queue correctly
- Maintaining slot consistency after restart
- Handling file storage and retrieval
- Managing vehicle history
- Calculating parking duration accurately

# Future Enhancements
- Graphical User Interface (GUI)
- Database integration
- Online parking reservation
- QR-based parking tickets
- Multi-floor parking support
- User authentication
- Mobile application

---

 # Learning Outcomes
Through this project, we learned:

- Modular programming in C
- Data structure implementation
- File handling techniques
- Problem-solving using programming logic
- Designing a real-world management system

---

# Conclusion

The Car Parking Management System successfully provides an automated solution for managing parking operations. It reduces manual effort, improves accuracy, and demonstrates the practical application of C programming concepts in solving real-world problems.
