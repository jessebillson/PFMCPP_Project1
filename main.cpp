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
//  action 3:    the truck goes in reverse
truck.reverseDirection();


//  4)
//  Noun:    neighbor
//  action 1:    the neighbor mows the lawn
neighbor.mowsLawn();
//  action 2:    the neighbor gets drunk
neighbor.getsDrunk();
//  action 3:    the neighbor yells at his wife
neighbor.yellsAtWife();

//  5)
//  Noun:    television remote
//  action 1:    remote used to turn on the television
television.remoteTurnOn();
//  action 2:    remote used to change the channel
television.remoteChangeChannel();
//  action 3:    remote used to turn the volume up
television.remoteVolumeUp();
//  6)
//  Noun:    guitar player
//  action 1:    guitar strings needs to be tuned
guitar.playerTuneStrings();
//  action 2:    guitar can be finger picked
guitar.playerFingerPick();
//  action 3:    guitar strings can be changed
guitar.playerChangeStrings();
//  7)    
//  Noun:    gamer
//  action 1:    the gamer loses the game
gamer.gameOver();
//  action 2:    the gamer presses start to begin the game
gamer.pressStartBeginGame();
//  action 3:    the gamer runs out of time
gamer.timeOut();

//  8)    
//  Noun:    gardener
//  action 1:    the gardener uses shovel to dig hole
gardener.digWithShovel();
//  action 2:    the gardener mows lawn
gardener.mowsLawn();
//  action 3:    the gardener rakes leaves
gardener.rakesLeaves();
//  9)
//  Noun:    drummer
//  action 1:    drummer hits cymbal
drummer.hitCymbal();
//  action 2:    drummer hits snare
drummer.hitSnare();
//  action 3:    drummer kicks bass drum
drummer.hitBassDrum();
//  10)
//  Noun:    officer
//  action 1:    officer writes a citation
officer.writeCitation();
//  action 2:    officer handcuff suspect
officer.handcuffSuspect();
//  action 3:    officer checks suspect license plate
officer.checkLicensePlate();

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
