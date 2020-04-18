# 超简单的超声波避障手环
### 简介
一个简单的超声波避障手环，离障碍物越近，手环震动越强烈。使用attiny85作为主控，超声波传感器是RCWL-1201。

### 设计指标
①单方向测距，测距范围5-400cm
②检测到障碍物后触发震动提醒
③距离越近，提醒强度越强
④至少续航3-4h
⑤体积尽可能小，最好做到手环大小

### 物料清单
RCWL-1201*1

Digispark（不带usbPad版本）*1

751635 380mAh锂电池*1

震动电机*1

### 接线图
  trig==>P2
  
  echo==>P3
  
  震动电机==>P1
  
  vcc==>VCC
  
  gnd==>GND
  
#### 图中元件图示型号有误，仅展示接线图，元件请参考物料清单
![image](https://github.com/blackbox114/tiny_wristband/blob/master/img/0.png)




