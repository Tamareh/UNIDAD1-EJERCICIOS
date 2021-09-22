float x1,y1,x2,y2,xm,ym;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  Serial.print("proporcione x1");
  x1=Serial.readString().toFloat();
  Serial.print("proporcione y1");
  y1=Serial.readString().toFloat();
  Serial.print("proporcione x2");
  x2=Serial.readString().toFloat();
  Serial.print("proporcione y2");
  y2=Serial.readString().toFloat();

  xm=(x1+x2)/2;
  ym=(y1+y2)/2;

  Serial.print("el punto medio PMX es:");
  Serial.println(xm);
  Serial.print("el punto medio PMY es:");
  Serial.println(ym);
  
}
}
