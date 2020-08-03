const int rain_int= 3;
#define led_pin=13
volatile int total=0;

void setup()
{
  pinMode(rain_int,INPUT);
  pinMode(LED_Pin=OUTPUT);
  digitalWrite(LED_Pin= LOW);
  attachInterrupt(digitalPinToInterrupt(rain_int),count,RISING);
  Serial.begin(9600);
}
void loop()
{
  Serial.print("count is =");
  Serial.print(total);
  Serial.print("interrupt yes or no");
  Serial.println(digitalRead(rain_int));
  delay(1000);
  digitalWrite(led_pin=LOW);
}
void count()
{
  total+=1;
  digitalWrite(led_pin=HIGH);
}