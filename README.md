
# Text-Based Role-Playing Game
 
Authors:  [Justin Bollmann](https://github.com/hincky13), [Kirsten Go](https://github.com/gokirstengo), [Shaoyu Tu](https://github.com/Kevin20201)
 
 

## Project Description
In this game users can choose among different characters to play with. Characters are associated with different types of weapons and armors. At each step of the game, a narrative is presented and the user can select between different options (e.g. attack, run, access inventory, use a heal item, etc). 
 ## Why is this project important to us?
* This project is interesting because the field I want to go into involves a lot of group work and hands on software building. This will very much help me gain some sort of experience for my future career goals. (Justin)
* This project is important to me because I get to have more experience working with a team and also because I get to practice using different design patterns. I am also interested in seeing how the code behind video games works with our project idea. (Kirsten)
* This project is important to me because it gives me more exposure into developing projects while being a part of a team. This also allows me to get some practice putting my classroom knowledge into some real applications. (Shaoyu)
 ## What languages/tools/technologies are we planning to use? (This list may change over the course of the project)
* C++ - Programming language
* Valgrind - Tool to check for memory leaks
* CMake - Tool to compile our files
 ## What will be the input/output of your project?
* The input will be the user's choices throughout the game's storyline.
* The output will be changes in the character's stats (health, armor, damage, attack, etc.) as well as the continuation of the story.
 ## What are the two design patterns we will be using?
* We are using the Strategy and Abstract Factory design patterns.
* Strategy Pattern
  * The strategy pattern serves as an easy way to address the wide variety of objects in our project. A problem that we anticipate in our project is implementing the different attacks that each character would have. This problem would benefit from the Strategy pattern since every character type has a different attack. For example, every character would have an Attack data member. The Attack class would then have a virtual attack function that is defined by child classes.
* Abstract Factory Design Pattern
  * The problem we anticipate when implementing our project is seeing that there might be too many classes of specific items overlapping on similar characteristics that can be first generalized before implementation. Since many objects in our project will share common features, we can make our code more organized by using abstract classes as described by the abstract factory pattern. The design pattern leads to a good solution to the problem of having item categories because it provides an interface of a general family where the more defined item types can then inherit from it. The features of specific items can be easily implemented with more compressed code that is easy to look at when debugging as their common shared features will first be generalized in a main class.


## Strategy Pattern Class Diagram
Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 

![Screen Shot 2021-05-07 at 8 45 05 PM](https://user-images.githubusercontent.com/36804838/117525001-231bf000-af75-11eb-93ed-2beafe390db0.png)

## Abstract Factory Pattern Class Diagram
Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 

![Screen Shot 2021-05-07 at 8 47 44 PM](https://user-images.githubusercontent.com/36804838/117525179-dbe22f00-af75-11eb-9f84-96909d178dcc.png)


## Character Class Diagram
Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 

![Screen Shot 2021-05-07 at 9 00 14 PM](https://user-images.githubusercontent.com/36804838/117525463-45167200-af77-11eb-9042-75ab660edd83.png)

 
## Phase III
You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
* Before the meeting you should perform a sprint plan like you did in Phase II
* In the meeting with your TA you will discuss: 
- How effective your last sprint was (each member should talk about what they did)
- Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
- Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
- What tasks you are planning for this next sprint.

## Final deliverable
All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
Before the demo, you should do the following:
* Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
* Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
## Screenshots
Screenshots of the input/output after running your application
## Installation/Usage
Instructions on installing and running your application
## Testing
How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
