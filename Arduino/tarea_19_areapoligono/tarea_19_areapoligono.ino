
int n1,n2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  Serial.print("proporcione la longitud");
  n1= Serial.readString().toInt();
  Serial.print("proporcione el apotema");
  n2= Serial.readString().toInt();

  Serial.print("el area del poligono regular es de:");
  Serial.println((5*n1*n2)/2);
  
}
delay(250);
}
