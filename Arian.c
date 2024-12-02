
#include <string.h>
#include <time.h>

#define MAX_RENTERS 100
#define MAX_REQUESTS 100

typedef struct {
    int id;
    char name[50];
    float rentAmount;
    int isPaid;
} Renter;

typedef struct {
    int id;
    int renterId;
    char description[100];
    char status[20]; 
} MaintenanceRequest;

Renter renters[MAX_RENTERS];
MaintenanceRequest requests[MAX_REQUESTS];
int renterCount = 0;
int requestCount = 0;

void generateRentInvoices() {
    for (int i = 0; i < renterCount; i++) {
        printf("Invoice for Renter ID: %d, Name: %s, Amount: %.2f\n", 
               renters[i].id, renters[i].name, renters[i].rentAmount);
    }
}

void makePayment(int renterId) {
    for (int i = 0; i < renterCount; i++) {
        if (renters[i].id == renterId) {
            renters[i].isPaid = 1; 
            printf("Payment received from Renter ID: %d, Name: %s\n", 
                   renters[i].id, renters[i].name);
            return;
        }
    }
    printf("Renter ID not found.\n");
}

void sendAutomatedReminders() {
    for (int i = 0; i < renterCount; i++) {
        if (!renters[i].isPaid) {
            printf("Reminder: Rent is due for Renter ID: %d, Name: %s\n", 
                   renters[i].id, renters[i].name);
        }
    }
}

void submitMaintenanceRequest(int renterId, const char* description) {
    if (requestCount < MAX_REQUESTS) {
        requests[requestCount].id = requestCount + 1;
        requests[requestCount].renterId = renterId;
        strcpy(requests[requestCount].description, description);
        strcpy(requests[requestCount].status, "pending");
        requestCount++;
        printf("Maintenance request submitted for Renter ID: %d\n", renterId);
    } else {
        printf("Maximum maintenance requests reached.\n");
    }
}

void manageRequests() {
    for (int i = 0; i < requestCount; i++) {
        printf("Request ID: %d, Renter ID: %d, Description: %s, Status: %s\n", 
               requests[i].id, requests[i].renterId, 
               requests[i].description, requests[i].status);
    }
}

void updateRequestStatus(int requestId, const char* newStatus) {
    for (int i = 0; i < requestCount; i++) {
        if (requests[i].id == requestId) {
            strcpy(requests[i].status, newStatus);
            printf("Request ID: %d status updated to: %s\n", requestId, newStatus);
            return;
        }
    }
    printf("Request ID not found.\n");
}

int main() {
  
    renters[0] = (Renter){1, "Alice", 500.0, 0};
    renters[1] = (Renter){2, "Bob", 600.0, 0};
    renterCount = 2;
  
    generateRentInvoices();

    makePayment(1);

    sendAutomatedReminders();

    submitMaintenanceRequest(1, "Leaky faucet in kitchen.");

    manageRequests();

    updateRequestStatus(1, "in-progress");

    manageRequests();

    return 0;
}