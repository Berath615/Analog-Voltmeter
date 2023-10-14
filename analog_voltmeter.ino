int LOW_RIGHT = 2;
int LOW_BOTTOM = 3;
int LOW_LEFT = 4;
int MID = 5;
int TOP_RIGHT = 6;
int TOP_UPPER = 7;
int TOP_LEFT = 8;
int read_pin = A3;
int time = 3000;
int num;

void open_LED(int side){
  digitalWrite(side,HIGH);
}
void LED_off(int side){
  digitalWrite(side,LOW);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(LOW_RIGHT,OUTPUT);
  pinMode(LOW_BOTTOM,OUTPUT);
  pinMode(LOW_LEFT,OUTPUT);
  pinMode(MID,OUTPUT);
  pinMode(TOP_RIGHT,OUTPUT);
  pinMode(TOP_UPPER,OUTPUT);
  pinMode(TOP_LEFT,OUTPUT);
  pinMode(read_pin,INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readVal = analogRead(read_pin);
  float num1 = (5./1023.)*readVal;
  delay(500);
  Serial.println(num1);
  num = num1;
  if(num == 0){
    open_LED(TOP_UPPER);
    open_LED(TOP_RIGHT);
    open_LED(TOP_LEFT);
    open_LED(LOW_BOTTOM);
    open_LED(LOW_RIGHT);
    open_LED(LOW_LEFT);
    delay(time);
    LED_off(TOP_UPPER);
    LED_off(TOP_RIGHT);
    LED_off(TOP_LEFT);
    LED_off(LOW_BOTTOM);
    LED_off(LOW_RIGHT);
    LED_off(LOW_LEFT);

 
  }
  if(num == 1){
    open_LED(TOP_RIGHT);
    open_LED(LOW_RIGHT);
    delay(time);
    LED_off(TOP_RIGHT);
    LED_off(LOW_RIGHT);
  }
  if(num == 2){
    open_LED(TOP_UPPER);
    open_LED(TOP_RIGHT);
    open_LED(MID);
    open_LED(LOW_LEFT);
    open_LED(LOW_BOTTOM);
    delay(time);
     LED_off(TOP_UPPER);
     LED_off(TOP_RIGHT);
     LED_off(MID);
     LED_off(LOW_LEFT);
     LED_off(LOW_BOTTOM);
  }
  if(num == 3){
    open_LED(TOP_UPPER);
    open_LED(TOP_RIGHT);
    open_LED(MID);
    open_LED(LOW_RIGHT);
    open_LED(LOW_BOTTOM);
    delay(time);
    LED_off(TOP_UPPER);
    LED_off(TOP_RIGHT);
    LED_off(MID);
    LED_off(LOW_RIGHT);
    LED_off(LOW_BOTTOM);
  }
  if(num == 4){
    open_LED(TOP_LEFT);
    open_LED(TOP_RIGHT);
    open_LED(MID);
    open_LED(LOW_RIGHT);
    delay(time);
    LED_off(TOP_LEFT);
    LED_off(TOP_RIGHT);
    LED_off(MID);
    LED_off(LOW_RIGHT);
     
  }
  if(num == 5){
    open_LED(TOP_UPPER);
    open_LED(TOP_LEFT);
    open_LED(MID);
    open_LED(LOW_RIGHT);
    open_LED(LOW_BOTTOM);
    delay(time);
    LED_off(TOP_UPPER);
    LED_off(TOP_LEFT);
    LED_off(MID);
    LED_off(LOW_RIGHT);
    LED_off(LOW_BOTTOM);
  }
  if(num == 6){
    open_LED(TOP_UPPER);
    open_LED(TOP_LEFT);
    open_LED(MID);
    open_LED(LOW_RIGHT);
    open_LED(LOW_LEFT);
    open_LED(LOW_BOTTOM);
    delay(time);
    LED_off(TOP_UPPER);
    LED_off(TOP_LEFT);
    LED_off(MID);
    LED_off(LOW_RIGHT);
    LED_off(LOW_LEFT);
    LED_off(LOW_BOTTOM);
  }
  if(num == 7){
    open_LED(TOP_UPPER);
    open_LED(TOP_RIGHT);
    open_LED(LOW_RIGHT);
    delay(time);
    LED_off(TOP_UPPER);
    LED_off(TOP_RIGHT);
    LED_off(LOW_RIGHT);
  }
  if(num == 8){
    open_LED(TOP_UPPER);
    open_LED(TOP_LEFT);
    open_LED(TOP_RIGHT);
    open_LED(MID);
    open_LED(LOW_RIGHT);
    open_LED(LOW_LEFT);
    open_LED(LOW_BOTTOM);
    delay(time);
     LED_off(TOP_UPPER);
     LED_off(TOP_LEFT);
     LED_off(TOP_RIGHT);
     LED_off(MID);
     LED_off(LOW_RIGHT);
     LED_off(LOW_LEFT);
     LED_off(LOW_BOTTOM);
  }
  if(num == 9){
    open_LED(TOP_UPPER);
    open_LED(TOP_RIGHT);
    open_LED(TOP_LEFT);
    open_LED(MID);
    open_LED(LOW_RIGHT);
    open_LED(LOW_BOTTOM);
    delay(time);
    LED_off(TOP_UPPER);
    LED_off(TOP_RIGHT);
    LED_off(TOP_LEFT);
    LED_off(MID);
    LED_off(LOW_RIGHT);
    LED_off(LOW_BOTTOM);
  }


 
}
