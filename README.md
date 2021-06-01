
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
We are using the Strategy pattern to implement CharacterAttack and CharacterDefense. MeleeAttack, MagicAttack, and RangedAttack all inherit from CharacterAttack. Shield and Armor inherit from CharacterDefense. Each attack and defense will have different strengths. The Character class will be the composition for both CharacterAttack and CharacterDefense.

![Screen Shot 2021-06-01 at 6 21 40 AM](https://user-images.githubusercontent.com/36804838/120331713-ea84e300-c2a2-11eb-952e-14ed82d72cfd.png)



## Abstract Factory Pattern Class Diagram
We are using the Abstract Factory pattern to represent characters in the game. We will have a CharacterFactory with MeleeFactory, RangedFactory, MagicFactory, etc inheriting from it. Each character type will have a predetermined attack and defense.

![Screen Shot 2021-06-01 at 6 29 29 AM](https://user-images.githubusercontent.com/36804838/120331785-fcff1c80-c2a2-11eb-8909-c6af22e4274f.png)

 
## Screenshots
![image](https://user-images.githubusercontent.com/59675025/120368328-c89d5780-c2c6-11eb-8d2c-2ae30940c714.png)
![image](https://user-images.githubusercontent.com/59675025/120368506-00a49a80-c2c7-11eb-9f90-2c64d6d94db9.png)
## Installation/Usage
1. Fork this repository and use git clone --recursive to download the repository on your computer. 
2. Use Terminal to open the folder containing the project.
3. Enter in cmake3 . (include the space and the period), then enter make, and finally enter ./game
4. Enjoy the game!
## Testing
We are testing our project with Google Test. We have a test.cpp file that will run our test cases. Here is an example of successful test cases that we wrote for MagicFactory. We tested every class that we wrote.

![image](https://user-images.githubusercontent.com/59675025/120356266-009d9e00-c2b9-11eb-8faf-1228f610e13c.png)



