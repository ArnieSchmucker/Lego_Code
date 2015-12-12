const byte rtMotorPin1 = 4;
const byte rtMotorPin2 = 5;  //pwm
const byte ltMotorPin2 = 6;  //pwm
const byte ltMotorPin1 = 7;


int currentMode = 0;
int motorDir = 0;
int rtSpeed = 255;
int ltSpeed = 255;
void setup()
{
  
  pinMode(rtMotorPin1, OUTPUT);
  pinMode(rtMotorPin2, OUTPUT);
  pinMode(ltMotorPin1, OUTPUT);
  pinMode(ltMotorPin2, OUTPUT);
}

void loop()
{
    
  rtMotor(rtSpeed, 0);
  ltMotor(ltSpeed, 0);
}

void rtMotor(int rtPwm, boolean reverse)
{
  analogWrite(rtMotorPin2, rtPwm);
  if (reverse) {
    digitalWrite(rtMotorPin1, LOW);
  }
  else {
    digitalWrite(rtMotorPin1, HIGH);
  }
}

void ltMotor(int ltPwm, boolean reverse)
{
  analogWrite(ltMotorPin2, ltPwm);
  if (reverse) {
    digitalWrite(ltMotorPin1, LOW);
  }
  else
  {
    digitalWrite(ltMotorPin1, HIGH);
  }
}

