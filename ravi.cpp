#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

// Define a struct to represent a movie
typedef struct
{
    char name[50];
    int seatsAvailable;
    float ticketPrice;
} Movie;

// Declare an array of movies
Movie movies[10];

// Declare the number of movies in the array
int numMovies = 0;

// Function to write the movie data to a file
void writeMoviesToFile(Movie movies[], int numMovies)
{
    // // Open the file in write mode
    FILE *fp = fopen("movies.txt", "a");

    // Write the movie data to the file, one movie per line
    for (int i = 0; i < numMovies; i++)
    {
        fprintf(fp, "%s,%d,%.2f\n", movies[i].name, movies[i].seatsAvailable, movies[i].ticketPrice);
    }

    // Close the file
    fclose(fp);
}

// Function to read the movie data from a file
void readMoviesFromFile(Movie movies[], int *numMovies)
{
    // Open the file in read mode
    FILE *fp = fopen("movies.txt", "w");

    // Read the movie data from the file, one movie per line
    while (!feof(fp))
    {
        Movie movie;
        fscanf(fp, "%s,%d,%2f\n", movie.name, &movie.seatsAvailable, &movie.ticketPrice);

        // Add the movie to the array
        movies[*numMovies] = movie;
        (*numMovies)++;
    }

    // Close the file
    fclose(fp);
}

// Display the main menu
void displayMenu()
{
    printf("\nMovie Booking System\n");
    printf("1. Book a ticket\n");
    printf("2. Check available seats\n");
    printf("3. Display movie details\n");
    printf("4. Display all movies\n");
    printf("5. Add a new movie\n");
    printf("6. Delete a movie\n");
    printf("7. View booked tickets\n");
    printf("8. Exit\n");
}

// Book a ticket for a given movie
void bookTicket(Movie movies[], int numMovies)
{
    // Get the name of the movie from the user
    char movieName[50];
    printf("Enter movie name: ");
    scanf("%s", movieName);

    // Find the movie in the array
    int found = 0;
    for (int i = 0; i < numMovies; i++)
    {
        if (strcmp(movies[i].name, movieName) == 0)
        {
            if (movies[i].seatsAvailable > 0)
            {
                printf("How many tickets do you want to book? ");
                int numTickets;
                scanf("%d", &numTickets);

                if (numTickets <= movies[i].seatsAvailable)
                {
                    movies[i].seatsAvailable -= numTickets;
                    printf("Tickets booked successfully!\n");
                }
                else
                {
                    printf("Not enough seats available.\n");
                }
            }
            else
            {
                printf("No seats available for this movie.\n");
            }
            break;
        }
        else
        {
            printf("Movie not found.\n");
        }
    }
}

// Check the available seats for a given movie
void checkAvailableSeats(Movie movies[], int numMovies)
{
    // Get the name of the movie from the user
    char movieName[50];
    printf("Enter movie name: ");
    scanf("%s", movieName);

    // Find the movie in the array
    int found = 0;
    for (int i = 0; i < numMovies; i++)
    {
        if (strcmp(movies[i].name, movieName) == 0)
        {
            printf("Available seats for %s: %d\n", movies[i].name, movies[i].seatsAvailable);
            break;
        }
        else
        {
            printf("Movie not found.\n");
        }
    }
}

// Display the details of a given movie
void displayMovieDetails(Movie movies[], int numMovies)
{
    // Get the name of the movie from the user
    char movieName[50];
    printf("Enter movie name: ");
    scanf("%s", movieName);

    // Find the movie in the array
    int found = 0;
    for (int i = 0; i < numMovies; i++)
    {
        if (strcmp(movies[i].name, movieName) == 0)
        {
            printf("Movie Name: %s\n", movies[i].name);
            printf("Available Seats: %d\n", movies[i].seatsAvailable);
            printf("Ticket Price: $%.2f\n", movies[i].ticketPrice);
            break;
        }
        else
        {
            printf("Movie not found.\n");
        }
    }
}

// Display all the movies in the array
void displayAllMovies(Movie movies[], int numMovies)
{

    FILE *ptr;
    char ch;

    // Opening file in reading mode
    ptr = fopen("movies.txt", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
    }

    printf("content of this file are \n");

    // Printing what is written in file
    // character by character using loop.
    while (ch != EOF)
    {
        ch = fgetc(ptr);
        if (isalpha(ch))
            printf("%c", ch);
        if (ch == '.')
        {
            printf("\n");
        }

        // Checking if character is not EOF.
        // If it is EOF stop reading.
    }
    // Closing the file
    fclose(ptr);
}

// Add a new movie to the array
void addMovie(Movie movies[], int *numMovies)
{
    // Get the movie details from the user
    char movieName[50];
    int seatsAvailable;
    float ticketPrice;

    printf("Enter movie name: ");
    scanf("%s", movieName);

    printf("Enter number of seats available: ");
    scanf("%d", &seatsAvailable);

    printf("Enter ticket price: ");
    scanf("%f", &ticketPrice);

    // Add the movie to the array
    strcpy(movies[*numMovies].name, movieName);
    movies[*numMovies].seatsAvailable = seatsAvailable;
    movies[*numMovies].ticketPrice = ticketPrice;

    // Increment the number of movies
    (*numMovies)++;
}

// Delete a movie from the array
void deleteMovie(Movie movies[], int *numMovies)
{
    // Get the name of the movie to be deleted from the user
    char movieName[50];
    printf("Enter movie name to be deleted: ");
    scanf("%s", movieName);

    // Find the movie in the array
    int found = 0;
    int index = -1;
    for (int i = 0; i < *numMovies; i++)
    {
        if (strcmp(movies[i].name, movieName) == 0)
        {
            found = 1;
            index = i;
            break;
        }
    }

    // If the movie is found, delete it from the array
    if (found)
    {
        for (int i = index; i < *numMovies - 1; i++)
        {
            movies[i] = movies[i + 1];
        }

        // Decrement the number of movies
        (*numMovies)--;
    }
    else
    {
        printf("Movie not found.\n");
    }
}

// View booked tickets
void viewBookedTickets(Movie movies[], int numMovies)
{
    // Display all the movies with the number of booked tickets
    for (int i = 0; i < numMovies; i++)
    {
        printf("%s: %d\n", movies[i].name, movies[i].seatsAvailable);
    }
}

// Main function
int main()
{
    // Read the movie data from the file
    // readMoviesFromFile(movies, &numMovies);
    int choice;
    do
    {
        // Display the main menu
        displayMenu();

        // Get the user's choice
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the selected operation
        switch (choice)
        {
        case 1:
            bookTicket(movies, numMovies);
            break;

        case 2:
            checkAvailableSeats(movies, numMovies);
            break;

        case 3:
            displayMovieDetails(movies, numMovies);
            break;

        case 4:
            displayAllMovies(movies, numMovies);
            break;

        case 5:
            addMovie(movies, &numMovies);
            writeMoviesToFile(movies, numMovies);
            break;

        case 6:
            deleteMovie(movies, &numMovies);
            break;

        case 7:
            viewBookedTickets(movies, numMovies);
            break;

        case 8:
            // Write the movie data back to the file

            exit(0);
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 8);

    return 0;
}