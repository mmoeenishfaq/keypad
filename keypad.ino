#include <Key.h>
#include <Keypad.h>


const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte colPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte rowPins[COLS] = {9, 8, 7, 6}; //connect to the column pinouts of the keypad
char data[4];
int index=0;
int position =0;
char* password = "8888"; 
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
   Serial.begin(9600);
}
  
void loop(){
  char key = keypad.getKey();
if(key)
{
  data[index]=key;
  Serial.print(data);
  
  
  
  }
if (key == password[position])
{
position ++;
}
if (position == 4)
{
  Serial.println();
Serial.print("password accepted");
position=0;
}


delay(100);  
}




























    //if (key){
    //  if(index<=4)
  //{
  // data[index]=key;
  //  //Serial.print(data[index]);
  // //pas[index]=data[index];
  // Serial.print(data[index]);
  //
  // index++;
  //}
  //
  //  }
  //if(index==4)
  //{
  //String str(data);
  //Serial.println();
  //Serial.println(str);
  //if(str==password)
  //{
  //  Serial.print("afas"); 
  //}
  //index=0;
  //} 
  
