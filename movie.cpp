#include<iostream>
#include<string>
using namespace std;
class MovieTicket{
    private:
    string moviename;
    int seatNumber;
    float ticketPrice;
    bool isBooked;
    public:
    MovieTicket();//default
    MovieTicket(string mn,int seat,float cost);
    void bookTicket();
    void cancelTicket();
    void displayTicketDetails();
    float calculateTotalCost(int numberOfTickets);
};
// Default Constr.
MovieTicket::MovieTicket() {
    moviename = "Not Assigned";
    seatNumber = 0;
    ticketPrice = 200;
    isBooked = false;
}
// Parameterized Const.
MovieTicket::MovieTicket(string m, int s, float p) {
    moviename = m;
    seatNumber = s;
    ticketPrice = p;
    isBooked = false;
}
void MovieTicket::bookTicket() {
    if (!isBooked) {
        isBooked = true;
        cout << "Ticket booked successfully for " << moviename << endl;
    } else {
        cout << "Seat already booked!" << endl;
    }
}
void MovieTicket::cancelTicket() {
    if (isBooked) {
        isBooked = false;
        cout << "Ticket cancelled successfully." << endl;
    } else {
        cout << "No booking found to cancel." << endl;
    }
}
void MovieTicket::displayTicketDetails() {
    cout << "\nMovie Name: " << moviename << endl;
    cout << "Seat Number: " << seatNumber << endl;
    cout << "Ticket Price: " << ticketPrice << endl;

    if (isBooked)
        cout << "Status: Booked\n";
    else
        cout << "Status: Available\n";
}
float MovieTicket::calculateTotalCost(int numberOfTickets) {
    return ticketPrice * numberOfTickets;
}

int main() {

    // Creating objects
    MovieTicket t1("Hasee Toh Phasee", 12, 180);
    MovieTicket t2("Kerala Story", 15, 220);

    // Booking
    t1.bookTicket();
    t1.displayTicketDetails();

    // Cancellation
    t1.cancelTicket();
    t1.displayTicketDetails();

    // Second ticket
    t2.bookTicket();
    t2.displayTicketDetails();

    // Total cost
    cout << "\nTotal cost for 3 tickets: " 
         << t2.calculateTotalCost(3) << endl;

    return 0;
}

