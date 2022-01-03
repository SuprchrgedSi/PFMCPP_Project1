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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: cat
//  action 1: the cat meows
cat.meows();
//  action 2:the cat cleans itself
cat.cleanBody();
//  action 3: the cat purrs
cat.purr();
//  2)
//  Noun: truck
//  action 1: The truck make sound through the horn
truck.honkHorn();
//  action 2: the truck applies engine power to the wheels
truck.applyPowerToWheels();
//  action 3:the truck changes the gear ration in the automatic transimssion
truck.changeGear();
//  3)
//  Noun:Basketball Player
//  action 1: the player shoots a jump shot
bballPlayer.shootsJumper();
//  action 2:The player attempts to block a shot
bballPlayer.blockShot();
//  action 3:  The player celebrates
bballPlayer.celebrates();
//  4)
//  Noun: Baby
//  action 1: The baby eats
baby.eat();
//  action 2: The baby sleeps
baby.sleep();
//  action 3: the baby poops
baby.poop();
//  5)
//  Noun: Cell phone
//  action 1: Cell phone makes call
cellPhone.call();
//  action 2: Cell phone display text message
cellPhone.displayTextMessage();
//  action 3: Cell phone unlocks screen
cellPhone.unlockScreen();
//  6)
//  Noun: Keyboard
//  action 1: Keyboard transmits character
keyboard.transmitCharacter();
//  action 2: Keyboard toggles Caps Lock indicator
keyboard.toggleCapsLockLED();
//  action 3: Keyboard connects to PC
keyboard.connectToPC();
//  7)
//  Noun:Vacuum Cleanner
//  action 1: Vacuum cleaner engages suction motor
vacuumCleaner.engageMotor();
//  action 2: Vacuum Cleaner releases hose
vacuumCleaner.releaseHose();
//  action 3: Vacuum cleaner engages spining brush
vacuumCleaner.engageBrush();

//  8)
//  Noun: Amplifier
//  action 1: Amplifier enables output
amplifier.enableOutput();
//  action 2: amplifier modifies volume
amplifier.modifyVolume();
//  action 3: amplifier adjusts treble control gain
amplifier.modifyTrebleGain();
//  9)
//  Noun: Television
//  action 1: Televsion changes channel
tv.changeChannel();
//  action 2: TV adjusts contrast
tv.modifyContrast();
//  action 3: TV change input source
tv.changeInputSource();
//  10)
//  Noun: Oven
//  action 1: Oven adjusts temperature
oven.adjustTemperature();
//  action 2: Oven enables broiler
oven.enableBroiler();
//  action 3: Oven starts timer
oven.startTimer();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
