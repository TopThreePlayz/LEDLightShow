int blue4 = 0;
int green1 = 1;
int blue1 = 2;
int green2 = 3;
int red_light_pin = 4;
int green_light_pin = 5;
int blue_light_pin = 6;
int blue2 = 7;
int green3 = 8;
int red1 = 9;
int red2 = 10;
int green4 = 11;
int blue3 = 12;
int soundPin = 0;
int buttonPin = 13;
int buttonState = 0;
int sound;
int scale;
int restart = 0;
int brightness = 255;
int fadeAmount = -5;

int blueGroup[] = { blue1, blue2, blue3, blue4 };
int greenGroup[] = { green1, green2, green3, green4 };
int redGroup[] = { red1, red2 };
void setup() {
  pinMode(blue1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  pinMode(blue3, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green4, OUTPUT);
  pinMode(blue4, OUTPUT);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  pinMode(buttonPin, INPUT);
  //Serial.begin(9600);
} 
void loop() {
	buttonState = digitalRead(buttonPin);
  delay(50);
  
  if (buttonState == 1) {
  BlueGroup(0, HIGH, 0, 4);
  RGB_color(0, 0, 255); // blue
  delay(200);
  RGB_color(0, 0, 0);
  BlueGroup(0, LOW, 0, 4);
  delay(200);
  RGB_color(255, 0, 0);
  RedGroup(0, HIGH);
  delay(200);
  RGB_color(0, 0, 0);
  RedGroup(0, LOW);
  delay(200);
  RGB_color(0, 255, 0);
  GreenGroup(0, HIGH, 0, 4);
  delay(200);
  RGB_color(0, 0, 0);
  GreenGroup(0, LOW, 0, 4);
  delay(200);
  RGB_color(0, 255, 0);
  GreenGroup(0, HIGH, 0, 4);
  delay(200);
  RGB_color(0, 0, 0);
  GreenGroup(0, LOW, 0, 4);
  delay(200);
  RGB_color(255, 0, 0);
  RedGroup(0, HIGH);
  delay(200);
  RGB_color(0, 0, 0);
  RedGroup(0, LOW);
  delay(200);
  //hammer
  
  for (int i = 0; i < 10; i++) {
  RGB_color(255, 0, 0);
  GreenGroup(0, HIGH, 0, 4);
  BlueGroup(0, HIGH, 0, 4);
  RedGroup(0, HIGH);
  delay(175);
  RGB_color(0, 0, 0);
  GreenGroup(0, LOW, 0, 4);
  BlueGroup(0, LOW, 0, 4);
  RedGroup(0, LOW);
  delay(200);
  }
  for (int i = 0; i < 2; i++) {
  GreenGroup(50, HIGH, 0, 4);
  RGB_color(255, 255, 0);
  BlueGroup(50, HIGH, 0, 4);
  RGB_color(165,42,42);
  RedGroup(50, HIGH);
  RGB_color(255, 0, 255);
  delay(50);
  RGB_color(255, 255, 0);
  GreenGroup(50, LOW, 0, 4);
  RGB_color(165,42,42);
  BlueGroup(50, LOW, 0, 4);
  RGB_color(255, 0, 255);
  RedGroup(50, LOW);
  RGB_color(0, 0, 0);
  delay(50);
  }
  for (int i = 0; i < 4; i++) {
  RGB_color(255, 0, 0);
  GreenGroup(0, HIGH, 0, 4);
  BlueGroup(0, HIGH, 0, 4);
  RedGroup(0, HIGH);
  delay(175);
   RGB_color(0, 0, 0);
  GreenGroup(0, LOW, 0, 4);
  BlueGroup(0, LOW, 0, 4);
  RedGroup(0, LOW);
  delay(200);
  }
  BlueGroup(0, HIGH, 0, 2);
  delay(200);
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH);
  delay(200);
  RedGroup(0, HIGH);
  RGB_color(255, 0, 0);
  delay(200);
  digitalWrite(green1, HIGH);
  digitalWrite(green4, HIGH);
  delay(200);
  BlueGroup(0, HIGH, 2, 4);
  delay(200);
  BlueGroup(0, LOW, 2, 4);
  delay(200);
  digitalWrite(green4, LOW);
  digitalWrite(green1, LOW);
   delay(200);
  RedGroup(0, LOW);
  RGB_color(0, 0, 0);
  delay(200);
  digitalWrite(green3, LOW);
  digitalWrite(green2, LOW);
  delay(200);
  BlueGroup(0, LOW, 0, 2);
  delay(200);
  BlueGroup(0, HIGH, 0, 2);
  delay(200);
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH);
  delay(200);
  RedGroup(0, HIGH);
  RGB_color(255, 0, 0);
  delay(200);
  digitalWrite(green1, HIGH);
  digitalWrite(green4, HIGH);
  delay(200);
  BlueGroup(0, HIGH, 2, 4);
  delay(200);
  BlueGroup(0, LOW, 2, 4);
  delay(200);
  digitalWrite(green4, LOW);
  digitalWrite(green1, LOW);
   delay(200);
  RedGroup(0, LOW);
  RGB_color(0, 0, 0);
  delay(200);
  digitalWrite(green3, LOW);
  digitalWrite(green2, LOW);
  delay(200);
  BlueGroup(0, LOW, 0, 2);
  delay(200);
  BlueGroup(50, HIGH, 0, 4);
  GreenGroup(50, HIGH, 0, 4);
  RedGroup(50, HIGH);
  for (int i = 0; i < 256; i+=5) {
      //Serial.println(i);
      analogWrite(blue4, 255-i);
      analogWrite(green1, 255-i);
      analogWrite(blue1, 255-i);
      analogWrite(blue2, 255-i);
      analogWrite(green2, 255-i);
      analogWrite(green3, 255-i);
      analogWrite(red1, 255-i);
      analogWrite(red2, 255-i);
      analogWrite(blue4, 255-i);
      analogWrite(green4, 255-i);
      analogWrite(blue3, 255-i);
      delay(20);
      
  }


  delay(2000);
  }
  else {
    GreenGroup(0, LOW, 0, 4);
    BlueGroup(0, LOW, 0, 4);
    RedGroup(0, LOW);
    RGB_color(0, 0, 0);
  }
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}

void BlueGroup(int time , bool condition, int startFrom, int endAt) {
  for (int i = startFrom; i < endAt; i++) {
    digitalWrite(blueGroup[i], condition);
    delay(time);
  }
}

void GreenGroup(int time, bool condition, int startFrom, int endAt) {
  for (int i = startFrom; i < endAt; i++) {
    digitalWrite(greenGroup[i], condition);
    delay(time);
  }
}
void RedGroup(int time, bool condition) {
  for (int i = 0; i < 2; i++) {
    digitalWrite(redGroup[i], condition);
    delay(time);
  }
}
