FABS(Force based accelaration and braking system) is a modified version of the traditional pedal mechanism in cars. 
Explored different ways to replace the traditional brakes and accelerator pedals. 
Used weight sensors in place of pedals to mimic the action of acceleration and braking. 
Used Bluetooth sensors to collect input from the sensor(Control side) and send it to the Arduino where input is processed and a 4 wheeled robot is moved. 
Sensors are calibrated to each person's capabilities(like less pressure for weak people). 
Separating the sensors from the robot helped in automating the vehicle and enabled remote control of the vehicle.

The files:
 > Driver.ino contains the code which is used at the controller side
 > LCD_Screen.ino has the code to display the command given to the wireless vehicle from the control side on a LCD screen
 > Vehicle.ino has the code which is put on the wireless vehicle.
