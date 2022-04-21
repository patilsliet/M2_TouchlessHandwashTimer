# EMBEDDED PROJECT

## M2_Embedded_Touchless Handwash Timer

# BADGES

## BADGES

![codiga](https://api.codiga.io/project/30224/score/svg)

![codiga](https://api.codiga.io/project/30224/status/svg)

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/8a7e1b29cea94930a1105e5238f4289e)](https://www.codacy.com/gh/Manakshni/M2_Embedded_Touchless-Handwash-Timer/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Manakshni/M2_Embedded_Touchless-Handwash-Timer&amp;utm_campaign=Badge_Grade)

[![Code Quality - Static Code - Cppcheck](https://github.com/Manakshni/M2_Embedded_Touchless-Handwash-Timer/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/Manakshni/M2_Embedded_Touchless-Handwash-Timer/actions/workflows/c-cpp.yml)

[![Contribution Check - Git Inspector](https://github.com/Manakshni/M2_Embedded_Touchless-Handwash-Timer/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Manakshni/M2_Embedded_Touchless-Handwash-Timer/actions/workflows/gitinspector.yml)

# 1_Requirements

## INTRODUCTION

This project is about Touchless Handwashing Method, Regular Handwashing and use of hand washing liquid is the only way to remove the bacteria and viruses from our hand.
This process is to count the minimum time recommended by the health authorities that we should wash our hands. The Hands should close atleast 5cm to the sensor. The device makes a sound and starts count. After 20 seconds the device makes a sound and wait for the another activation. The device is intended to help us in two ways:It blinks for 20 seconds, to remind us for how long we should wash.It measures the actual time we spent washing our hands, to help us keep up the habit. Coming to sensor side, The ultrasonic sensor uses ultrasonic sound waves to detect the object. The transmitter of the sensor transmits ultrasonic waves and the receiver of the module receives those ultrasonic waves. Ultrasonic sensors can measure the distance to a wide range of objects regardless of shape, color or surface texture. They are also able to measure an approaching or resending object. By using “non-contact” ultrasonic sensors, distances can be measured without damage to the object. They’re easy to use and, in many cases, can be used in place of other traditional sensors when the environmental conditions make traditional sensors unusable.Migatron ultrasonic sensors can detect the distances to a variety of objects ranging from small spheres to large rolls of steel, and from bulk material on a conveyor belt to the liquid level in a storage tank and countless other distance measurements applications that need an ultrasonic sensor to get the job done. Ultrasonic distance measurement sensors are used in a wide array of industries like petroleum, chemical and manufacturing. Some examples of industry uses are roll diameter (either wind or unwind), bulk material conveyors and hopper/feeder level control.Hand washing is one of the most widely recommended actions that everyone can take to help reduce the spread of the virus, so we designed a device to help washing hands.

## Advantages

             *Touchless technology can help prevent cross-contamination.
             
             * Breaks the handwashing process into 3 simple steps so it can easily be understood by all ages and abilities.
             
             * The Time Timer WASH helps keep our kids and ourselves safe with a touchless,
             water-resistant visual timer for handwashing. 
             
## Disadvantages

             *Older people who aren’t familiar with Touchless faucets can sometimes be confused by their operation.
             
             *Cheaper touchless taps that use inferior parts can present all sorts of problems.
             
## Features

             Total 20 second duration.
             Touchless/IR operation.
             Easy to see LCD light-up disk.
             Water Resistant.
             Included suction cup can be placed on bottom, on back, or WASH can be used without touching.
             Beep alerts at each step optional.
             Can access for 24/7 and Easy to operate.
            
# SWOT Analysis

## Strength

             >Require less time than hand washing.
             >Act quickly to kill microorganisms on hands.
             >Are more accessible than sinks.
             >Reduce bacterial counts on hands
             >Do not promote antimicrobial resistance.
             >Rre less irritating to skin than soap and water.
             >some can even improve condition of skin.
             
## Weakness
             
             Circuit may get damage.
             Needs Power supply frequently.
             Not designed for underwater use.
             Sensing accuracy affected by soft materials.

## Oportunities

             They have greater accuracy than many other methods at measuring thickness and distance to a parallel surface.
             
             Their high frequency, sensitivity, and penetrating power make it easy to detect external or deep objects
             
             Our ultrasonic sensors are easy to use and not dangerous during operation to nearby objects, people or equipment.
             
             Our sensors easily interface with microcontrollers or any type of controller. Sense an hand and pour liquid soap 
             
             for 20 sec and get auto off.
             
## Threats

             Limited testing distance.
             Inaccurate readings.
             Inflexible scanning methods.
             
# 4W's and 1H

## Who

     For peoples general use to washing hands.
     
## Where
 
     Both Public and Private usage.
     
## What

     Auto touchless HandWashing Timer.
     
## When

     Every day Every time Every where only when detects an object.
     
## How

     Product with fully automated and controlled.
     
# High Level Requirements

      RID	       DESCRIPTION	   STATUS
      HLR1	       ATMEGA 328p	   Implemented
      HLR2	       C language	   Implemented
      HLR3	       Ultrasonic sensor   Implemented
      
# Low Level Requirements

      RID	       DESCRIPTION	    STATUS
      LLR1	       Timer settings       Implemented
      LLR2	       Beep/sound           Implemented
      LLR3	       LCD Display	    Implemented
      
# 2_Design

## Behavioural Diagram

![image](https://user-images.githubusercontent.com/94229525/144294948-2124915d-57e8-4cc1-9cdd-3a5213beccf0.png)

## Block Diagram

![image](https://user-images.githubusercontent.com/94229525/144294997-c404bb82-e3ea-48fd-ac61-fc0fde87f63a.png)

## Structural Diagram
![image](https://user-images.githubusercontent.com/94229525/144295038-8b089ae4-8ef7-4817-997c-2782e54b6d2e.png)

## File Structure

| File  | Description                                    |              
|:------- |:---------------------------------------------- |
| ` Structural Diagrams`  |  represents the structure of the system                               |                     
| `Behavioural Diagrams`   | portrays the flowchart of a system, which describes the functioning of the system |
| `Block Diagrams`  |  functions are represented by blocks connected by lines |
| `Simulations` | Simulation part is represented  |
| `Bill of Materials` | structured list identifying all materials and components required to construct a product |

# 3_Implimentation

## Folder Structure

Folder          | Description
--------------  | ----------------------------------------------
`Documentation` |  Doxyfile
`inc`           |  header files
`src`           | Source code files for solving code operations
`Makefile`      | Makefile content
`Main`          | File contains main.c

# 4_TestPlanAndOutput

### High Level Test plan:

| ID    | Description                             | Expected O/P | Actual O/P | Type of Test |
|-------|-----------------------------------------| ------------ | ---------- | ------------ |
| H_01  |Detecting HUMAN Hand                     |Detecting     |SUCCESS     | Requirement  |
| H_01  |Object longs for a second                |Sanitizing    |SUCCESS     | Scenario     |
| H_03  |Delay OFF                                |Running       |SUCCESS     | Boundary     |


### Low Level Test Plan:

| ID    | Description                 | Expected O/P | Actual O/P | Type of Test | 
|-------|-----------------------      | ------------ | -----------| ------------ |
| L_01  |Identify and sense Object    | Detected     |SUCESS      | Requirement  |
| L_02  |Display Process              | Processing   |SUCESS      | Scenario     |
| L_03  |Autooff&Beep                 | Done         |SUCCESS     | Boundary     |

# 5_ImageAndOutput

![image](https://user-images.githubusercontent.com/94229525/144297403-a255f3dd-5bf7-4d52-9394-919ea69145f5.png)

                Figure:Touchless Handwash Timer with Ultrasonic Sensor and atmega 328p
                
 # Simulation
 ![image](https://user-images.githubusercontent.com/94229525/144404827-7b8c0777-99ad-411f-9f45-afaaacf3fe70.png)







