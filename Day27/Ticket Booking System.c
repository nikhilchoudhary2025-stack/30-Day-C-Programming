#include <stdio.h>

struct Ticket {
    int ticketId;
    char passengerName[50];
    char destination[50];
    int seatNumber;
    float price;
};

int main() {
    int n;
    printf("Enter number of tickets to book: ");
    scanf("%d", &n);

    struct Ticket tickets[n];

    for (int i = 0; i < n; i++) {
        printf("\nBooking ticket %d:\n", i + 1);
        tickets[i].ticketId = i + 1;
        printf("Passenger Name: ");
        scanf("%s", tickets[i].passengerName);
        printf("Destination: ");
        scanf("%s", tickets[i].destination);
        printf("Seat Number: ");
        scanf("%d", &tickets[i].seatNumber);
        printf("Price: ");
        scanf("%f", &tickets[i].price);
    }

    printf("\n--- Booking Confirmation ---\n");
    float totalRevenue = 0;
    for (int i = 0; i < n; i++) {
        printf("Ticket ID: %d | Passenger: %s | Destination: %s | Seat: %d | Price: %.2f\n",
               tickets[i].ticketId,
               tickets[i].passengerName,
               tickets[i].destination,
               tickets[i].seatNumber,
               tickets[i].price);
        totalRevenue += tickets[i].price;
    }
    printf("Total Revenue: %.2f\n", totalRevenue);

    return 0;
}