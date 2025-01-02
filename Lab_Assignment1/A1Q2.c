/* 1.2 Metro City Planners proposes that a community conserve its water supply by replacing all the
 community’s toilets with low-flush models that use only 2 liters per flush. Assume that there
 is about 1 toilet for every 3 persons, that existing toilets use an average of 15 liters per flush,
 that a toilet is flushed on average 14 times per day, and that the cost to install each new toilet
 is $150. Write a program that would estimate the magnitude (liters/day) of the water saved
 and the total cost to install new toilets based on the community’s population*/

 #include <stdio.h>

 #define TOILETS_PER_PERSON 1.0/3.0
 #define EXISTING_FLUSH_VOLUME 15.0
 #define NEW_FLUSH_VOLUME 2.0
 #define FLUSHES_PER_DAY 14.0
 #define COST_PER_TOILET 150.0

 int main() {
    int population;
    double num_toilets,existing_water,new_water,water_saved,total_cost;

    printf("Water conservation program\n");
    printf("Enter the population of the community: ");
    scanf("%d",&population);

    num_toilets = population * TOILETS_PER_PERSON;
    existing_water = num_toilets * EXISTING_FLUSH_VOLUME * FLUSHES_PER_DAY;
    new_water = num_toilets * NEW_FLUSH_VOLUME * FLUSHES_PER_DAY;
    water_saved = existing_water - new_water;
    total_cost = num_toilets * COST_PER_TOILET;

    printf("Magnitude of water saved: %.2f liters/day\n", water_saved);
    printf("Total cost to install new toilets: $%.2f\n", total_cost);
 }