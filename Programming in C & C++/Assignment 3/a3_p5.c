/*
CH-230-A
a3 p3.5[c]
Sakar Gopal Gurubacharya
s.gurubacharya@jacobs-university.de
*/

#include <stdio.h>

int main (){

    char c;
    int n;

    //Sum declared here as it is used in two places
    double globalsum = 0;

    double averagetemp;
    
    printf("Enter either 's' , 'p' , 't' or any other character: ");
    scanf("%c", &c);

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    //Limit the array size to 100
    while (n > 100){

        printf ("Very high, you'll be tired. Please enter below 100: ");
        scanf ("%d", &n);

    }

    double celsius[n]; 

    //Entering temp in the array
    printf("Enter %d temperatures in the array:\n", n);

    for(int id=0; id<n; id++){

        scanf("%lf", &celsius[id]);

    }

    /*Performing sum before switch as it is used in two places
    inside switch*/
    for(int i=0; i < n ; i++){

        globalsum += celsius[i];
        
    }

    switch(c){


        case 's':

        printf("The sum of all elements in the array is: %lf\n", globalsum);

        break;



        case 'p':

        printf("The list of all temperatures in Celsius: \n");

        for(int j = 0; j < n; j++){

            printf("%lf°C\n", celsius[j]);

        }

        break;



        case 't':

        printf("The list of all temperatures in Fahrenheit: \n");

        for(int k = 0; k < n; k++){

            double fahrenheit = ((9 * celsius[k])/5) + 32;

             printf("%lf°F\n", fahrenheit);
        
        }

        break;



        //default takes other characters
        default:

        averagetemp = globalsum/n;
        printf("The average of all temperatures in Celsuis is %lf°C\n", averagetemp);

        break;

    }

}