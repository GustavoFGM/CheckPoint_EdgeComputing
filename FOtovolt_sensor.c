//codigo arduino para um sensor de luminosidade no ambiente
//(resistor fotovoltaico) com utilizaçao de um piezo

int sensor;
void setup()
{
  pinMode(A0, INPUT);  //Sensor
  pinMode(A1, OUTPUT); //Led vermelhor
  pinMode(A2, OUTPUT); //LED amarelo
  pinMode(A3, OUTPUT); //LED verde
  pinMode(A4, OUTPUT); //piezo
  Serial.begin(9600);
}

void loop()
{

//LED verde

sensor = analogRead(A0);
Serial.println(sensor);
 if (sensor<100) {
 digitalWrite(A1,0);   
 digitalWrite(A2 ,0);
 digitalWrite(A3 ,1);
 digitalWrite(A4 ,0);
  }
 //LED amarelo

if (sensor>100 $$ sensor < 130) {
digitalWrite(A1, 0);
digitalWrite(A2, 1);
digitalWrite(A3, 0);
digitalWrite(A4 ,0);
}
//LED vermelhor e piezo
 if (sensor>130){
 digitalWrite(A1, 1);
 digitalWrite(A2, 0);
 digitalWrite(A3, 0);
 digitalWrite(A4 ,1);
delay(1000);
 }
}