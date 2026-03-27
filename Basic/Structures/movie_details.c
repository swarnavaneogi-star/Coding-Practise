#include <stdio.h>

typedef struct movie
{
    char movie_name[100];
    float movie_rating;
    int release_year;
    float boxoffice_collection;
} movie;

int main()
{
    int n;
    printf("Enter the number of movies: ");
    scanf("%d", &n);

    movie mov[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter the details of movie %d\n", i + 1);

        printf("Enter the name -> ");
        scanf(" %[^\n]", mov[i].movie_name);

        printf("Enter the rating out of 10 -> ");
        scanf("%f", &mov[i].movie_rating);

        printf("Enter the release year -> ");
        scanf("%d", &mov[i].release_year);

        printf("Enter the box office collection in crores -> ");
        scanf("%f", &mov[i].boxoffice_collection);
    }

    float max = mov[0].movie_rating;
    int max_index = 0;

    for(int i = 1; i < n; i++)
    {
        if(mov[i].movie_rating > max)
        {
            max = mov[i].movie_rating;
            max_index = i;
        }
    }

    printf("\nPrinting movie with highest rating:\n");
    printf("%-25s %-10s %-15s %-20s\n", "Name", "Rating", "Release Year", "Box Office");

    printf("%-25s %-10.2f %-15d %-20.2f\n",
           mov[max_index].movie_name,
           mov[max_index].movie_rating,
           mov[max_index].release_year,
           mov[max_index].boxoffice_collection);

    return 0;
}