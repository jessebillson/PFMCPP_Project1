#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       toilet
//  action 1:   the toilet flushes 
toilet.flush();
//  action 2:   the toilet clogs
toilet.clog();
//  action 3:   the toilet overflows
toilet.overflow();

//  2)
//  Noun:    dog
//  action 1:    the dog sleeps on the couch
dog.sleepOnCouch();
//  action 2:    the dog eats lunch
dog.eatLunch();
//  action 3:    the dog bites children
dog.bitesChildren();

//  3)
//  Noun:    truck
//  action 1:    the truck tows a trailer
truck.towsATrailer();
//  action 2:    the truck breaks down
truck.breaksDown();
//  action 3:    the truck is a tall truck
truck.rideHeight();


//  4)
//  Noun:    neighbor
//  action 1:    the neighbor mows the lawn
neighbor.mowsLawn();
//  action 2:    the neighbor gets drunk
neighbor.getsDrunk();
//  action 3:    the neighbor yells at his wife
neighbor.yellsAtWife();

//  5)
//  Noun:    weather
//  action 1:    clear sky
weather.clearSky();
//  action 2:    the weather has had foggy nights
weather.foggyNights();
//  action 3:    the days are cold
weather.coldDays();
//  6)
//  Noun:    guitar
//  action 1:    you can strum the guitar
guitar.strum();
//  action 2:    you can do hammer ons
guitar.hammerOn();
//  action 3:    you can distort the guitar with an amp
guitar.ampDistort();
//  7)    
//  Noun:    gamer
//  action 1:    the gamer loses the game
gamer.gameOver();
//  action 2:    the gamer wins the game
gamer.endCredits();
//  action 3:    the gamer runs out of time
gamer.timeOut();

//  8)    
//  Noun:    gardener
//  action 1:    the gardener cut the tree down
gardener.cutDownTree();
//  action 2:    the gardener got bit by a snake
gardener.snakeAttack();
//  action 3:    the gardener got lost on the way over again
gardener.timesLost();
//  9)
//  Noun:    drummer
//  action 1:    my drummer is going bald
drummer.baldAmount();
//  action 2:    my drummer has gained a lot of weight
drummer.weightAmount();
//  action 3:    my drummer is on antidepressants
drummer.sanityLevel();
//  10)
//  Noun:    officer
//  action 1:    officer shoots victims arm
officer.shootVictimArm();
//  action 2:    officer got shot in the leg
officer.LegInjury();
//  action 3:    officer was fired after incident
officer.firedAfterIncident();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
