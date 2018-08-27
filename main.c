/*
 * This program is for greeting the user.
 * The greeting will depend on the hour of the day.
 * First the program will ask the user to introduce a
 * number which represents the hour of the day
 * without minutes nor seconds.
 *
 * Author: Soraya Maqueda
 * Date: 24/08/2018
 * e-mail: soraya_maqueda@hotmail.com
 * */
#include <stdio.h>

int main () {
    //Statement of variables
    int ticktack; //This names the number that the user introduces as the variable with the name hr.
    double greeting; //This is the variable in which the value of the first one is going to analyzed to determine
    //wether it is morning, afternoon or night.

    //First we will need to explain the user how the program works.
    printf("What time is it? Note: Please use a 24 hour format and do not include minutes.");
    scanf ("%lf", &ticktack); //This registers the value given to the program and directs it to be saved at the variable ticktack.

    //Here the analysis of the integer that was submitted takes place.
    if (2 < ticktack < 12); { //If the value that the users submits is in between the range 2-12, this message will come forward.
        scanf ("%lf", &greeting);
        printf ("Good morning!");
    }
    if (12 < ticktack < 19 ); { //If the value that the users submits is in between the range 12-19, this message will come forward.
        scanf ("%lf", &greeting);
        printf ("Good afternoon.");
    }
    if (19 < ticktack < 23); { //If the value that the users submits is in between the range 19-23, this message will come forward.
        scanf ("%lf", &greeting);
        printf ("Good evening.");
    }
    if (ticktack > 2); { //If the value that the users submits is less than 2, then the program will just tell him goodnight and shut down.
        scanf ("%lf", &greeting);
        printf ("Good night.");
    }
}