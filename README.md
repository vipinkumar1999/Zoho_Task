# Taxi Booking

## QUESTION 
#### A call taxi operator has a fleet of "n" cars. For simplicity take the count as 5 but the program should work for any number of Taxis. (Let their names be identified as Taxi-1, Taxi-2.... Taxi-n) 
* There are only 5 points in the 
* city for pick-up / drop. Let the points be named A, B, C, D & E.
* All the points are in a straight line & the distance between the points are same say 15kms
* Time taken for travel will be 15 minutes between each point. 
* Charges for each travel will be calculated as Rs 50 for the first 5 kms and then Rs 10 for subsequent kms of travel.
* During Booking, the following information is given: The Starting point, Destination point & Start time. After dropping customer, the taxi waits there for next customer allotment. Each customer is identified uniquely by a Cust-ID
* Write a program that does the following: During Booking, find out the taxi which will be free at the specified time & which will be nearest to his location and allot it.Assume all Taxis are at Point A initially.
* Wait for next set of Inputs once a taxi is allotted
 
#### Allotment Criteria 
1. Taxis available on the same location given preference first

2. If more than one taxi present on the same location, preference given to the taxi which

3. earned least during the day

#### Questions:

1. Write a function to handle booking.

2. Write a function that can display travel history of any given call taxi. Travel history should display details like Customer ID, From, To, Pickup Time, Drop Time, Amount, charges etc. 


 #### Description 

This is a program written in C language which has multiple functions to handle Taxi Booking and To display the History of booking Taxi wise. The detailed description of the functions is mentioned below.

#### Function Description 

1. Distance : This function calculates the Distance between two given points.

2. Taxiprint : This function prints the alloted taxi for respective customer. 

3. Display : This function displays the History of the Respective Taxi. History includes Customer ID, From, To, Pickup Time, Drop Time, Amount, Charges, Booking ID.

4. Main function : This function handles the entire Taxi Booking process. This function uses two structures. 
 Structure 1 : Handles the details of all the taxis.
 Structure 2 : Handles all the details regarding Bookings.


 #### Program file Description 

 **Zoho_taxi_automatic_input.c** : Gets input for the program from a text file.

 **Zoho_taxi_custom_input.c** : Gets input from user at runtime.


#### Output Description 
A choice for the user to select what He/She wants to see is displayed.
1. Booking   2. Travel History    3. Exit 

Once user selects the choice, the Respective details is displayed. 

#### Requirements 

Dev C++
