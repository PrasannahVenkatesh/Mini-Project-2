# Mini-Project-2

Its my third year acadamic project. "Self Moving Bot" - 
People will be very concerned about their luggage while travelling and we also expect a hand free experience. A following luggage  will be an amazing thing if it exists with us. An auto following luggage like a robotic pet which always follows us.
 Following the owner will be a bigger task. This can be made possible by having a connection between the luggage and the owner through a connectivity technology and can direct the luggage to follow the owner. This can be done by connecting owners mobile hotspot to the wifi module present in suitcase by calculating the distances and variation of signal strengths that occur due to the movement of owner.
 According to the variation of signal strength the suitcase moves with the owner in which direction he moves. If the luggage gets struck or if the owner misplaces somewhere, owner gets an alert signal .

Components - 
NODEMCU,
Ultrasonic sensor,
Bot chases,
Wheels,
Power supply.

Working:
The bot should be connected to our device hotspot.
Firstly the distance between the owner and the bot is measured, if it is greater than minimum distance then the bot starts to move.
The bot follows the owner according to the movement of owner.
The direction of movement is estimated by identifying the signal strength of connection.
The RSSI of the connection is estimated by wifi module.
The signal strength decreases if the distance between owner and the bot increases.
A threshold value for the strength is calculated for minimum distance, if the current signal strength is lesser than the threshold value the bot moves forward that means the owner is moving forward.
If the strength is found to be greater than the threshold value the bot stops and doesn’t move it means that the distance between owner and bot is very less or the owner is not moving
