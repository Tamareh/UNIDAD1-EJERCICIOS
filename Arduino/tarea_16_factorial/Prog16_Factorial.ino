int n;
int aux;
int result = 0;
int cont;

void setup() {
  // put your setup code here, to run once:
  result = 0;
  Serial.begin(9600);
  Serial.println("Ingresa un numero");
}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available()>0) {
  n = Serial.readString().toInt();
  cont = n;

  if ( cont >= 1 && cont <= 10){
    result = n * cont;
    cont --;
    aux = result;
  }
  else
    Serial.println(aux);

  
}

delay(100);
}
