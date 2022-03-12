# REPORT - RKE BI-DIRECTIONAL COMMUNICATION SYSTEM
## Folder Structure and Contributors:-
   | Folder | Description | Contributors |
   |:---:|:---:|:---:|
   | 1_Requirements | Descirption, Features, State of art, SWOT Analysis, 5W'S & 1H | Deepika |
   |                | High and Low Level Requirements | Deepika |
   |                | Advantages & disadvantages | Deepika |
   | 2_Architectures | Behavioral & Structural diagrams | Shirisha |
   | 3_Implementation | Source Code files | Shirisha, Deepika, Ravi, Navin |
   | 4_TestplanAndOutput | High and Low Level Test Plans | Ravi |
   | 5_Report | Described about what is done in this project | Navin |
   | 6_ImagesAndVideos | Captured outputs | Shirisha, Deepika, Ravi, Navin |
   | 7_ Others                | Conclusion, Tools Used | Shirisha |
 
## Description
  The focus of this project is remotely knowing the status of automobiles in Bi-Directional Communication RKE method which works as same as Unidirectional RKE System with a key which is capable of two way communication with the car is the extension here. Its communication interface is better than Unidirectional way.
## Research:
 ### State of art
 * By using this advanced modern technologies we are remotely monitoring the status of Car.
 * The transmissions between the car and key are encrypted to prevent theft.
 * Notify you that the command by the user using key fob has been executed in the Bi-Com system which has more securable than Unidirectional RKE System.
## Cost
   Comparing with the Unidirectioanl RKE System its Cost High which includes two features in one product.
## Features
 * To print **Window** status of the car as a result all LED on at the same time
 * To print **Alarm** status as a result all LED off at the same time
 * To print **Car battery information** as a result all LED on in clockwise manner
 * To print **Door status** of the car as a result all LED on in anti-clockwise manner)
 
 Based on the press count of the Blue button switch (1-4) the above mentioned features are going to work accordingly .
## 5 W's & 1'H
 ![image](https://user-images.githubusercontent.com/98866123/157860770-fa06696b-b6e6-4835-bbce-832179709d52.png)
## SWOT Anlaysis
 ![image](https://user-images.githubusercontent.com/98866123/157855366-995bf939-f808-497f-a32d-c434c49040e5.png)

## Detail Requirements
 ### High Level Requirements
| ID | High Level Requirements |
| :---: | :---: |
| HLR1 | System shall be able to print **Window status** of automobile |
| HLR2 | System shall be able to print **Alarm status** of automobile |
| HLR3 | System shall be able to print **Car Battery information** |
| HLR4 | System Shall be able to print **Door status** of the automobile |

### Low Level Requirements
| ID | Low Level Requirements for HLR1 | ID	| Low Level Requirements for HLR2 |
| :---: | :---: | :---: | :---: |
| LLR1.1 |	If the user wants to print WINDOW STATUS, user press the Blue button ONE TIME | LLR2.1 |	User press the Blue button TWO TIMES to print ALARM STATUS |
| LLR1.2  |	The system shall ON all the LED's |	LLR2.2 | The system shall OFF all the LED's  |
| **ID** |	**Low Level Requirements for HLR3** |	**ID** | **Low Level Requirements for HLR4** |
| LLR3.1 | User press the Blue button THREE TIMES to print CAR BATTERY INFORMATION  |	LLR4.1 | User press the Blue button FOUR TIMES to print DOOR STATUS of the automobile |
| LLR3.2 | All the LED's ON in CLOCKWISE MANNER |	LLR4.2 | All the LED's ON in ANTICLOCKWISE MANNER |
| LLR3.3 | Example : Green->Orange->Red->Blue->Green | LLR4.3 | Example : Green->Blue->Red->Orange->Green |
## Advantages
* Convenience, better security, automatic work control.
* No need of human interaction with the car.
* This system provides easy security access to the automobiles through encryption.
* The automobile owners shall get benefited.
## Disadvantages
* If remote is lost then automobile security is in more trouble.
* If any other remote have our remote frequency then our automobile security is in trouble.
* This system works on certain limited range.
# ARCHITECTURE

## 1) Behavioral Diagrams

#### * High Level Sequence Behavioral Diagram
 ![image](https://user-images.githubusercontent.com/98866123/157879858-75075707-0af4-4007-96c5-2d5ea2dedfe1.png)


#### * Low Level Flow Chart Behavioral Diagram
 ![image](https://user-images.githubusercontent.com/98866123/157896498-fa717b3b-9f93-4d3b-9d6c-8dc510914500.png)


## 2) Structural Diagrams

#### * High Level Use Case Structural Diagram
 ![image](https://user-images.githubusercontent.com/98866123/157895629-a47fdcc6-eb01-49ad-9b5c-18383aed25df.png)

#### * Low Level Use Case Structural Diagram
![image](https://user-images.githubusercontent.com/98866123/157896257-f4ae11b9-0c81-4fa3-922f-77fc8cdce0ab.png)
## Best Method Followed
* Detailed working flow explained in Structural and Behavioral diagram.
* For better understanding the system function is explained in clear format by High and Low level design for both Behavioral and Structural Diagram. 
# TEST PLAN
## High level test plan
|Test ID|Description|Input|Expected Output|Actual Output|Pass/Fail|
|:----:|:----:|:----:|:----:|:----:|:---:|
|HLT1|Window status|User press Blue button Once|Print Window Status|Printed Window Status|Pass|
|HLT2|Alarm status|User press Blue button Twice|Print Alarm Status|Printed Alarm Status|Pass|
|HLT3|Car Battery Information |User press Blue button Thrice|Print Car Battery Status|Printed Car Battery Status|Pass|
|HLT4|Door status|User press Blue button Four times|Print Door Status|Printed Door Status|Pass|
## Low level test plan
|ID|Description|Input|Expected Output|Actual Output|Status|
|:----:|:---:|:---:|:------:|:----:|:---:|
|LLT1|All LED's ON |User press Blue button Once|All LED's shall ON at the same time|All LED's ON at the same time|✔|
|LLT2|All LED's OFF |User press Blue button Twice|All LED's shall OFF at the same time|All LED's OFF at the same time|✔|
|LLT3|All LED's ON in clockwise manner|User press Blue button Thrice|All LED's shall ON in clockwise manner Green->Orange->Red->Blue->Green|All LED's ON in clockwise manner Green->Orange->Red->Blue->Green|✔|
|LLT4|All LED's ON in anti-clockwise manner|User press Blue button Four times|All LED's shall ON in anti-clockwise manner Green->Blue->Red->Orange->Green|All LED's ON in anti-clockwise manner Green->Blue->Red->Orange->Green|✔|

# Output in cygwin terminal
![Screenshot (114)](https://user-images.githubusercontent.com/98948360/158001215-c76ec4bc-1056-42b2-af8d-780c3bf30c8c.png)


# CONCLUSION
 Bi-Com System of Remote Keyless Entry(RKE) is system where automobile owners are much more befenited for handling the automobile like diplaying or printing the car status such as Window, Alarm, Car Battery information & Door status and monitoring the status of the automobile remotely in a two way communication method between the key fob and car.  The scope of this system is huge in automobiles.  This is the Better Security system with Highly Encrypted with no need of direct human interactions with the car.
 ## TOOLS USED
* STM32CubeIDE
* Cygwin



