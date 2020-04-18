/***********************************************************
  项目名：基于RCWL-1201增强型12mm超声波探头的避障提醒系统
  作者：BlackBox114
  当前版本描述：
  开发板：Digspark（Default-16.5mhz）
  单方向测距，测距范围5-400cm，有少许误差和误报
  检测到障碍物后触发震动提醒
  距离越近，提醒强度越强
  修改人：\
  修改时间：2018.4.9
  修改内容：\
  接线：
  trig==>P2
  echo==>P3
  震动电机==>P1
  vcc==>VCC
  gnd==>GND
  /***********************************************************/
const int LEDPin = 1;//振动电机引脚定义
const int TrigPin = 0; //发出超声波
const int EchoPin = 4; //收到反射回来的超声波
float cm; //因为测得的距离是浮点型的
void setup()//初始化程序
{
  Serial.begin(9600); //设置波特率
  pinMode(TrigPin, OUTPUT);//设置超声波触发引脚为输出模式
  pinMode(EchoPin, INPUT);//设置回声接收引脚为输出模式
  pinMode(LEDPin, OUTPUT);//设置测试用led引脚为输出模式
  digitalWrite(LEDPin, LOW);//设置测试用led关闭
}
void loop()
{
  digitalWrite(TrigPin, LOW); //低高低电平发一个短时间脉冲去TrigPin
  delayMicroseconds(2);       // delayMicroseconds在更小的时间内延时准确
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW); //通过这里控制超声波的发射

  cm = pulseIn(EchoPin, HIGH) / 58.0; //将回波时间换算成cm
  cm = (int(cm * 100.0)) / 100.0; //保留两位小数
  Serial.println("距离障碍物");
  Serial.println(cm);
  if (cm < 50 )//若测出障碍物距离小于20cm
  {
    analogWrite(1, 255);//PWM输出最小占空比，100%高电平
  }
  else if (cm >= 50 && cm < 100)
  {
    analogWrite(1, 172);
  }
  else if (cm >= 100 && cm < 150)
  {
    analogWrite(1, 90);
  }
  else if (cm >= 150 && cm < 200)
  {
    analogWrite(1, 45);
  }
  else
  {
    analogWrite(1, 1);
  }
  delay(500);

}
