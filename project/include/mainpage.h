/*! \mainpage CSCI 3081 Delivery Simulation project
*
* \section dev Developer Documentation
*
* 1. Navigate to the project/ folder in the repository
* 2. Compile the project with make
* 3. Run the project with ./bin/run.sh
* 4. Go to http://127.0.0.1:8081/
*
* 
* \section team_docs Team Documentation
*
* Roles:
*
* Development Lead    | Noah \n
* Scheduler           | Erik \n
* Reporter            | Nick \n
* Project Manager     | Conor \n
*\n
* \section team_documentation Iteration 3 Team Documentation
*
* 4/25/21
* - Discussed what to implement and 
* 4/27/20
* - Implemented color change for the drone together
* 4/30/21
* - Wrapped iter 3 documentation and testing
*
* \section color_change Delivery Agent Color Change
*
* For Iteration Three, we decided to implement the color change feature for delivery entities where the color of the entity corresponds to the entity’s battery level. We considered multiple approaches for this and decided to utilize a brute force approach-- if the battery was between 75% and 100% full, for example, the delivery entity would be assigned the color green. To do this, we created a new method in the delivery_agent class named ChangeColor(). This method, which took a pointer to an observer as a parameter, was called at the beginning of the Update() method in order to check the delivery agent’s battery level and change the color accordingly. Within our ChangeColor() method, we check if the battery level has decreased enough to change to a new color; if it has, we update the color and then notify all the observers passed in of the change. This was the most direct approach for our enhancement, but there are several other approaches-- most notably the decorator pattern-- we could have used to implement this functionality as well. If we had used the decorator pattern, the feature could be turned on and off at runtime, making our simulation more customizable. In addition, the decorator pattern would have also helped our program conform to the single responsibility principle; the color change feature would be handled by a separate class rather than within our delivery agent class. With the separation of classes, this would have also closed our delivery agent class to change and created the potential for expansion within our program.
* 
* \image html /decorator.jpeg "Example decorator pattern" width = 900 cm
*
*
* \image html /final_uml.png "Final UML" width = 900 cm
*/
