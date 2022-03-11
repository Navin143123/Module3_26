# REPORT - REMOTE KEYLESS ENTRY ( RKE )
## ABSTRACT  
 An Automobile or Car is a land vehicle used to carry passengers. Automobiles usually have four wheels, and an engine or motor to make them move. Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles. Security is more important in automobiles as they are costly to buy. Costly cars had more features than normal cars. In this project we are going to lock or unlock the automobiles using remote.

## IDENTIFYING FEATURES
* STM32F407VG controller shall be used for the control of the system.
* LCD Display shall be provided to display operations.
* This system provides easy security access to the automobiles through encryption.
* The remote shall send radio signals with particular frequency.
* The automobile owners shall get benefited.

## STATE OF ART
### RKE transmission requires two components - a transmitter and a receiver. 
 * Transmitter - RKE key fob, other ID device with RKE integrated 
 * Receiver - Body Control ECU, other ECU with integrated RKE 
RKE operates by broadcasting radio waves on a particular frequency unidirectionally. RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams. 
  
## 5W’s 1H
![Screenshot (103)](https://user-images.githubusercontent.com/98948360/157801872-6769e0e2-f3cf-4327-ba11-0a323d103aea.png)

## SWOT ANALYSIS
![Screenshot (101)](https://user-images.githubusercontent.com/98948360/157801547-2273ba44-c550-463c-ae85-6ee2737da846.png)

## REQUIREMENTS

### High Level Requirements
| ID | High Level Requirements |
| :---: | :---: |
| HLR1 | System shall control automobile lock or unlock |
| HLR2 | There shall be an LCD to display some functions |
| HLR3 | Remote shall be used to control the automobile |
| HLR4 | System Shall send frequency |

### Low Level Requirements
| ID | Low Level Requirements for HLR1 | ID	| Low Level Requirements for HLR2 |
| :---: | :---: | :---: | :---: |
| LLR1.1 |	According to signal frequency, lock system shall be controlled | LLR2.1 |	Lock & Unlock status shall be displayed |
| LLR1.2  |	The system shall be control by remote |	LLR2.2 |	Alarm activation/deactivation & approach light  status shall be displayed |
| **ID** |	**Low Level Requirements for HLR3** |	**ID** | **Low Level Requirements for HLR4** |
| LLR3.1 | Lock & Unlock shall be controlled|	LLR4.1 | Remote shall send the signal to automobile with particular frequency |
| LLR3.2 | Alarm activation/deactivation & approach light shall be controlled |	LLR4.2 |  Remote shall uses encryption ,eg(1+2 is sended, 3 should be received |

## ADVANTAGES
* Easy to use.
* It helps to protect automobile from thieves.
* During night it is very easy to find automobile if more cars are present.

## DISADVANTAGES
* If any other remote have our remote frequency then our automobile security is in trouble.
* If our remote is lost then our automobile security is in more trouble.

# Architecture

## 1) Behavioral Diagram:

* High Level Behavioral Diagram 
 ![image](https://user-images.githubusercontent.com/98866123/157897659-5d22b0e6-29b7-4a72-80cb-89106c0bafc2.png)

* Low Level Behavioral Diagram
 ![image](https://user-images.githubusercontent.com/98866123/157897845-13d58e8a-ee65-44bd-aaf0-6baddecbc4cb.png)

## 2) Structural Diagram:

 * High Level Stuctural Diagram

<img width="747" alt="bb" src="https://user-images.githubusercontent.com/99073372/157856388-27ba62b4-a408-41a2-aa8b-acbe1cce09bc.PNG">

 * Low Level Stuctural Diagram
 ![image](https://user-images.githubusercontent.com/98866123/157898082-0d927434-d046-40ad-af45-91233299fa8e.png)

# High level test plan
|Test ID|Description|Input|Expected Output|Actual Output|
|:----:|:----:|:----:|:----:|:----:|
|HLT1|The system shall lock the car doors|User press button|Car locked|Car locked|
|HLT2|The system shall unlock the car doors|User press button|Car unlocked|Car unlocked|
|HLT3|The system shall control the alarm|User press button|Car alarm activate/deactivate|Car alarm activate/deactivate|
|HLT4|The system shall approach the lights|User press button|Car approach light|Car approach light|
# Low level test plan
|ID|Description|Input|Expected Output|Actual Output|Status|
|:----:|:---:|:---:|:------:|:----:|:---:|
|HLT1|All the LED's should ON at the same time|User press button once|All LED's ON|All LED's ON|✔|
|HLT2|All the LED's should OFF at the same time|User press button twice|All LED's OFF|All LED's OFF|✔|
|HLT3|All the LED's should ON in clockwise manner|User press button thrice|All LED's ON in clockwise manner|All LED's ON in clockwise manner|✔|
|HLT4|All the LED's should ON in anti-clockwise manner|User press button four times|All LED's ON in anti-clockwise manner|All LED's ON in anti-clockwise manner|✔|
















