
float numdatos=5, num=0, prom=0, sum=0;

void setup() {
  // put your setup code here, to run once:
Serial.print("ingresa los 5 numeros");
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>=0){
  for(int i=0; i<=4; i++){
    num = Serial.readString().toInt();
    sum=sum+num;
  }
  prom=sum/numdatos;
  Serial.print("El promedio es: ");
  Serial.println(+prom);
}
}
