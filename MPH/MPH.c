// Name: Thecanniestbadge
// Date: 10/01/2023
// Program: MPH
// Description: This program gets the miles driven and how long it took and determines how fast the user were going.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to convert minutes to hours
double convert_minutes_to_hours(int minutes) {
    return (double)minutes / 60.0;
}

// Function to calculate miles per hour
double calculate_mph(double miles, double hours) {
    return miles / hours;
}

// Function to get and validate miles
double get_miles() {
    double miles;
    printf("Enter the number of miles driven: ");
    scanf("%lf", &miles);

    while (miles <= 0) {
        printf("    The miles driven must be a positive number.\n");
        printf("    Please re-enter the number of miles driven: ");
        scanf("%lf", &miles);
    }

    return miles;
}

// Function to get and validate minutes
int get_minutes() {
    int minutes;
    printf("Enter the number of minutes that it took to drive the miles: ");
    scanf("%d", &minutes);

    while (minutes <= 0) {
        printf("    The minutes driven must be a positive number.\n");
        printf("    Please re-enter the number of minutes that it took to drive the miles: ");
        scanf("%d", &minutes);
    }

    return minutes;
}

// Function to display the result
void display_result(double miles, int minutes, double mph) {
    printf("\n"); // Blank line
    printf("Based on a trip of %.1lf miles that took %d minutes,\n", miles, minutes);
    printf("your speed was %.0lf MPH.\n", mph);
    printf("\n"); // Blank line
}

int main(void) {
    // *** INPUT ***
    // Here is setting up the variable and grabbing the inputs from both functions get_miles and get_minutes
    double miles = get_miles();
    int minutes = get_minutes();

    // *** PROCESSING ***
    // Convert minutes to hours
    // Just for organization, I have set up the variable and I have it grabbing the output for minutes and converting it to hours
    double hours = convert_minutes_to_hours(minutes);

    // Calculate miles per hour
    // Here, I have it getting the miles and hours and calculating it in the calculate_mph function
    double mph = calculate_mph(miles, hours);

    // *** OUTPUT ***
    // Using the function display_result, it's grabbing the output and displaying it
    display_result(miles, minutes, mph);

    return 0;
} // end main()



