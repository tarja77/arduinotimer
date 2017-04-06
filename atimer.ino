
void Tick()
{
unsigned long Time = millis();
static unsigned long TimePrev = Time;
static unsigned long Interval1 = 0;// 1. timer
static unsigned long Interval2 = 0;// 2. timer
Interval1 += Time - TimePrev;
Interval2 += Time - TimePrev;

  if(Interval1 > 1000){//1 saniye
    
Serial.println("timer1");

 Interval1 = 0;
   
  }
  if(Interval2 > 5000){//5 saniye

Serial.println("timer2");

    Interval2 = 0;
  }
TimePrev = Time;
 }


void setup() {
  Serial.begin(9600);
}

void loop() {
Tick();
delay(100);
}
