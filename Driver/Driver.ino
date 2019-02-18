//Declare the pins being used


//Inputs from the toggle switches.
int MS = A3;
int Mode0 = A4;
int Mode1 = A5;

//A variable indidcating the effective state.
int ModeNo;

//Pins for the bluetooth
int Tx;
int Rx;
int En;

//Pins for Load cell1
int A1;
int A2;
int A3;
int A4;
int A5;

//Pins for Load cell2
int B1;
int B2;
int B3;
int B4;
int B5;

int Spd;
int Brk;

int Spdo;
int Brko;

string bOut;
int bluetoothOutput;

void setup() {
  //Setup the pinmodes.
  pinMode(MS,INPUT);
  pinMode(Mode0,INPUT);
  pinMode(Mode1,INPUT);

  //Bluetooth connnection setup.
  pinMode(Tx,);
  pinMode(Rx,);
  pinMode(En,);


  //Load cell connection and setup.
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);

  pinMode(B1,INPUT);
  pinMode(B2,INPUT);
  pinMode(B3,INPUT);
  pinMode(B4,INPUT);
  pinMode(B5,INPUT);

 
  
}

void loop() {
 
   
  //Read input of toggle switches.

   ModeNo =  2*Mode1 + Mode0; 
  
  //Now read the input from the Load cells.

  

  //Convert the bits dat to integer data.

     Spd = 2*A1 + 4*A2 + 8*A3 + 16*A4 + 32*A5;
     Brk = 2*B1 + 4*B2 + 8*B3 + 16*B4 + 32*B5;
  
  //Based on the scaling factor of the respective mode send appropriate speed to the other device.

     if(ModeNo == 0)
     {   
         Spdo = Spd;
         Brko = Brk;
       
     }

     else
     {
        if(ModeNo == 00)
        {
         
          if(Spd<25)
          {
            Spdo = Spd;       
          }
          else
          {
            Spdo = 25;
          }

          if(Brk<25)
          {
            Brko = 2*Brk;
          }

          else
          {
            Brko = 60;
          } 
        }
        
        else if(ModeNo == 01)
        {
           Spdo = Spd/2;
           if(Brko<30)
           {
            Brko = 2*Brk;
           }
           else
           {
            Brko = 60;
           }
        }

        else if(ModeNo == 10)
        {
           if(Spd<40)
           {
             Spdo = Spd + 20;
           }
           else
           {
             Spdo = 60;
           }
           
        }

        else 
        {
           Brko = Brk/2;
           
          if(Spd<30)
          {
            Spdo = Spd;       
          }
          else
          {
            Spdo = 30;
          }
        }
        
     }


       string temp = String(Spdo);
       bOut =   String(strlen(temp)) + String(Spdo) + String(Brko);
  //Always keep reading for the change in mode or change in load cell data and act on the changes.

        //Send the data to vehicle through bluetooth;
}
